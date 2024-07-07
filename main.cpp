#include <iostream>
using namespace std;

void lovely2dMatrix();
void switchStatementsTest();
void goToTest();


bool isDead{ true };
 
int GetHealth() {
	return isDead ? 0 : 50;
	return 100;
}

int Health{ GetHealth() };

void TakeDamage() {
	cout << " - TakeDamage function starting\n";
	Health -= 50;
	cout << " - TakeDamage function complete\n";
}



void lovely2dMatrix() {
	cout << "== Welcome to our lovely 2d Matrix" << endl;
	int theMatrix[3][2] = { {4, -2}, {6, 3}, {1, 2} };

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 2; ++j) {
			cout << "theMatrix[" << i << "][" << j << "] = " << theMatrix[i][j] << endl;
		}
	}
}

void switchStatementsTest() {
	cout << "Enter case: ";
	int casepick;
	cin >> casepick;
	switch (casepick) {
	case 1:
		cout << "Case is: " << casepick;
		break;
	case 2:
		cout << "Case is: " << casepick;
		break;
	default:
		cout << "You didn't say the magic word!";
	}
}

void goToTest() {
	int n{ 10 };
mylabel:
	cout << n << ", ";
	n--;
	if (n > 0) goto mylabel;
	cout << "let's go!";
}


int main() {
	//lovely2dMatrix();
	//switchStatementsTest();
	//goToTest();
	cout << Health;
	return 0;
}
