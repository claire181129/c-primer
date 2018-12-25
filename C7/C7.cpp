// C7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include"oldSales_data.h"
#include"Sales_data.h"
int main()
{
	//E7.1
	/*
	old::Sales_data total;
	if (old::read(std::cin, total))
	{
		old::Sales_data trans;
		while (old::read(std::cin, trans))
		{
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				print(std::cout, total) << std::endl;
				total = trans;
			}
		}
		print(std::cout, total) << std::endl;
	}
	else
		std::cerr << "No data?!" << std::endl;
		
	*/
	
	Sales_data total;
	if (read(std::cin, total))
	{
		Sales_data trans;
		while (read(std::cin, trans))
		{
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				print(std::cout, total) << std::endl;
				total = trans;
			}
		}
		print(std::cout, total) << std::endl;
	}
	else
		std::cerr << "No data?!" << std::endl;
	
		
    return 0;
}

