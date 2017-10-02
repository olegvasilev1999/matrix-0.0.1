# matrix-0.0.1

#include "stdafx.h"
#include <iostream> 
#include <sstream>

using namespace std;

int main()
{

	int a[3][3], b[3][3], c[3][3];

	for (int j = 0; j < 3; ++j) {
		for (string string; getline(cin, string); ) {
			istringstream stream(string);
			bool failure = false;
			for (int i = 0; i < 3; ++i) {
				if (!(stream >> a[j][i])) {
					failure = true;
					break;
				}
			}

			if (!failure) break;
			else {
				cout << "An error has occured while reading numbers from line" << endl;
			}
		}
	}

	char oper;
	cin >> oper;
	cin.ignore(1, '\n');

	for (int j = 0; j < 3; ++j) {
		for (string string; getline(cin, string); ) {
			istringstream stream(string);
			bool failure = false;
			for (int i = 0; i < 3; ++i) {
				if (!(stream >> b[j][i])) {
					failure = true;
					break;
				}
			}

			if (!failure) break;
			else {
				cout << "An error has occured while reading numbers from line" << endl;
			}
		}
	}
	cout << endl;
	
	switch (oper) {
		case '*':
			for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				c[i][j] = 0;
				for (int k = 0; k < 3; k++)
					c[i][j] += a[i][k] * b[k][j];
				cout << c[i][j] << " ";
			}
			cout << endl;
		}
			break;


		case '+':
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					c[i][j] = 0;
					for (int k = 0; k < 3; k++)
						c[i][j] = a[i][k] + b[k][j];
					cout << c[i][j] << " ";
				}
				cout << endl;
				
			}
				break;

		case '-':
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					c[i][j] = 0;
					for (int k = 0; k < 3; k++)
						c[i][j] = a[i][k] - b[k][j];
					cout << c[i][j] << " ";
				}
				cout << endl;
				
			}
			break;
	
		default: cout << "ERROR";
	} 

	
	cin.get();
	cin.get();

    return 0;
}
