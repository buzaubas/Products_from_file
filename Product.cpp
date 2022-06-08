#include "Product.h"

Product::Product()
{
	item_num = 0;
	q = 0;
	price_one = 0.0;
	cost = 0.0;
}

Product::Product(std::string str)
{
	std::string* buffer = &str;
	size_t i = 0;
	while (true)
	{
		if (i == 0)
		{
			if (*buffer == (std::string)", ")
			{
				std::string S = "74";
				std::istringstream iss(S, istringstream::in);

				int val;
				iss >> val;
			}
		}
	}
	
}
