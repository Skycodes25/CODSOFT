#include <iostream>
using namespace std;


int main(){

	char operations;
	int x;
	int i;

	cout << "Choose an operator (+,*,/,-): ";
		cin >> operations;

	cout << "Enter the first number: ";
	cin >> x;
	
	cout << "Enter the second number: ";
	cin >> i;

	switch (operations) {

	case '+': 
		cout << x << " + " << i << " = " << x + i;
		cout << endl;
		break;
	case '-':
		cout << x << " - " << i << " = " << x - i;
		cout << endl;
		break;
	case '*':
		cout << x << " * " << i << " = " << x * i;
		cout << endl;
		break;
	case '/':
		if (i != 0){
			cout << x << " / " << i << " = " << x / i;
			cout << endl;
		}
		else
			cout << "Cannot divide by zero.";
		    cout << endl;
			break;	

	default:
		cout << "Invalid operator.";
		cout << endl;
		break;
		
		
	}

	system("pause");
	return 0;
}