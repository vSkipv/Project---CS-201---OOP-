#include "oop_pro2.cpp" //header file


// main menu & main function
int main()
{
	int ch;
	cout << "\t\t\t\t\t\t_____________________________________________________________\n\n\n";
	cout << "\t\t\t\t\t\t               Welcome to RAILWAY RESERVATION page         \n\n\n";
	system("COLOR F0");
	do
	{
		cout << "\t\t\t\t\t\t______________________     MAIN MENU    _____________________\n\n\n";
		cout << "\t\t\t\t\t\t\t                                                  \n\n\n";
		cout << "\t\t\t\t\t\t|   1 to LOGIN ADMIN MODE                                      |" << endl;
		cout << "\t\t\t\t\t\t|   2 to LOGIN USER  MODE                                      |" << endl;
		cout << "\t\t\t\t\t\t|   3 to EXIT                                                  |" << endl;
		cout << "\n\t\t\t\t\t\t\t\t Please enter your choice : ";
		cin >> ch;
		cout << endl;
        system("COLOR F0");
		switch (ch)
		{
		case 1:
			database();
			break;
		case 2:
			user();
			break;
		default:
			exit(0);
		}
	} while (ch < 3);

	return 0;
}
