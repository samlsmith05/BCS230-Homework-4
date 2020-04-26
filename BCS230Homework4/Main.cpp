//****************************************************
// File: Main.cpp
//
// Purpose: Provide a menu of choices dealing with an album
//		that the user can then choose from
//
// Written By: Samantha Smith
//
// Compiler: Visual Studio C++ 2017
// 
// Update Information
// ------------------
//
// 
//****************************************************
#include "Album.h"
#include "Artist.h"
#include "Song.h"
#include "Time.h"
#include <iostream>
using namespace std;
//****************************************************
// Function: main()
//
// Purpose: entry point for the program
//
// Update Information
// ------------------
// 
//
//****************************************************
int main() {
	Album a;
	int choice;

	//Loops through until the user enters 5 and calls the correct function with each choice
	do {
		cout << "Album Program\n---------------" << endl;
		cout << "1 - Read album info from a file" << endl;
		cout << "2 - Write album info to a file" << endl;
		cout << "3 - Show all album info on screen" << endl;
		cout << "4 - Show album time on screen" << endl;
		cout << "5 - Exit" << endl;
		cout << "Enter choice: ";
		cin >> choice;
		cout << endl;

		if (choice == 1) {
			string filename;
			cout << "Enter input filename:  " << endl;
			cin >> filename;
			a.Read(filename);
		}
		if (choice == 2) {
			string filename;
			cout << "Enter output filename:  " << endl;
			cin >> filename;
			a.Write(filename);
		}
		if (choice == 3) {
			a.Display();
		}
		if (choice == 4) {
			Time albumTime = a.CalcTotalTime();
			int min = albumTime.GetMinutes();
			int sec = albumTime.GetSeconds();
			cout << "Album Time: " << min << ":" << sec;
			cout << endl;
		}
	} while (choice != 5);


	return 0;
}