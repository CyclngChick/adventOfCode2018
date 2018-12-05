//
//  day2.cpp
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
	ifstream inputFile;
	inputFile.open("/Users/jenniferstrasser/adventOfCode2018/adventOfCode2018/day2.txt", ios::in);

	// Part 1
//	int countDoubles = 0;
//	int countTriples = 0;
//
//	string line;
//	if (inputFile.is_open()) {
//		while (getline(inputFile, line)) {
//			cout << line << endl;
//			int size = (int)line.length();
//			char lineArray[size + 1];
//			strcpy(lineArray, line.c_str());
//			bool doubleCount = false;
//			bool tripleCount = false;
//			for (int i = 0; i < size; i++) {
//				int count = 0;
//				for (int j = i + 1; j < size; j++) {
//					if (lineArray[i] == lineArray[j]) {
//						cout << "Found a match! " << lineArray[i] << " & " << lineArray[j] << endl;
//						lineArray[j] = j;
//						count++;
//					}
//				}
//				if (count == 1 && !doubleCount) {
//					doubleCount = true;
//					countDoubles++;
//					cout << "Add a double!" << endl;
//				} else if (count == 2 && !tripleCount) {
//					tripleCount = true;
//					countTriples++;
//					cout << "Add a triple!" << endl;
//				}
//			}
//			cout << "Number of doubles: " << countDoubles << endl;
//			cout << "Number of triples: " << countTriples << endl;
//		}
//	}
//	cout << "Final number of doubles: " << countDoubles << endl;
//	cout << "Final number of triples: " << countTriples << endl;
//	cout << "Checksum: " << (countTriples * countDoubles) << endl;

	// Part 2
	//Fill 2D array
	string line;
	string input[250];
	int lineCounter = 0;
	int size;
	if (inputFile.is_open()) {
		while (getline(inputFile, line)) {
			input[lineCounter] = line;
			//cout << input[lineCounter] << endl;
			lineCounter++;
		}
	}
	size = (int)line.size();

	for (int i = 0; i < lineCounter; i++) {
		for (int j = i + 1; j < lineCounter; j++) {
			int counter = 0;
			cout << "Comparing: " << input[i] << " & " << input[j] << endl;
			for (int k = 0, m = 0; k < size, m < size; k++, m++) {
				//cout << "Comparing " << input[i][k] << " & " << input[j][m] << endl;
				if (input[i][k] == input[j][m]) {
					counter++;
					//cout << "Match!" << endl;
				}
			}
			cout << "Matching letters: " << counter << endl;
		}
	}



	inputFile.close();
	return 0;
}
