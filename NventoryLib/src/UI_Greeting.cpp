#include "pch.h"
#include "../include/UI_Greeting.h"


namespace Inventory {

	Greet::Greet() :
		m_choice("")
	{
		//initialize variables
		//initialize class instances if necessary
	}

	Greet::~Greet() {
		//if (this->m_choice >= "5" || this->m_choice <= "0") {
		//	delete this;
		//}
	}

	std::string Greet::initialGreeting() {
		std::string  x = "";

		std::cout << "Are there any updates?\n";
		std::cin >> x;
		if (x != "yes" && x != "y" && x != "ye" && x != "yeah" && x != "yep" && x != "yeh" && x != "yp") {
			std::string y = "";
			std::cout << "Are you sure there ARE NOT any updates?\n";
			std::cin >> y;
			if (y != "yes" && y != "y" && y != "ye" && y != "yeah" && y != "yep" && y != "yeh" && y != "yp") {

				std::cout << "...well.......alright.\n...press enter twice to exit";
				std::cin.get();
				return y;
			}
			else {
				return y;
			}
		}
		else {
			std::string z = " ";
			std::cout << "1. orders\n"
				<< "2. inventory\n"
				<< "3. schedule\n"
				<< "4. tasks\n"
				<< "0. exit"
				<< std::endl;
			std::cin >> z;
			this->setChoice(z);
			return z;
		}
	}


	//SETTERS
	void Greet::setChoice(std::string choice) {
		m_choice = choice;
	}


	//GETTERS
	std::string Greet::choice() {
		return m_choice;
	}
}