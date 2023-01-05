#include "oop_pro2.h"


void login :: getid()
	{
		cout << "\n|   Enter your id: ";
		cin >> id;
		cout << "\n|   Enter the password: ";
		cin >> password;
		cout << "\n";
		strcpy_s(pass, password);
        system("COLOR F0");
		system("cls");
	}
	void login :: displayid()
	{
		cout << "\n|" << "User ID:" << "\t" << "|" << "Password\n";
		cout << "|" << id << "\t\t" << "|" << pass << "\n\n";
	}

	void Detail :: getDetail()
	{
		cout << "\n --------------------- Add New details ---------------------  \n\n";
		cout << "| 1 Train number: ", cin >> tno;
		cout << "\n| 2 Train Name: ", cin >> tname;
		cout << "\n| 3 Boarding point: ", cin >> bp;
		cout << "\n| 4 Destination pt: ", cin >> dest;
		cout << "\n| 5 Number of seats in first class & fare per ticket: ", cin >> c1 >> c1fare;
		cout << "\n| 6 Number of seats in second class & fare per ticket: ", cin >> c2 >> c2fare;
		cout << "\n| 7 Number of beds in sleeping class & fare per ticket: ", cin >> c3 >> c3fare;
		cout << "\n| 8 Number of seats in the female section:", cin >> c4;
		cout << "\n| 9 Date of travel";
		cout << "\n| 10 Day: ", cin >> d;
		cout << "\n| 11 Month: ", cin >> m;
		cout << "\n| 12 year:", cin >> y;
        system("COLOR F0");
	}

	void Detail :: displaydetail()
	{
	    cout << "--------------------------------------------------------------------------------------------------- Trains Details ---------------------------------------------------------------------------------------------------\n";
		cout << "\n|Train No." << "\t" << "|Train Name" << "\t" << "|Boarding pt." << "\t" << "|Destination pt." << "\t";
		cout << "|F-Class" << "\t" << "|F-Class Fare" << "\t" << "|S-Class" << "\t" << "|S-Class Fare" << "\t" << "|sleeping Fare" <<"\t"<< "|Female section" << "\t";
		cout << "|Day" << "-" << "Month" << "-" << "Year" << "\n";
		cout << "|" << tno << "\t\t" << "|" << tname << "\t\t" << "|" << bp << "\t\t" << "|" << dest << "\t\t\t";
		cout << "|" << c1 << "\t\t" << "|" << c1fare << "\t\t" << "|" << c2 << "\t\t" << "|" << c2fare << "\t\t" << "|" << c3fare << "\t\t"<<"|"<< c4 << "\t\t";
		cout << "|" << d << "-" << m << "-" << y << "\n";
		cout << "----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
        system("COLOR F0");
	}

	void reser :: getresdet()
	{
		class login b;
		cout << "\n______Enter the details as follows______\n\n";
		cout << "| 1 Train number: ";
		cin >> tno;
		cout << "\n| 2 Train Name: ";
		cin >> tname;
		cout << "\n| 3 Boarding point: ";
		cin >> bp;
		cout << "\n| 4 Destination pt: ";
		cin >> dest;
		cout << "\n| 5 No of seats required:";
		cin >> nosr;
		for (i = 0; i < nosr; i++)
		{
			cout << "\n| 6 Passenger name:";
			cin >> pname[i];
			cout << "\n| 7 Passenger age:";
			cin >> age[i];
		}
		cout << "\n| 8 Enter the class f-first class s-second class:";
		cin >> clas;
		cout << "\n| 9 Enter the class r-regular class s-sleeping class:";
		cin >> clasS;
		cout << "\n| 10 Enter your gender f-female  m-male:";
		cin >> gender;
		if (gender == 'f')
		{
			cout << "\n| would you like to enter the female section? y-yes  n-no \n:";
			cin >> enter;
		}
		else (gender == 'f' | gender == 'm');
		{
			cout << "\n| 11 Date of travel:";
			cin >> d >> m >> y;
			cout << "| 12 Enter the concession category\n";
			cout << " 1.Military\n 2.Senior citizen\n";
			cout << " 3.Children below 5 yrs\n 4.Student\n 5.None\n";
			cin >> con;
			cout << "\n| 13 Do you want to add a wheelchair ? \n";
			cout << "Press ----> y to say Yes\n";
			cout << "Press ----> n to say  No\n";
			cin >> wchair;
			cout << "\n| 14 How many bags do you have:";
			cin >> bag;
			for (int i = 0; i < bag; i++)
			{
				cout << "your bag id is:" << 1+((1000-1)%rand()) << i;
			}
			cout << "\n| 14 Do you want to add a meal ? \n";
			cout << "Press ----> y to say Yes\n";
			cout << "Press ----> n to say  No\n";
			cin >> meal;
			if (meal == 'y')
			{
				cout << "\n _____choose your meal_____\n";
				cout << " 1. kids meal ( orange juice + sandwich + fries )  50 LE";
				cout << " \n 2. adults meal ( coffee / tea / cola + sandwich + fries )  70 LE";
				cout << "\n 3. family meal ( kids meal + adults meal )  100 LE" << "\n";
				cin >> l;
				cout << "     END OF GETTING DETAILS    \n";
			}
			else
			{
				cout << "     END OF GETTING DETAILS    \n";
			}
         system("COLOR 70");
			system("cls");
		}
	}
	void reser :: displayresdet()
	{
        cout << "Pnr no: " << pnr;
		cout << "\nTrain no:" << tno;
		cout << "\nTrain name: " << tname;
		cout << "\nBoarding point: " << bp;
		cout << "\nDestination pt: " << dest;
		cout << "\nNo of seats reserved: " << nosr;

		for (i = 0; i < nosr; i++)
		{
			cout << "\nPassenger name: "; puts(pname[i]);
			cout << "Passenger age: " << age[i];
		}
		cout << "Your class: "; puts(clas);
		cout << "Your seat type: "; puts(clasS);
		cout << "you have chosen meal number: " << l;
		cout << "\nhave you chosen to have a wheelchair? : " << wchair;
		cout << "\nDate of reservation: " << d << "-" << m << "-" << y;
		cout << "\nYour concession category: " << con;
		cout << "\nYou must pay: " << amc << endl;
		cout << "***********************************\n";
        system("COLOR F0");
		system("pause");
		system("cls");
	}
	void canc :: getcancdet()
	{
        cout << "Enter the details as follows\n";
		cout << "Pnr no:";
		cin >> pnr;
		cout << "Date of cancellation:";
		cin >> d >> m >> y;
		cout << "  END OF GETTING DETAILS  \n";
	}

	void canc :: displaycancdet()
	{
        cout << "     \n";
		cout << "     \n";
		cout << "Pnr no:" << pnr;
		cout << "\nTrain no:" << tno;
		cout << "\nTrain name:";
		cout << tname;
		cout << "Boarding point:";
		cout << bp;
		cout << "Destination pt:";
		cout << dest;
		cout << "\nYour class:";
		cout << clas;
		cout << "no of seats to be cancelled:" << nosc;
		for (i = 0; i < nosc; i++)
		{
			cout << "Passenger name: ";
			cout << pname[i];
			cout << "passenger age: " << age[i];
		}
		cout << "\nDate of cancellation:" << d << "-" << m << "-" << y;
		cout << "\nYou can collect:" << amr << "LE" << endl;
		cout << "*******************************************\n";
		cout << "     END OF CANCELLATION  \n";
		cout << "*******************************************\n";
	}

// admin mode login & administrator menu
void database()
{
	char password[10];
	char pass[10] = "admin";
	cout << "\t\t\t\t\t\t\t\t Enter the Admin Password: ";
	cin >> password;
    system("COLOR F0");
	system("cls");
	Detail a;
	fstream f;
	int ch;
	char c;
	if (strcmp(pass, password) != 0)
	{
		cout << "Enter the password correctly \n";
		cout << "You are not permitted to login this mode\n";
	}
	if (strcmp(pass, password) == 0)
	{
		char c;
		do
		{
			cout << "                     _______________________________________________________________            \n\n";
			cout << "                                           ADMINISTRATOR MENU                                     \n";
			cout << "                     _______________________________________________________________            \n\n";
			cout << "1. Create Detail Database \n";
			cout << "2. Add Details \n";
			cout << "3. Display Details \n";
			cout << "4. User Management \n";
			cout << "5. Display Passenger Details \n";
			cout << "6. Return To Main Menu \n" << endl;
			cout << "Enter Your Choice : ";
			cin >> ch;
            system("COLOR F0");
			system("cls");
			cout << endl;
			switch (ch)
			{
			case 1:
				f.open("t.txt", ios::out | ios::binary);
				do
				{
					a.getDetail();
					f.write((char*)&a, sizeof(a));
					cout << "\nDo you want to add one more record?\n";
					cout << "y-for Yes\nn-for No\n";
					cin >> c;
                    system("COLOR F0");
					system("cls");
				} while (c == 'y');
				f.close();
				break;
			case 2:
				f.open("t.txt", ios::in | ios::out | ios::binary | ios::app);
				a.getDetail();
				f.write((char*)&a, sizeof(a));
				f.close();
				break;
			case 3:
				f.open("t.txt", ios::in | ios::out | ios::binary | ios::app);
				f.seekg(0);
				while (f.read((char*)&a, sizeof(a)))
				{
					a.displaydetail();
				}
				f.close();
                system("COLOR F0");
				system("pause");
				system("cls");

				break;
			case 4:
				manage();
				break;
			case 5:
				displaypassdetail();
				break;
			}
		} while (ch <= 5);
	}
}

//reservation menu
void reserve()
{
	int ch;
	do
	{
		cout << "\t\t\t________________     Reserve MENU    _____________________\n\n\n";
		cout << "\t\t\t                                                          \n\n\n";
		cout << "\t|Press 1 to Reserve Ticket                                                 |" << endl;
		cout << "\t|Press 2 to Return to the main menu                                      |" << endl;
		cout << "Enter your choice: ";
		cin >> ch;
		cout << endl;
        system("COLOR F0");
		system("cls");
		switch (ch)
		{
		case 1:
			res();
			break;
		}
	} while (ch == 1);
}
// reservation menu 2 + file
void res()
{
	Detail a;
	reser b;
	fstream f1, f2;
	time_t t;
	f1.open("t.txt", ios::in | ios::out | ios::binary);
	f2.open("p.txt", ios::in | ios::out | ios::binary | ios::app);
	int ch;
	b.getresdet();
	while (f1.read((char*)&a, sizeof(a)))
	{
		if (a.tno == b.tno)
		{
			if (strcmp(b.clas, f) == 0)
			{
				if (a.c1 >= b.nosr)
				{
					amt = a.c1fare;
					addr = f1.tellg();
					ad = sizeof(a.c1);
					f1.seekp(addr - (7 * ad));
					a.c1 = a.c1 - b.nosr;
					f1.write((char*)&a.c1, sizeof(a.c1));
					if (b.con == 1)
					{
						cout << "Concession category: MILITARY PERSONNEL\n";
						b.amc = b.nosr * ((amt * 50) / 100);
					}
					else if (b.con == 2)
					{
						cout << "Concession category:SENIOR CITIZEN\n";
						b.amc = b.nosr * ((amt * 60) / 100);
					}
					else if (b.con == 3)
					{
						cout << "Concession category:CHILDERN BELOW FIVE\n";
						b.amc = 0.0;
					}
					else if (b.con == 4)
					{
						cout << "Concession category:Student\n";
						b.amc = b.nosr * ((amt * 70) / 100);
					}
					else if (b.con == 4)
					{
						cout << "You cannot get any concession\n";
						b.amc = b.nosr * amt;
					}
					srand((unsigned)time(&t));
					b.pnr = rand();
					f2.write((char*)&b, sizeof(b));
					b.displayresdet();
					cout << "\n-----Your ticket is reserved-----\n";
					system("cls");
				}
				else
				{
					cout << "**********Sorry req seats not available********\n";
				}
			}
			else if (strcmp(b.clas, s) == 0)
			{
				if (a.c2 >= b.nosr)
				{
					amt = a.c2fare;
					addr = f1.tellg();
					ad = sizeof(a.c2);
					f1.seekp(addr - (5 * ad));
					a.c2 = a.c2 - b.nosr;
					f1.write((char*)&a.c2, sizeof(a.c2));
					if (b.con == 1)
					{
						cout << "Concession category:MILITARY PRESONNEL\n";
						b.amc = b.nosr * ((amt * 50) / 100);
					}
					else if (b.con == 2)
					{
						cout << "Concession category:SENIOR CITIZEN\n";
						b.amc = b.nosr * ((amt * 60) / 100);
					}
					else if (b.con == 3)
					{
						cout << "Concession category:CHILDERN BELOW FIVE\n";
						b.amc = 0.0;
					}
					else if (b.con == 4)
					{
						cout << "You cannot get any concession\n";
						b.amc = b.nosr * amt;
					}
					f2.write((char*)&b, sizeof(b));
					b.displayresdet();
					cout << "\n-----Your ticket is reserved-----\n";
				}
				else
				{
					cout << "********Sorry req no of seats not available*******\n";
				}
			}
			else if (strcmp(b.clas, s) == 0)
			{
				if (a.c3 >= b.nosr)
				{
					amt = a.c3fare;
					addr = f1.tellg();
					ad = sizeof(a.c3);
					f1.seekp(addr - (5 * ad));
					a.c3 = a.c3 - b.nosr;
					f1.write((char*)&a.c3, sizeof(a.c3));
					if (b.con == 1)
					{
						cout << "Concession category:MILITARY PRESONNEL\n";
						b.amc = b.nosr * ((amt * 50) / 100);
					}
					else if (b.con == 2)
					{
						cout << "Concession category:SENIOR CITIZEN\n";
						b.amc = b.nosr * ((amt * 60) / 100);
					}
					else if (b.con == 3)
					{
						cout << "Concession category:CHILDERN BELOW FIVE\n";
						b.amc = 0.0;
					}
					else if (b.con == 4)
					{
						cout << "You cannot get any concession\n";
						b.amc = b.nosr * amt;
					}
					f2.write((char*)&b, sizeof(b));
					b.displayresdet();
					cout << "\n-----Your ticket is reserved-----\n";
				}
				else
				{
					cout << "********Sorry req no of seats not available*******\n";
				}
			}
		}
		else
		{
			flag = 0;
		}
	}
	if (flag == 0)
	{
		cout << "!\n";
	}
	f1.close();
	f2.close();
}

// display passenger details
void displaypassdetail()
{
	cout << "\n--------Passenger Details--------\n";
	fstream f;
	reser b;
	f.open("p.txt", ios::in | ios::out | ios::binary);
	f.seekg(0);
	while (f.read((char*)&b, sizeof(b)))
	{
		b.displayresdet();

	}
	f.close();

}

void enquiry()
{
	fstream f;
	f.open("t.txt", ios::in | ios::out | ios::binary);
	Detail a;
	while (f.read((char*)&a, sizeof(a)))
	{
		a.displaydetail();
	}
    system("COLOR F0");
	system("pause");
}
// cancellation menu 2
void cancell()
{
	Detail a;
	reser b;
	canc c;
	fstream f1, f2, f3;
	f1.open("t.txt", ios::in | ios::out | ios::binary);
	f2.open("p.txt", ios::in | ios::out | ios::binary);
	f3.open("cn.txt", ios::in | ios::out | ios::binary);
	cout << "                     _______________________________________________________________            \n\n";
	cout << "                             ---------------CANCELLATION MENU--------------\n";
	cout << "                     _______________________________________________________________            \n\n";
	c.getcancdet();
	while (f2.read((char*)&b, sizeof(b)))
	{
		if (b.pnr == c.pnr)
		{
			c.tno = b.tno;
			strcpy_s(c.tname, b.tname);
			strcpy_s(c.bp, b.bp);
			strcpy_s(c.dest, b.dest);
			c.nosc = b.nosr;
			for (int j = 0; j < c.nosc; j++)
			{
				strcpy_s(c.pname[j], b.pname[j]);
				c.age[j] = b.age[j];
			}
			strcpy_s(c.clas, b.clas);
			if (strcmp(c.clas, f) == 0)
			{
				while (f1.read((char*)&a, sizeof(a)))
				{
					if (a.tno == c.tno)
					{
						a.c1 = a.c1 + c.nosc;
						x = a.d;
						y = a.m;
						addr = f1.tellg();
						ad = sizeof(a.c1);
						f1.seekp(addr - (7 * ad));
						f1.write((char*)&a.c1, sizeof(a.c1));
						tamt = b.amc;
						if ((c.d == x) && (c.m == y))
						{
							cout << "You are cancelling at the date of departure\n";
							c.amr = tamt - ((tamt * 60) / 100);
						}
						else if (c.m == x)
						{
							cout << "You are cancelling at the month of departure\n";
							c.amr = tamt - ((tamt * 50) / 100);
						}
						else if (x > c.m)
						{
							cout << "You are cancelling one month before the date of departure\n";
							c.amr = tamt - ((tamt * 20) / 100);
						}
						else
						{
							cout << "Cancelling after the departure\n";
							cout << "Your request cannot be completed\n";
						}
						goto h;
						c.displaycancdet();
					}
				}
			}
			else if (strcmp(c.clas, s) == 0)
			{
				while (f1.read((char*)&a, sizeof(a)))
				{
					if (a.tno == c.tno)
					{
						a.c2 = a.c2 + c.nosc;
						x = a.d;
						y = a.m;
						addr = f1.tellg();
						ad = sizeof(a.c2);
						f1.seekp(addr - (5 * ad));
						f1.write((char*)&a.c2, sizeof(a.c2));
						tamt = b.amc;
						if ((c.d == x) && (c.m == y))
						{
							cout << "You are cancelling at the date of departure\n";
							c.amr = tamt - ((tamt * 60) / 100);
						}
						else if (c.m == y)
						{
							cout << "You are cancelling at the month of departure\n";
							c.amr = tamt - ((tamt * 50) / 100);
						}
						else if (y > c.m)
						{
							cout << "You are cancelling one month before the date of departure\n";
							c.amr = tamt - ((tamt * 20) / 100);
						}
						else
						{
							cout << "Cancelling after the departure\n";
							cout << "Your request cannot be completed\n";
						}
						goto h;
						c.displaycancdet();
					}
				}
			}
		}
		else
		{
			flag = 0;
		}
	}
h:
	if (flag == 0)
	{
		cout << "Enter the correct pnr no\n";
	}
	f1.close();
	f2.close();
	f3.close();
}
// cancellation menu 1
void can()
{
	int ch;
	do
	{
		cout << "\t\t\t________________     Cancellation MENU    _____________________\n\n\n";
		cout << "\t\t\t                                                               \n\n\n";
		cout << "\t|Press 1 to Cancel                                                   |" << endl;
		cout << "\t|Press 2 to Return to the main menu                                  |" << endl;
		cout << "\n\t\t\t Please enter your choice : ";
		cin >> ch;
		cout << endl;
		switch (ch)
		{
		case 1:
			cancell();
			break;
		}
	} while (ch == 1);
}
//login user
void user()
{
	login a;
	int ch;
    system("COLOR F0");
	system("cls");
	cout << "\n \t\t\t\t\t\t\t________________     Login User    _____________________\n\n\n";
	char password[10];
	fstream f;
	f.open("id.txt", ios::in | ios::out | ios::binary);
	char id[100];
	cout << "|   1.Enter your ID : ";
	cin >> id;
	cout << "\n|   2.Enter your Password : ";
	cin >> password;
    system("COLOR F0");
	system("cls");
	//cout << "\t\t\t________________     Login User    _____________________\n\n\n";
	while (f.read((char*)&a, sizeof(a)))
	{

		if ((strcmp(a.id, id) == 0) && (strcmp(a.pass, password) == 0))
		{
			do
			{
				cout << "\t\t\t________________     Login User    _____________________\n\n\n";
				cout << "\t| 1 to Reserve                                                                   |" << endl;
				cout << "\t| 2 to Cancel                                                                    |" << endl;
				cout << "\t| 3 to Enquiry                                                                   |" << endl;
				cout << "\t| 4 to Return to the main menu                                                   |\n" << endl;
				cout << "         Enter your choice: ", cin >> ch;
                system("COLOR F0");
				system("cls");
				switch (ch)
				{
				case 1:
					reserve();
					break;
				case 2:
					cancell();
					break;
				case 3:
					enquiry();
					break;
				}
			} while (ch <= 3);
		}
		else
		{
			y = 1;
		}
	}
	if (y == 1)
	{
		cout << "Enter your user id and password correctly\n";

	}
}
// user Management Menu
void manage()
{
	int ch;
	fstream f;
	char c;
	login a;
	do
	{
		cout << "     _______________________________________________________________\n\n";
		cout << "                          USER MANAGEMENT MENU                      \n";
		cout << "     _______________________________________________________________\n\n";
		cout << "\t|Press 1 to Create id database                                                   |" << endl;
		cout << "\t|Press 2 to Add details                                                          |" << endl;
		cout << "\t|Press 3 to Display details                                                      |" << endl;
		cout << "\t|Press 4 to Return to the main menu                                              |" << endl;
		cout << "Enter your choice: ";
		cin >> ch;
        system("COLOR F0");
		switch (ch)
		{
		case 1:
			f.open("id.txt", ios::out | ios::binary);
			do
			{
				a.getid();
				f.write((char*)&a, sizeof(a));
				cout << "Do you want to add one more record ? \n";
				cout << "Press ----> y to say Yes\n";
				cout << "Press ----> n to say  No\n";
				cin >> c;
                system("COLOR F0");
				system("cls");
			} while (c == 'y');
			f.close();
			break;
		case 2:
			f.open("id.txt", ios::in | ios::out | ios::binary | ios::app);
			a.getid();
			f.write((char*)&a, sizeof(a));
			f.close();
			break;
		case 3:
			f.open("id.txt", ios::in | ios::out | ios::binary);
			f.seekg(0);
			while (f.read((char*)&a, sizeof(a)))
			{
				a.displayid();

			}
            system("COLOR F0");
			system("pause");
			system("cls");
			f.close();
			break;
		}
	} while (ch <= 3);
    system("COLOR F0");
	system("cls");
}
