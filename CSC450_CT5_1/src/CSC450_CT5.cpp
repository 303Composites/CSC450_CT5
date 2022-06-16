/*
 * CSC450_CT5.cpp
 *
 *  Created on: Jun 10, 2020
 *      Author: 303 Composites
 */

#include <iostream>
#include <string>
#include <fstream>
#include <string>

using namespace std;
//This function reverses a string from CT2
void reverseStr(string &str) {
	int n = str.length();
	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);
}
//Driving file code
int main() {
	//creating ofstream class for the output file
	ofstream fout;
	string data;
	fout.open("CSC450_CT5_mod5.txt", std::ios_base::app);
	fout << data << endl;

//File for output in reverse
	ofstream fout2("CSC450_CT5_mod5-reverse.txt");
	ifstream fin("CSC450_CT5_mod5.txt");
//Read and write file to output
	while (fin) {
		getline(fin, data);
		reverseStr(data);
		fout2 << data << endl;
	}
	//Closing the new file
	fin.close();
	return 0;
}

