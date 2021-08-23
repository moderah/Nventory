#include "pch.h"
#include "../include/Item.h"


namespace Inventory {

	Item::Item() :
		m_name("ItemName"),
		m_id("00MGG"),
		m_type("name brand"),
		m_size("3/7 inch"),
		m_price(0.2f)
	{

	}
	Item::Item(const Item& item) :
		m_name("Item1"),
		m_id("034fa"),
		m_type("name brand"),
		m_size("3/4 inch"),
		m_price(0.0f)
	{	
		this->setName(item.m_name);
		this->setId(item.m_id);
		this->setType(item.m_type);
		this->setSize(item.m_size);
		this->setPrice(item.m_price);
	}

	Item::~Item() {

	}


	const char* Item::getName() {
		return m_name;
	}
	const char* Item::getId() {
		return m_id;
	}
	const char* Item::getSize() {
		return m_size;
	}
	const char* Item::getType() {
		return m_type;
	}
	float Item::getPrice() {
		return Item::m_price;
	}
	
	/**/
	
	/// <summary>
	/// 
	/// </summary>
	/// <param name="name"></param>
	void Item::setName(const char* name) {
		m_name = name;
	}
	/// <summary>
	/// 
	/// </summary>
	/// <param name="id"></param>
	void Item::setId(const char* id) {
		m_id = id;
	}
	/// <summary>
	/// 
	/// </summary>
	/// <param name="size"></param>
	void Item::setSize(const char* size) {
		m_size = size;
	}
	/// <summary>
	/// 
	/// </summary>
	/// <param name="type"></param>
	void Item::setType(const char* type) {
		m_type = type;
	}

	/// <summary>
	/// 
	/// </summary>
	/// <param name="price"></param>
	void Item::setPrice(float price) {
		m_price = price;
	}



	/// <summary>
	/// 
	/// </summary>
	/// <param name="os"></param>
	/// <param name="item"></param>
	/// <returns></returns>
	std::ostream& operator<<(std::ostream& os, const Item& item) {
		
		return os;
	}
	/// <summary>
	/// 
	/// </summary>
	/// <param name="is"></param>
	/// <param name="item"></param>
	/// <returns></returns>
	std::istream& operator>>(std::istream& is, Item& item) {
		
		return is;
	}

		
}