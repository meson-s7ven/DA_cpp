#include <iostream>

using namespace std;

// creating a structure
struct{
    
    // members of the structure:
    int my_num;
    string my_name;

}my_struct; // structure name

// named structures
struct student{
    int age_num;
    string fname;
    string lname;
};

int main()
{
    cout << "Welcome!\n";

    // assing values to members of structure
    my_struct.my_num = 19;
    my_struct.my_name = "Jonn";

    // printint values out
    //cout << my_struct.my_num << endl;
    //cout << my_struct.my_name << endl;

    // structures with names
    student stud1;
    stud1.fname = "Jonn";
    stud1.lname = "Zamudio";
    stud1.age_num = 19;
    
    cout << stud1.fname << endl;
    cout << stud1.lname << endl;
    cout << stud1.age_num << endl;

    
    return 0;
}
