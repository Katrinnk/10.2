#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int ProcessTXT2(char* fname) 
{ 
	ifstream fin(fname); 
	string s; 
	int k = 0;
	while (fin >> s) 
	{
		k++; 
		cout << k << ": " << s << endl;
	}
	return k;
}
int main()
{
	char fname[100]; 
	cout << "enter file name 1: "; cin >> fname;
	cout << "k(word1) = " << ProcessTXT2(fname) << endl;
	return 0;
}