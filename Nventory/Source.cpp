
#include "../NventoryLib/src/pch.h"
#include "../NventoryLib/include/Item.h"
#include "../NventoryLib/include/UI_Greeting.h"
#include "../NventoryLib/include/StreamFile.h"

using namespace Inventory;

int main(int argc, int* argv) {

	//Greet Greeting;
	//
	//Greeting.initialGreeting();

	const char* fileName = "ItemLists.txt";
	StreamFile<const char*, std::ostream> fs(std::cout, fileName);
	

	fs.setFileType(fileName);

	std::cout << fs.getFileType();

	std::cin.get();
	return 0;
}