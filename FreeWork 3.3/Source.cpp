#include <iostream>
#include <string>

using namespace std;

//Дана квадратная матрица A порядка M.Найти среднее арифметическое элементов
//каждой ее диагонали, параллельной главной(начиная с одноэлементной диагонали
//	A1, M).

int main() {
	setlocale(LC_ALL, "RUS");
	int sideMatrix;
	string msg = "Матрица: \n";
	double arithmeticFirst = 0;
	double arithmeticSecond = 0;
	// int count = 0;
	cout << "Введите сторону квадратной матрицы: ";
	cin >> sideMatrix;


	int** matrix = new int* [sideMatrix];
	for (int i = 0; i < sideMatrix; i++) {  // создание матрицы
		matrix[i] = new int[sideMatrix];
	}

	for (int i = 0; i < sideMatrix; i++) {     //заполнение матрицы М
		for (int j = 0; j < sideMatrix; j++) {
			cin >> matrix[i][j];
			msg += to_string(matrix[i][j]) + "  "; 
		}
		msg += "\n";
	}


	for (int i = 0; i < sideMatrix; i++) {    //нахождение ариф среднего двух диоганалей
		arithmeticFirst += matrix[i][i];
		arithmeticSecond += matrix[i][sideMatrix - i - 1];
	}

	msg += "First dioganal: " + to_string(arithmeticFirst / sideMatrix) + "\nSecond dioganal: " + to_string(arithmeticSecond / sideMatrix); 

	cout << msg << endl;

	return 0;
}