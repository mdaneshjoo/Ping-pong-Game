// Game_pingpong.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<conio.h>
using namespace std;
void DRWplaygrang(int x_p1, int x_p2, int x_ball, int y_ball,int Y_len) {
	system("cls");
	for (int i = 0; i < x_p1; i++)
	{
		cout << "";
	}
	cout << "#####";
	for (int j = 0;  j < y_ball;  j++)
	{
		cout << "\n";
	}
	for (int i = 0; i < x_ball; i++)
	{
		cout << "";
	}
	cout << "O\n";
	for (int j = 0; j < Y_len - y_ball; j++)
	{
		cout << "\n";
	}
	for (int i = 0; i < x_p2; i++)
	{
		cout << "";
	}
	cout << "#####";
}

int main()
{
    std::cout << "Hello World!\n"; 
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
