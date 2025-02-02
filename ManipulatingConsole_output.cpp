// ManipulatingConsole_output.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int idOne = 1;
	int idTwo = 2;
	int idThree = 3;
	double balanceOne = 100.00;
	double balanceTwo = 250.01;
	double balanceThree = 300.50;
	string nameOne = "Steph";
	string nameTwo = "Chef"; 
	string nameThree = "Himmy";
    // display
	cout << setw(25) << right << "Daily Report" << endl;
    cout << setw(20) << left << "ID" << setw(10) << left << "Name" << setw(10) << right << "Balance" << endl;
    cout << setw(5) << setfill('-') << "" << "         " << setw(10) << setfill('-') << "" << "      " << setw(10) << right << "" << endl;
    cout << setfill(' ');
    cout << setw(5) << setfill('0') << idOne << "    " << setw(15) << setfill(' ') << nameOne << setw(10) << right << fixed << setprecision(2) << "$" << balanceOne << "\n";
    cout << setw(5) << setfill('0') << idTwo << "    " << setw(15) << setfill(' ') << nameTwo << setw(10) << right << fixed << setprecision(2) << "$" << balanceTwo << "\n";
    cout << setw(5) << setfill('0') << idThree << "    " << setw(15) << setfill(' ') << nameThree << setw(10) << right << fixed << setprecision(2) << "$" << balanceThree << "\n";

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
