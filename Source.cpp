#include <iostream>

using namespace std;

char readPenStyle() {
	char pen;
	cout << "Insert the character used to draw > " << endl;
	cin >> pen;
	return pen;
}

int readDimension() {
	cout << "Enter the size of the shape (char/line) > " << endl;
	int size;
	cin >> size;
	return size;
}

void drawing() {
	char pen = readPenStyle();
	int size = readDimension();
	for (int i = 0; i < size; i++) {
		cout << pen;
	}
	int row = size - 2;
	while (row) {
		cout << endl << pen;
		for (int i = 0; i < size - 2; i++) {
			cout << " ";
		}
		cout << pen;
		row--;
	}

	cout << endl;

	for (int i = 0; i < size; i++) {
		cout << pen;
	}
	cout << endl;
}


void runProgram() {
	drawing();
}

int main() {
	runProgram();
	return 0;
}