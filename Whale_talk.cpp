#include <iostream>
#include <vector>
#include <string>
int main() {
	// Whale, Whale, Whale.
	// What have we got here.
	std::string humanT;
	std::cout << "Talk to the whale\n";
	std::getline(std::cin, humanT);


	std::vector<char> vowels = { 'a','e','i','o','u' };
	std::vector <char> result;

	for (int i = 0; i < humanT.size(); i++) {
		if (humanT[i] == vowels[1] || humanT[i] == vowels[4]) {
			result.push_back(humanT[i]);
		}
		for (int j = 0; j < vowels.size(); j++) {
			if (humanT[i] == vowels[j]) {
				result.push_back(humanT[i]);
			}

		}



	}

	for (int k = 0; k < result.size(); k++) {
		std::cout << result[k];
	}
	}

