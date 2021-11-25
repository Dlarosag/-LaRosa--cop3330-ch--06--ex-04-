/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 David La Rosa
 */


using namespace std;

#include <iostream>
#include <vector>

class Name_value {

	string name;
	int score;

public:

	void setName(string str) { name = str; }
	void setScore(int x) { score = x; }


	string getName() { return name; }
	int getScore() { return score; }

};

int main() {

	vector<Name_value> data;

	string str = " ";
	int scr = -1;

	cout << "Insert the name followed by the score.\ninsert to exit: NoName 0\n\n";

	// Get Data
	while (str != "NoName" && scr != 0){

		Name_value person;
	
		cin >> str;
		cin >> scr;

		person.setName(str);
		person.setScore(scr);


		for (int i = 0; i < data.size(); i++) {

			if (person.getName() == data[i].getName()) {
			
				cout << "Error ---- Name already exist";
				return 1;
			}
		}

		data.push_back(person);
	}

	//Print data
	cout << "\nPrinting all participants:\n\n";

	for (int i = 0; i < data.size() - 1; i++) {
	
		cout << data.at(i).getName() << " " << data.at(i).getScore() << "\n";
	}






}