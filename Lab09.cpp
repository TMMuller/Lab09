// Lab09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <map>
#include <fstream>
#include <string>

using namespace std;
using std::map;
using std::ifstream;

int main()
{
	ifstream file;
	ofstream outfile("output.txt");
	file.open("C:\\Users\\tmuller4\\source\\repos\\Lab09\\Lab09\\example.txt");
	map<string, int> words;
	string word;
	int i(0);
	using std::pair;
	string file_string;

	while (file >> word)
	{
		i++;
		++words[word];
	}

	for (std::map<string, int>::iterator it = words.begin(); it != words.end(); ++it)
	{
		for (int i = 0; i < it->second; i++)
		{
			outfile << it->first << "\n";
		}

		cout << "Word: " << it->first << "\n Tally: " << it->second << "\n";
	}

	file.close();
	outfile.close();

    return 0;
}

