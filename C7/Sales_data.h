#pragma once
#include<string>
struct Sales_data {
	std::string isbn()const;
	Sales_data& combine(const Sales_data& theData);
	double avg_price()const;

	std::string bookNo;
	int units_sold;
	double revenue;
};
std::string Sales_data::isbn()const
{
	return bookNo;
}
double Sales_data::avg_price()const
{
	return revenue / units_sold;
}
Sales_data& Sales_data::combine(const Sales_data& theData)
{
	if (bookNo != theData.bookNo)
	{
		std::cout << "Different bookNo, combine operation fail!" << std::endl;
		return *this;
	}
	units_sold += theData.units_sold;
	revenue += theData.revenue;
	return *this;
}
Sales_data add(const Sales_data& itemA,const Sales_data& itemB)
{
	if (itemA.bookNo != itemB.bookNo)
	{
		std::cout << "Different bookNo, add operation fail!" << std::endl;
	}
	Sales_data itemSum;
	itemSum.bookNo = itemA.bookNo;
	itemSum.units_sold = itemA.units_sold + itemB.units_sold;
	itemSum.revenue = itemA.revenue + itemB.revenue;
	return itemSum;
}
std::istream& read(std::istream& in, Sales_data& theData)
{
	double price = 0;
	in >> theData.bookNo >> theData.units_sold >> price;
	theData.revenue = theData.units_sold*price;
	return in;
}
std::ostream& print(std::ostream& out,const Sales_data& theData)
{
	out << theData.bookNo << " " << theData.units_sold << " " << theData.revenue;
	return out;
}
