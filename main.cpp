#include <iostream>
#include <fstream>
#include <string>
#include "Product.h"
#include "Products.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

	Products stock;
	ifstream ifs("heap.dat", ios::in);
	if (!ifs.bad())
	{
		char buffer[255];
		while (!ifs.eof())
		{
			ifs.getline(buffer, 255);
			stock.add_product(Product(buffer));
		}
		ifs.close();
	}

	system("pause");

	return 0;
}
