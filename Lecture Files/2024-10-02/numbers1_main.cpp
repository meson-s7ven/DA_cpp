#include <iostream>
#include <bitset>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Welcome to numbers1" << endl;
    int hex1 = 0xf;  //1111 = 15 = 1*f (15) 
    int oct1 = 017;  //001111 = 15 = 1*8 + 7
    int dec1 = 15;
    int bin1 = 0b1111; //1111 = 15

    //print them as decimal; default
    cout << "hex1 = " << hex1 << endl;
    cout << "oct1 = " << oct1 << endl;
    cout << "dec1 = " << dec1 << endl;
    cout << "bin1 = " << bin1 << endl;

    //print them as hex, oct, dec, and binary
    cout << "hex1 = " << hex << hex1 << endl;
    cout << "oct1 = " << oct << oct1 << endl;
    cout << "dec1 = " << dec << dec1 << endl;
    cout << "bin1 = " << bin1 << endl;
    cout << "bin1 = " << bitset<4>(bin1) << endl;

    return 0;
}
