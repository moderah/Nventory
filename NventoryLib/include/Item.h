#pragma once

#ifndef ITEM_H
#define ITEM_H


#include "../src/pch.h"


namespace Inventory {

	class Item {
	public:
		Item();
		Item(const Item& item);
		~Item();

		//getters
		const char* getName();
		const char* getId();
		const char* getSize();
		const char* getType();
		float getPrice();

		//setters
		void setName(const char* name);
		void setId(const char* id);
		void setSize(const char* size);
		void setType(const char* type);
		void setPrice(float price);
		

		//operator overloaders
		friend std::ostream& operator<<(const std::ostream& os, const Item& item);
		friend std::istream& operator>>(std::istream& is, Item& item);
	private:

		const char* m_name;
		const char* m_id;
		const char* m_size;
		const char* m_type;
		float m_price;

	};


}
#endif // !ITEM_H

