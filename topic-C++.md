# Topic - C++

| Index | Question | Status |
| ----- | -------- | ------ |
| Q2021-01-24#1 | Is code format important to C++? | explored |


## Questions

##### Q2021-01-24#1
__Question__  
Is code format important to C++? what if no tab before a line? make any difference? compile error?
__Explore__  

```
#include <iostream>int main(){int v1 = 0, v2 = 0;std::cin >> v1 >> v2;std::cout<<v1+v2<<std::endl;return 0;}
/*
main.cpp:1:24: warning: extra tokens at end of #include directive
    1 | #include <iostream>int main(){int v1 = 0, v2 = 0;std::cin >> v1 >> v2;std::cout<<v1+v2<<std::endl;return 0;}
      |                        ^~~~
main.cpp:1:10: fatal error: iostream>in: 没有那个文件或目录
    1 | #include <iostream>int main(){int v1 = 0, v2 = 0;std::cin >> v1 >> v2;std::cout<<v1+v2<<std::endl;return 0;}
      |          ^~~~~~~~~~~~~
compilation terminated.
*/
```
In this example, format will cause compile error. So format is part of C++ syntax?
What I write is just a text file, just characters. It's the language to decide what the characters mean. So how the characters organized, the format of the characters does matter. As for what specific format matters, it's the language to decide. Characters, how they are organized(format), these two thing combined to be a token, which has meaning defined by the language. And space is also a character, although it's often ignored. A space, new line character, tab etc, are all characters often ignored, not seen as part programming language(code).
refer:   
[syntax(programming languages)](https://en.wikipedia.org/wiki/Syntax_(programming_languages)) 
[Lexical analysis](https://en.wikipedia.org/wiki/Lexical_analysis#Token)