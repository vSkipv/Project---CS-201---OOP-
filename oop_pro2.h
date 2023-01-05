#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <ctime>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

char f[10] = u8"f";                         // global var
char s[10] = u8"s";                        // global var
int addr, ad, flag, f1, x, y, i, amt;     // global var
float tamt;                              // global var

// base class  Detail display, get train details
class Detail
{
public:
	int tno;               // train number
	char tname[100];      // train name
	char bp[100];        // boarding point
	char dest[100];     // destination point
	int c1, c1fare;    // first class & fare pare seat
	int c2, c2fare;   // second class & fare pare seat
	int d, m, y;   // day,month,year
	int mfare;    // meal
	void getDetail(); // functions declration
	void displaydetail(); // functions declration
}; // end of class

//login class is inhirt form detail class there is user mode login here
class login : public Detail
{
public:
	char id[100];
	char pass[100];
	char password[10];
	void getid();
	void displayid();
};

// reser class is inhirt from detail class display, get reservation details
class reser : public Detail
{
public:
	int pnr; // Passenger number
	char pname[10][100]; // Passenger name
	int age[20]; // Passenger age
	char clas[10]; // first class
        int mealf; // second class
	int nosr; // number of seat
	int i;
	int d, m, y; // day,month,year
	int con; // concession category
	char wchair, meal, ch; // meal & wheelchair
	float amc;
	int bag; // to add bags
	void getresdet();
	void displayresdet();
};

//canc class is inhirt from detail and there is cancel reservation
class canc : public Detail
{
public:
	int pnr; // Passenger number
	char pname[10][100]; // Passenger name
	int age[20]; // Passenger age
	int i;
	char clas[10];
	int nosc;
	int d, m, y; // day,month,year
	double amr;
	void getcancdet();
	void displaycancdet();
};

//this is functions declration
void manage();
void can();
void user();
void database();
void res();
void reserve();
void displaypassdetail();
void cancell();
void enquiry();



