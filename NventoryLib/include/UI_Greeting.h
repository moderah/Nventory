#pragma once
#ifndef UI_GREETING_H
#define UI_GREETING_H


#include "../../NventoryLib/src/pch.h"
#include "Item.h"

namespace Inventory {
	
	class Greet {
	public:
		//c'tors and d'tor
		Greet();
		~Greet();

		//public member functions
		std::string initialGreeting();

		//getters
		std::string choice();

		//setters
		void setChoice(std::string choice);

	private:

		//private member variables
		std::string m_choice;
	};

};
#endif // !UI_GREETING_H


