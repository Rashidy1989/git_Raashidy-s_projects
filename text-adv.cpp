#include <iostream>
// only used for widows.
#include <windows.h> 

int main() {
	std::string Name;
	std::string pill;
	std::string truth;
	std::string tr1;
	std::string tr2;
	std::cout << "Welcome my name is Morpheus\n";
	std::cout << "What is your name:";
	std::cin >> Name;
	std::cout << Name << " Which pill do you want Red or Blue:\n";
	std::cout << "a) The blue pill to continue living this lie\n";
	std::cout << "b) The red pill for knowing the TRUTH\n";
std::cin >> pill;
while (pill != "Red" && pill != "red" && pill != "Blue" && pill != "blue") {
		std::cout << Name << " Which pill do you want??? Choose Red or Blue only :\n";
	std::cin >> pill;
	}
	if (pill == "Blue" || pill == "blue") {
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
			"Yes or No\n";
		std::cin >> truth;
		if (truth == "Yes" || truth == "No" || truth == "yes" || truth == "no") {
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
		std::cout << "Yes or No\n";
		std::cin >> tr1;
		while (tr1 != "Yes" && tr1 != "No" && tr1 != "no" && tr1 != "yes") {
			std::cout << "Please choose Yes or No only.\n";
			std::cin >> tr1;
		}
		if (tr1 == "Yes" || tr1 == "yes") {
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
			std::cout << "Do you love trinity Yes or No ???\n";
			std::cin >> tr2;
			while (tr2 != "Yes" && tr2 != "No" && tr2 != "no" && tr2 != "yes") {
				std::cout << "Please choose Yes or No only.\n";
				std::cin >> tr2;
			}
			if (tr2 == "No" || tr2 == "no") {
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