//the user can use the system until stated to exit. exit should be present in initial and end
// the system should follow this user experience:
// welcome greetings, there will be choices of withdraw and deposit,
//then will accept its input then compute after display the balance then ask if they want to do something else
#include <iostream>

using namespace std;

int main() {
	int choice, num1, currentValue = 1000;
	char operation, cont;
	do {
		cout << "Welcome User\n";
		cout << "1. Withdraw\n2. Deposit\n3. Check Balamce\n4. Exit"<< endl;
		cin >> choice;
		
		switch (choice)
		{
		case 1:
		system("cls");
		cout << " Input Value to Deposit ";
		cin >> num1 >> currentValue;
		system ("cls");
		
		 cout << num1 + currentValue << " Updated Value: " << "\n";
			break;
			
		case 2: 
		system("cls");
		cout << " Input Value to Withdraw ";
		cin >> num1 >> currentValue;
		system ("cls");
		
		 cout << " Updated Value " << num1 - currentValue << "\n";
			break;
			
		case 3: 
		 break;
		}
	cout << "Do you want to continue? (y/n): ";
	cin >> cont;
	} while (cont == 'y' || cont == 'Y' || choice != 3);

    return 0;
}
