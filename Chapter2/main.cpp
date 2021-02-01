#include <iostream>
int main()
{
    bool bool_val = 0;
    int int_num = 0;
    long long_num = 0;
    long long long_long_num = 0;
    short short_num = 0;

    signed int signed_int = 0;
    unsigned int unsigned_int = 0;

    float float_num = 1.12345678;
    double double_num = 1.12345678;
    std::cout<<"float 1.12345678 : "<<float_num<<std::endl;
    std::cout<<"double 1.12345678 : "<<double_num<<std::endl;

    bool_val = 32;
    std::cout<<"bool_val = 32: "<<bool_val<<std::endl;
    bool_val = 1.232;
    std::cout<<"bool_val = 1.232: "<<bool_val<<std::endl;
    bool_val = float_num;
    std::cout<<"bool_val = float_num: "<<bool_val<<std::endl;

    float_num = -1.12345678;
    std::cout<<"float -1.12345678: "<<float_num<<std::endl;
    bool_val = float_num;
    std::cout<<"bool_val = float_num: "<<bool_val<<std::endl;

    int_num = 1234567890;
    std::cout<<"int_num = 1234567890: "<<int_num<<std::endl;
    float_num = int_num;
    std::cout<<"float_num = 1234567890: "<<float_num<<std::endl;
    long_num = 123456789012345678;
    std::cout<<"long_num = 123456789012345678: "<<long_num<<std::endl;
    float_num = long_num;
    std::cout<<"float_num = 123456789012345678 : "<<float_num<<std::endl;
    double_num = long_num;
    std::cout<<"double_num = 123456789012345678: "<<double_num<<std::endl; 

    // size of int is 4 byte, 32 bit, range [ -(2^32 -2)/2-1 ,+(2^32 -2)/2 ], 0xffffffff, 2^32 -1
    int least_int = -2147483648, most_int = 2147483647;
    std::cout<<"range of int: "<<least_int<<" , "<<most_int<<std::endl;
    char char_num_a = 255, char_num_b = 256, char_num_c = 257;
    std::cout<<"char 256: "<<int(char_num_a)<<" "<<int(char_num_b)<<" "<<int(char_num_c)<<std::endl;
    
    std::cout<<" "<<255/256<<std::endl;

    return 0;
}