#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item curItem, item;
    if(std::cin>>curItem)
    {
        while(std::cin>>item)
        {
            if(item.isbn() == curItem.isbn())
                curItem+=item;
            else
            {
                std::cout<<curItem<<std::endl;
                curItem = item;
            }
        }
        std::cout<<curItem<<std::endl;
    }
    return 0;
}