// BST.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "BST.h"
using namespace std; 

int main()
{
	BST tree(); 

	string cmd, target;
	//int x; 
	bool exitIndicator = false;
	cout << "Welcome to Binary Search Tree!\n";

	//Run this section until exit command
	while (exitIndicator == false) {
		//take input from user 
		cout << "Waiting for input...\n";

		cin >> cmd >> target;

		//Case statment for different commands
		if (cmd == "search")
		{
			//do search garbage 

		}
		else if (cmd == "insert")
		{
			//do insert 
			//insert should search to see if there is node first
			//if it exsists, +1 to the int contained within 
			//then create new node if it does not exsist 

		}
		else if (cmd == "delete")
		{
			//do delete
		}
		else if (cmd == "min")
		{
			//do min stuff
		}
		else if (cmd == "max")
		{
			//max stuff 
		}
		else if (cmd == "next")
		{
			//next stuff
		}
		else if (cmd == "prev")
		{
			//prev
		}
		else if (cmd == "list")
		{
			//list 
		}

		else if (cmd == "help")
		{
			//display available commands
			cout << "List of available commands... \n";
			cout << "Insert - used to insert data into tree \n";
			cout << "Delete - used to delete an exsisting node from the tree \n";
			cout << "Search - used to search for a node and return its key \n";
			cout << "Min    - used to return the minimum value of the set \n ";
			cout << "Max    - used to return the maxamium value of the set \n";
			cout << "Next   - used to return the successor of the requested node \n";
			cout << "Prev   - used to return the predacessor of the requested node \n";
			cout << "List   - used to return all of the values contained within the tree \n";

		}
		else if (cmd == "exit")
		{
			//exit 
			exitIndicator = true;
		}
		else
		{
			cout << "Not a valid command. Please try again...\n";
		}
	}
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

