# Chapter 1

__E1.1__  
g++ documentation:
g++ naming convention: the output of "g++ -Wall main.cpp" is a.out

__E1.2__  
nothing happened after run. I think on my system, it's not treated as a failure?
"$echo $?" return 255.

__E1.3__  
```
#include <iostream>
int main()
{
    std::cout<<"Hello World"<<std::endl;
    return 0;
}
```

__E1.4__  
```
#include <iostream>
int main()
{
    std::cout<<"Enter two numbers: "<<std::endl;
    int v1=0, v2=0;
    std::cin>>v1>>v2;
    std::cout<<"The product of "<<v1<<" and "<<v2<<" is "<<v1*v2<<std::endl;
    return 0;
}
```
__E1.5__  
```
#include <iostream>
int main()
{
    std::cout<<"Enter two numbers: "<<std::endl;
    int v1=0, v2=0;
    std::cin>>v1>>v2;
    std::cout<<"The product of ";
    std::cout<<v1;
    std::cout<<" and ";
    std::cout<<v2;
    std::cout<<" is ";
    std::cout<<v1*v2<<std::endl;
    return 0;
}
```
__E1.6__  
```
std::cout<<"The sum of "<<v1;           #legal, output
        <<" and "<<v2;                  #illegal, no left operand
        <<" is "<<v1+v2<<std::endl;     #illegal, no left operand
// fixed
std::cout<<"The sum of "<<v1         
        <<" and "<<v2                
        <<" is "<<v1+v2<<std::endl;     
```
__E1.7__  
```
/*
	comment something /*  */
*/
#include <iostream>
int main()
{
	std::cout<<"main:";
	return -1;
}
```
compiler output countless error.
__E1.8__  
```
std::cout<<"/*";                //legal
std::cout<<"*/";                //legal
std::cout<</* "*/" */;          //illegal, no right operand
std::cout<</* "*/" /* "/*" */;  //illegal, no right operand
//correct
std::cout<<"/*";                //legal, output:/*
std::cout<<"*/";                //legal, output:*/
std::cout<</* "*/" */;          //illegal, missing "
std::cout<</* "*/" /* "/*" */;  //legal, output:/*
```
so for compiler, character /* or */ takes precedence over any other character?