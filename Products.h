#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Product.h"

class Products
{
public:
	Products();
	void add_product(Product obj);
	void available();
	void total_price();

	void show();
private:
	std::vector<Product> _products;
};

