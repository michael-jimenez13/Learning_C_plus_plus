#include<iostream>
#include<vector>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main() {

	//step 1
	int i = 0;
	int value = 0;
	int number = 0;
	vector<int> Vector(value);
	//step2
	vector<int> games;
	int input;


	//step1  find your algorithim to extract individual gifts from a single integer and put each digit in a list 
	do {
		cout << "Enter number of digits in code (3, 4 or 5) : ";
		cin >> value;
	} while (value != 0 && value != 3 && value != 4 && value != 5);

	//if value is zero then it goes through this loop
	if (value == 0) {
		do {
			// user enters cod
			for (i = 0; i <= value; ++i) {
				cout << "Enter code: ";
				cin >> Vector.at(i);
				Vector.push_back(i);
			}
					//second time asking this should be equal to lenth of the vector form of the number]
			
			input = Vector.size();
			while (input != 1 && input != 4 && input != 5) {
				cout << "Enter number of digits in code: ";//user editer code
				cout << input << endl;
			}

			/*
			for( i = 0; i < value; ++i) {
			cout << "Number to guess: "; //note on this foor loop it does not need random numbers instead it should print the play.at vector FIXXMEE
			cin >> Vector.at(i);
			Vector.push_back(i %10);
			}
			for ( i = 0; i < value; ++i) {
			cout << "vector size:" << Vector.at(i);
			}
			*/

		} while (Vector.size() == input);
	}

	//if values is not zero then it goes through this loop
	else {
		///step 2 step 2 step 2
		//Step 2 Creates a random code and places the code in a list
		srand(time(NULL)); //seeds a random integers of time
		cout << "Number to guess: ";
		for (int i = 0; i < value; ++i) {
			games[i] = (rand() % 10);
			games.push_back(i);
			cout << games.at(i);
		}
	}



	cout << endl << "the end my friends";
	system("pause");

	return 0;
}