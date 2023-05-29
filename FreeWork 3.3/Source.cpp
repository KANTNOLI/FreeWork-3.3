#include <iostream>
#include <string>

using namespace std;

//���� ���������� ������� A ������� M.����� ������� �������������� ���������
//������ �� ���������, ������������ �������(������� � �������������� ���������
//	A1, M).

int main() {
	setlocale(LC_ALL, "RUS");
	int sideMatrix;
	string msg = "�������: \n";
	double arithmeticFirst = 0;
	double arithmeticSecond = 0;
	// int count = 0;
	cout << "������� ������� ���������� �������: ";
	cin >> sideMatrix;


	int** matrix = new int* [sideMatrix];
	for (int i = 0; i < sideMatrix; i++) {  // �������� �������
		matrix[i] = new int[sideMatrix];
	}

	for (int i = 0; i < sideMatrix; i++) {     //���������� ������� �
		for (int j = 0; j < sideMatrix; j++) {
			cin >> matrix[i][j];
			msg += to_string(matrix[i][j]) + "  "; 
		}
		msg += "\n";
	}


	for (int i = 0; i < sideMatrix; i++) {    //���������� ���� �������� ���� ����������
		arithmeticFirst += matrix[i][i];
		arithmeticSecond += matrix[i][sideMatrix - i - 1];
	}

	msg += "First dioganal: " + to_string(arithmeticFirst / sideMatrix) + "\nSecond dioganal: " + to_string(arithmeticSecond / sideMatrix); 

	cout << msg << endl;

	return 0;
}