//
//  main.cpp
//  adventOfCode2018
//
//  Created by Jennifer Strasser on 12/3/18.
//  Copyright © 2018 Jennifer Strasser. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	int frequency = 0;
	int frequencyArray[1000000] = {};
	frequencyArray[0] = 0;
	ifstream inputFile;
	inputFile.open("/Users/jenniferstrasser/adventOfCode2018/adventOfCode2018/day1.txt", ios::in);

	// Part 1
	string line;
	int count = 0;
	std::string::size_type sz;
	if (inputFile.is_open()) {
		while (getline(inputFile, line)) {
			frequency += std::stoi(line,&sz);
			frequencyArray[count] = frequency;
			count++;
		}
	}
	cout << "Ending frequency is: " << frequency << endl;



	// Part 2
	bool again = true;
	int count2 = 1;
	if (inputFile.is_open()) {
		while (again) {
			while (getline(inputFile, line)) {
				frequency += std::stoi(line,&sz);
				for (int i = 0; i < count2; i++) {
					if (frequency == frequencyArray[i]) {
						cout << "First double frequency is: " << frequency << endl;
						again = false;
						break;
					}
				}
				frequencyArray[count] = frequency;
				count2++;
			}
			inputFile.clear();
			inputFile.seekg(0, inputFile.beg);
		}
	}
	//cout << "Ending frequency is: " << frequency << endl;
	inputFile.close();
	return 0;
}
