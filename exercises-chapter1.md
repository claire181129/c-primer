# Chapter 1

## Question

- [ ] __E1.11__ How to know if a is bigger than b without if statement?
- [ ] __E1.14__ my anwser not good enough
- [ ] __E1.15__ what error compiler can detect? name more type or cases of type error, declaration error.

## Exercise

__E1.1__  
g++ documentation:  [Linux man page](https://linux.die.net/man/1/g++)
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
// my prediction
std::cout<<"/*";                //legal
std::cout<<"*/";                //legal
std::cout<</* "*/" */;          //illegal, no right operand
std::cout<</* "*/" /* "/*" */;  //illegal, no right operand
// correct
std::cout<<"/*";                //legal, output:/*
std::cout<<"*/";                //legal, output:*/
std::cout<</* "*/" */;          //illegal, missing "
std::cout<</* "*/" /* "/*" */;  //legal, output:/*
```
so for compiler, character /* or */ takes precedence over any other character?
__E1.9__  
```
#include <iostream>
int main()
{
    int var=50, sum=0;
    while(var<=100)
    {
        sum+=var;
		var++;
    }
    std::cout<<"sum of 50-100: "<<sum<<std::endl;
    return 0;
}
```
__E1.10__  
```
#include <iostream>
int main()
{
    int var = 10;
    while(var>=0)
    {
        std::cout<<var<<" ";
        var--;
    }
    std::cout<<std::endl;
    return 0;
}
```
```
output:
10 9 8 7 6 5 4 3 2 1 0 
```
__E1.11__
```
#include<iostream>
int main()
{
    int a = 0,b = 0;
    std::cout<<"Please input two number(not equal)"<<std::endl;
    std::cin >> a >> b;
    if(a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    while(a != b-1)
    {
        a++;
        std::cout<<a<<" ";
    }
    return 0;
}
```
__E1.12__  
1. sum of numbers at range [-100,100]. 
2. sum = (-100+1000)*200/2 = 0.
__E1.13__  
```
#include <iostream>
int main()
{
    int sum = 0;
    for(int val = 50; val <= 100 ; val++)
        sum+=val;
    std::cout<<"sum:"<<sum<<std::endl;
    return 0;
}
```
__E1.14__  
- while
  - advantage: the pattern is easy, just condition then code block. less limit, more applicable condition.
  - disadvantage: too easy, sometimes not need do some work yourself.
- for
  - advantage:  initialization/condition/expression together, make it more convinient for this specific pattern.
  - disadvantage: maybe not applicable for some situation.
__E1.15__  
- syntax error
```
// What's a syntax error?
// characters/code you write can't be recognize or understand by compiler? I think.
// What about interpreted language? error detected when executed?

// What message compiler generate with syntax error?
// sometimes, the compiler will tell detect correctly where the error is. 
// And there'll be lots of error message, these are not really error, 
// just side effects of the real error.
// like code below
#include <iostream>
int main()
{
    int sum = 0
    for(int val = 50; val <= 100 ; val++)
        sum+=val;
    std::cout<<"sum:"<<sum<<std::endl;
    return 0;
}
/*
main.cpp: In function ‘int main()’:
main.cpp:5:5: error: expected ‘,’ or ‘;’ before ‘for’
    5 |     for(int val = 50; val <= 100 ; val++)
      |     ^~~
main.cpp:5:23: error: ‘val’ was not declared in this scope
    5 |     for(int val = 50; val <= 100 ; val++)
      |  
*/
// sometimes, the compiler can't detect correctly the reason of the error.
// But still it will locate near the real error.
// And this kind situation will also generate lots of fake error message.
// like code below
#include <iostream>
int main({
    int sum = 0;
    for(int val = 50; val <= 100 ; val++)
        sum+=val;
    std::cout<<"sum:"<<sum<<std::endl;
    return 0;
}
// generate error message below
/*
main.cpp:2:9: error: cannot declare ‘::main’ to be a global variable
    2 | int main({
      |         ^
main.cpp:3:5: error: expected primary-expression before ‘int’
    3 |     int sum = 0;
      |     ^~~
main.cpp:3:5: error: expected ‘}’ before ‘int’
main.cpp:2:10: note: to match this ‘{’
    2 | int main({
      |          ^
main.cpp:2:11: error: expected ‘)’ before ‘int’
    2 | int main({
      |         ~ ^
      |           )
    3 |     int sum = 0;
      |     ~~~    
main.cpp:4:5: error: expected unqualified-id before ‘for’
    4 |     for(int val = 50; val <= 100 ; val++)
      |     ^~~
main.cpp:4:23: error: ‘val’ does not name a type
    4 |     for(int val = 50; val <= 100 ; val++)
      |                       ^~~
main.cpp:4:36: error: ‘val’ does not name a type
    4 |     for(int val = 50; val <= 100 ; val++)
      |                                    ^~~
main.cpp:6:10: error: ‘cout’ in namespace ‘std’ does not name a type
    6 |     std::cout<<"sum:"<<sum<<std::endl;
      |          ^~~~
In file included from main.cpp:1:
/usr/include/c++/9/iostream:61:18: note: ‘std::cout’ declared here
   61 |   extern ostream cout;  /// Linked to standard output
      |                  ^~~~
main.cpp:7:5: error: expected unqualified-id before ‘return’
    7 |     return 0;
      |     ^~~~~~
main.cpp:8:1: error: expected declaration before ‘}’ token
    8 | }
      | ^
*/
// maybe pretend I'm a compiler, try to understand this world with only rules I know
// I have no learning ability, all I know is explain what I see using my rules.
// Then I may predict correctly the errors compiler will generate.
```
- type error
```
// type error usually detected when you're coding.
// now days code editor usually has error detect function.
#include <iostream>
int main()
{
    int sum = "hello";
    for(int val = 50; val <= 100 ; val++)
        sum+=val;
    std::cout<<"sum :"<<sum<<std::endl;
    return 0;
}
/*
main.cpp: In function ‘int main()’:
main.cpp:4:15: error: invalid conversion from ‘const char*’ to ‘int’ [-fpermissive]
    4 |     int sum = "hello";
      |               ^~~~~~~
      |               |
      |               const char*
*/
```
```
#include <iostream>
int f1(int a)
{
    return a+1;
}
int main()
{
    int sum = f1("hello");
    for(int val = 50; val <= 100 ; val++)
        sum+=val;
    std::cout<<"sum :"<<sum<<std::endl;
    return 0;
}
/*
main.cpp: In function ‘int main()’:
main.cpp:8:18: error: invalid conversion from ‘const char*’ to ‘int’ [-fpermissive]
    8 |     int sum = f1("hello");
      |                  ^~~~~~~
      |                  |
      |                  const char*
main.cpp:2:12: note:   initializing argument 1 of ‘int f1(int)’
    2 | int f1(int a)
      |        ~~~~^
*/
```
- declaration errors
```
// definition: errors in name declaration
// it seems this kind error also usually detected by editor when you're edting.
#include <iostream>
int main()
{
    int v1 = 0, v2 = 0;
    std::cin >> v >> v2;
    cout<<v1+v2<<std::endl;
    return 0;
}
/*
main.cpp: In function ‘int main()’:
main.cpp:5:17: error: ‘v’ was not declared in this scope; did you mean ‘v2’?
    5 |     std::cin >> v >> v2;
      |                 ^
      |                 v2
main.cpp:6:5: error: ‘cout’ was not declared in this scope; did you mean ‘std::cout’?
    6 |     cout<<v1+v2<<std::endl;
      |     ^~~~
      |     std::cout
In file included from main.cpp:1:
/usr/include/c++/9/iostream:61:18: note: ‘std::cout’ declared here
   61 |   extern ostream cout;  /// Linked to standard output
*/
```