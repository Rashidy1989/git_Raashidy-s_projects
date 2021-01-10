#include <iostream>
#include <windows.h>

int main() {
	std::string Name;
	char pill = 'a';
	char truth = 'a';
	char tr1 = 'a';
	char tr2 = 'a';
	std::cout << "Welcome my name is Morpheus\n";
	std::cout << "What is your name:";
	std::cin >> Name;
	std::cout << Name << " Which pill do you want a or b:\n";
	std::cout << "a) The blue pill to continue living this lie\n";
	std::cout << "b) The red pill for knowing the TRUTH\n";
std::cin >> pill;
while (pill != 'a' && pill != 'b') {
		std::cout << Name << " Which pill do you want??? Choose a or b only :\n";
	std::cin >> pill;
	}
	if (pill == 'a') {
		std::cout << "Keep living this fake life\n";
		Sleep(10000);
	}
	else {
		std::cout << "Welcome";
		Sleep(1000);
		std::cout << " to";
		Sleep(1000);
		std::cout << " the";
		Sleep(1000);
		std::cout << " Matrix\n";
		Sleep(1000);
		std::cout << "The turth is that machines have been using humans as battaries for centuries now\n"
			"Yes your read or heard me right BATTERIES but now do you accept the truth???\n"
			"(a) for yes (b) for no\n";
		std::cin >> truth;
		if (truth == 'a' || truth == 'b') {
			std::cout << "Unforunatly this is the truth and now you are unpullged from the system things are going to be hard\n\n\n\n";
			Sleep(3000);
		}
		else {
			std::cout << "You have to accept it, now you are unpullged from the system and things are going to be hard\n\n\n\n";
			Sleep(3000);
		}
		std::cout << "Now comes the final test\n";
		Sleep(3000);
		std::cout << "You are now at the oracale\n";
		Sleep(3000);
		std::cout << "Hi " << Name << "\n";
		std::cout << "Welcome i am the oracle and you are here to know if your are the one\n";
		std::cout << "Do you think that you are the one\n";
		std::cout << "(a) for yes and (b) for no\n";
		std::cin >> tr1;
		while (tr1 != 'a' && tr1 != 'b') {
			std::cout << "Please choose (a) or (b) only you dump ass\n";
			std::cin >> tr1;
		}
		if (tr1 == 'a') {
			std::cout << "You";
			Sleep(3000);
			std::cout << " are";
			Sleep(3000);
			std::cout << " not the one\n";
			Sleep(10000);
		}
		else {
			std::cout << "May be";
			Sleep(3000);
			std::cout << " you are";
			Sleep(3000);
			std::cout << " the one\n";
			Sleep(3000);
			std::cout << "Do you love trinity (a) for yes (b) for no\n";
			std::cin >> tr2;
			while (tr2 != 'a' && tr2 != 'b') {
				std::cout << "Please choose a or b only you dump ass\n";
				std::cin >> tr2;
			}
			if (tr2 == 'b') {
				std::cout << "You";
				Sleep(3000);
				std::cout << " are";
				Sleep(3000);
				std::cout << " not the one\n";
				Sleep(10000);
			}
			else {
				std::cout << "Congrats you are";
				Sleep(3000);
				std::cout << " the one. Go save the world.\n";
				Sleep(10000);
			}
		}
	}


	return 0;

}