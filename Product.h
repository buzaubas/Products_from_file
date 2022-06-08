#pragma once
#include <iostream>
#include <string>
#include <sstream>

class Product
{
public:
	Product();
	Product(std::string str);
	size_t get_item_num();
	std::string get_item_name();
	size_t get_q();
	double get_price_one();
	double get_cost();
private:
	size_t item_num;
	std::string item_name;
	size_t q;
	double price_one;
	double cost;
};

