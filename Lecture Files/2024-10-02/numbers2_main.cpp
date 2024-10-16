#include <iostream>
#include <bitset>
#include <iomanip>

using namespace std;

//https://www.tutorialspoint.com/cpp_standard_library/limits.htm
//https://en.cppreference.com/w/cpp/language/types

int main()
{
    cout << "Welcome to numbers2" << endl;
    size_t min_vu, max_vu; //size_t is unsigned

    min_vu = std::numeric_limits<unsigned char>::min();
    max_vu = std::numeric_limits<unsigned char>::max();
    cout << "unsigned char min_vu = " << min_vu << endl;
    cout << "unsigned char max_vu = " << max_vu << endl;
    cout << endl;

    min_vu = std::numeric_limits<unsigned short>::min();
    max_vu = std::numeric_limits<unsigned short>::max();
    cout << "unsigned short min_vu = " << min_vu << endl;
    cout << "unsigned short max_vu = " << max_vu << endl;
    cout << endl;

    min_vu = std::numeric_limits<unsigned int>::min();
    max_vu = std::numeric_limits<unsigned int>::max();
    cout << "unsigned int min_vu = " << min_vu << endl;
    cout << "unsigned int max_vu = " << max_vu << endl;
    cout << endl;

    min_vu = std::numeric_limits<unsigned long>::min();
    max_vu = std::numeric_limits<unsigned long>::max();
    cout << "unsigned long min_vu = " << min_vu << endl;
    cout << "unsigned long max_vu = " << max_vu << endl;
    cout << endl;

    min_vu = std::numeric_limits<unsigned long long>::min();
    max_vu = std::numeric_limits<unsigned long long>::max();
    cout << "unsigned long long min_vu = " << min_vu << endl;
    cout << "unsigned long long max_vu = " << max_vu << endl;
    cout << endl;

    /*
    8 bits
    unsigned char min_vu = 0
    unsigned char max_vu = 255

    16 bits
    unsigned short min_vu = 0
    unsigned short max_vu = 65535

    32 bits
    unsigned int min_vu = 0
    unsigned int max_vu = 4294967295

    32 bits
    unsigned long min_vu = 0
    unsigned long max_vu = 4294967295

    64 bits
    unsigned long long min_vu = 0
    unsigned long long max_vu = 18446744073709551615
    */

    //unsigned char c1;
    long long min_v, max_v;

    min_v = std::numeric_limits<char>::min();
    max_v = std::numeric_limits<char>::max();
    cout << "char min_v = " << min_v << endl;
    cout << "char max_v = " << max_v << endl;
    cout << endl;

    min_v = std::numeric_limits<short>::min();
    max_v = std::numeric_limits<short>::max();
    cout << "short min_v = " << min_v << endl;
    cout << "short max_v = " << max_v << endl;
    cout << endl;

    min_v = std::numeric_limits<int>::min();
    max_v = std::numeric_limits<int>::max();
    cout << "int min_v = " << min_v << endl;
    cout << "int max_v = " << max_v << endl;
    cout << endl;

    min_v = std::numeric_limits<long>::min();
    max_v = std::numeric_limits<long>::max();
    cout << "long min_v = " << min_v << endl;
    cout << "long max_v = " << max_v << endl;
    cout << endl;

    min_v = std::numeric_limits<long long>::min();
    max_v = std::numeric_limits<long long>::max();
    cout << "long long min_v = " << min_v << endl;
    cout << "long long max_v = " << max_v << endl;
    cout << endl;

    /*
    8 bits signed
    char min_v = -128
    char max_v = 127

    16 bits signed
    short min_v = -32768
    short max_v = 32767

    32 bits
    int min_v = -2147483648
    int max_v = 2147483647

    32 bits
    long min_v = -2147483648
    long max_v = 2147483647

    64 bits
    long long min_v = -9223372036854775808
    long long max_v = 9223372036854775807
    */
    return 0;
}
