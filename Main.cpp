//the goal of this program is to find the longest word in a string

#include <assert.h>
#include <iostream>
#include <string>
#include <map>
#include <utility>
#include <sstream>

using namespace std;

int main() {

	string longestWord{};
	string tempWord{};

	string inputString{};
	
	cout << "Enter string: ";
	getline(cin, inputString);

	size_t stringIterator = 0;
	while (stringIterator < inputString.length()) {
		while (isalpha(inputString[stringIterator])) {
			tempWord += inputString[stringIterator++];
		}
		
		if (tempWord.length() > longestWord.length()) {
			longestWord = tempWord;
		}
		cout << tempWord << " " << longestWord << endl;
		tempWord = "";
		stringIterator++;
	}

	cout << "Longest word is: " << longestWord;
}
