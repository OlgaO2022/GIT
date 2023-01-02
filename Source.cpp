#include <iostream>
#include <fstream>
#include <string>


int main() {
	// Çàäàíèå 3

	std::ifstream file("Text.txt");
	if (!file.is_open()) {
		std::cout << "error: file is not open!\n";
		return -1;
	}

	int counter{};
	std::string word;
	std::string currentWord;
	std::cout << "Enter any word: \n";
	std::cin >> word;
	while (!file.eof()) {
		file >> currentWord;
		{
			if (currentWord == word) {
				counter++;
			}
		}
	}
	std::cout << "Counter = " << counter << '\n';
	file.close();

	return 0;
}
