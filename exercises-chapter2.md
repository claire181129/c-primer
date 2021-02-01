# Chapter 2

## Questions

- [ ] why there isn't signed float/double, usigned float/double?
- [ ] why char range is [-128,127], not [-127,127], or [-127,128]?

## Exercises

__E2.1__  
int, long, long long, short may have different size, depend on machine and compiler? float and double have different size. signed and unsigned have different data range.
```
#include <iostream>
int main()
{
    int inum = 0;
    long lnum = 0;
    long long llnum = 0;
    short snum = 0;

    signed int sinum = 0;
    unsigned int usinum = 0;

    std::cout<<"size of int: "<<sizeof(int)<<std::endl;//32
    std::cout<<"size of long: "<<sizeof(long)<<std::endl;//64
    std::cout<<"size of long long: "<<sizeof(long long)<<std::endl;//64
    std::cout<<"size of signed int: "<<sizeof(signed int)<<std::endl;//32
    std::cout<<"size of unsigned int: "<<sizeof(unsigned int)<<std::endl;//32
    std::cout<<"size of signed long: "<<sizeof(signed long)<<std::endl;//64
    std::cout<<"size of unsigned long: "<<sizeof(unsigned long)<<std::endl;//64
    std::cout<<"size of signed long long: "<<sizeof(signed long long)<<std::endl;//64
    std::cout<<"size of float: "<<sizeof(float)<<std::endl;//32
    std::cout<<"size of double: "<<sizeof(double)<<std::endl;//64
    //std::cout<<"size of signed float: "<<sizeof(signed float)<<std::endl;// why?
    //std::cout<<"size of unsigned float: "<<sizeof(unsigned float)<<std::endl;
    //std::cout<<"size of signed double: "<<sizeof(signed double)<<std::endl;
    //std::cout<<"size of signed double: "<<sizeof(unsigned double)<<std::endl;

    return 0;
}

```
output:
```
size of int: 4
size of long: 8
size of long long: 8
size of signed int: 4
size of unsigned int: 4
size of signed long: 8
size of unsigned long: 8
size of signed long long: 8
size of float: 4
size of double: 8
```
__E2.2__  
rate: double, must be float or double, and double more precise
principle: double, must be float or double, and double more precise
payment: double, must be float or double, and double more precise