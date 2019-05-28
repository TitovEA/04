#include <conio.h>
#include <cstring>
#include "byteprint.h"

using namespace std;

struct student
{
    char name[17];
    uint16_t year;
    float average;
    uint8_t gender : 1;
    uint8_t courses;
    student* starosta;
};

int main()
{
    /*
    uint16_t first, second;
    char oper;
    cin >> first >> oper >> second;
    byte_calc( first, second, oper );
    */

    student students [3] = {{"Anastasia",18,4,0,1,nullptr},{"Egor",19,5,1,1,&students[0]},{"Kirill",18,5,1,1,&students[0]}};
    cout << "Address of students" << ' '
         << &students << endl;
    cout << "Size of students" << ' '
         << sizeof (students) << endl;

    cout << "Address of student 1" << ' '
         << &students[0] << endl;
    cout << "Size of student 1" << ' '
         << sizeof (students[0]) << endl;

    cout << "Address of student 2" << ' '
         << &students[1] << endl;
    cout << "Size of student 2" << ' '
         << sizeof (students[1]) << endl;

    cout << "Address of student 3" << ' '
         << &students[2] << endl;
    cout << "Size of student 3" << ' '
         << sizeof (students[2]) << endl;
    cout << endl;

    cout << "Address of student 1 name" << ' '
         << &students[0].name << endl;
    cout << "offset of student 1" << ' '
         << offsetof (student,name)<< endl;
    cout << "Size of student 1 name" << ' '
         << sizeof (students[0].name) << endl;
    cout << "print_in_hex of student 1 name"<< ' ';
    print_in_hex(&students[0].name, sizeof(students[0].name));
    cout << endl;
    cout << "print_in_binary of student 1 name"<< ' ';
    print_in_binary(&students[0].name, sizeof(students[0].name));
    cout << endl;
    cout << endl;

    cout << "Address of student 1 year" << ' '
         << &students[0].year << endl;
    cout << "offset of student 1" << ' '
         << offsetof (student,year)<< endl;
    cout << "Size of student 1 year" << ' '
         << sizeof (students[0].year) << endl;
    cout << "print_in_hex of student 1 year"<< ' ';
    print_in_hex(&students[0].year, sizeof(students[0].year));
    cout << endl;
    cout << "print_in_binary of student 1 year"<< ' ';
    print_in_binary(&students[0].year, sizeof(students[0].year));
    cout << endl;
    cout << endl;

    cout << "Address of student 1 average" << ' '
         << &students[0].average << endl;
    cout << "offset of student 1" << ' '
         << offsetof (student,average)<< endl;
    cout << "Size of student 1 average" << ' '
         << sizeof (students[0].average) << endl;
    cout << "print_in_hex of student 1 average"<< ' ';
    print_in_hex(&students[0].average, sizeof(students[0].average));
    cout << endl;
    cout << "print_in_binary of student 1 average"<< ' ';
    print_in_binary(&students[0].average, sizeof(students[0].average));
    cout << endl;
    cout << endl;

    cout << "Address of student 1 courses" << ' '
         << (void*)&students[0].courses << endl;
    cout << "offset of student 1" << ' '
         << offsetof (student,courses)<< endl;
    cout << "Size of student 1 courses" << ' '
         << sizeof (students[0].courses) << endl;
    cout << "print_in_hex of student 1 courses"<< ' ';
    print_in_hex(&students[0].courses, sizeof(students[0].courses));
    cout << endl;
    cout << "print_in_binary of student 1 courses"<< ' ';
    print_in_binary(&students[0].courses, sizeof(students[0].courses));
    cout << endl;
    cout << endl;

    cout << "Address of student 1 starosta" << ' '
         << &students[0].starosta << endl;
    cout << "offset of student 1" << ' '
         << offsetof (student,starosta)<< endl;
    cout << "Size of student 1 starosta" << ' '
         << sizeof (students[0].starosta) << endl;
    cout << "print_in_hex of student 1 starosta"<< ' ';
    print_in_hex(&students[0].starosta, sizeof(students[0].starosta));
    cout << endl;
    cout << "print_in_binary of student 1 starosta"<< ' ';
    print_in_binary(&students[0].starosta, sizeof(students[0].starosta));
    cout << endl;
    cout << endl;
    cout << endl;

    cout << "Address of student 2 name" << ' '
         << &students[0].name << endl;
    cout << "offset of student 2" << ' '
         << offsetof (student,name)<< endl;
    cout << "Size of student 2 name" << ' '
         << sizeof (students[0].name) << endl;
    cout << "print_in_hex of student 2 name"<< ' ';
    print_in_hex(&students[0].name, sizeof(students[0].name));
    cout << endl;
    cout << "print_in_binary of student 2 name"<< ' ';
    print_in_binary(&students[0].name, sizeof(students[0].name));
    cout << endl;
    cout << endl;

    cout << "Address of student 2 year" << ' '
         << &students[0].year << endl;
    cout << "offset of student 2" << ' '
         << offsetof (student,year)<< endl;
    cout << "Size of student 2 year" << ' '
         << sizeof (students[0].year) << endl;
    cout << "print_in_hex of student 2 year"<< ' ';
    print_in_hex(&students[0].year, sizeof(students[0].year));
    cout << endl;
    cout << "print_in_binary of student 2 year"<< ' ';
    print_in_binary(&students[0].year, sizeof(students[0].year));
    cout << endl;
    cout << endl;

    cout << "Address of student 2 average" << ' '
         << &students[0].average << endl;
    cout << "offset of student 2" << ' '
         << offsetof (student,average)<< endl;
    cout << "Size of student 2 average" << ' '
         << sizeof (students[0].average) << endl;
    cout << "print_in_hex of student 2 name"<< ' ';
    print_in_hex(&students[0].average, sizeof(students[0].average));
    cout << endl;
    cout << "print_in_binary of student 2 name"<< ' ';
    print_in_binary(&students[0].average, sizeof(students[0].average));
    cout << endl;
    cout << endl;

    cout << "Address of student 2 courses" << ' '
         << &students[0].courses << endl;
    cout << "offset of student 2" << ' '
         << offsetof (student,courses)<< endl;
    cout << "Size of student 2 courses" << ' '
         << sizeof (students[0].courses) << endl;
    cout << "print_in_hex of student 2 courses"<< ' ';
    print_in_hex(&students[0].courses, sizeof(students[0].courses));
    cout << endl;
     cout << "print_in_binary of student 2 courses"<< ' ';
    print_in_binary(&students[0].courses, sizeof(students[0].courses));
    cout << endl;
    cout << endl;

    cout << "Address of student 2 starosta" << ' '
         << &students[0].starosta << endl;
    cout << "offset of student 2" << ' '
         << offsetof (student,starosta)<< endl;
    cout << "Size of student 2 starosta" << ' '
         << sizeof (students[0].starosta) << endl;
    cout << "print_in_hex of student 2 starosta"<< ' ';
    print_in_hex(&students[0].starosta, sizeof(students[0].starosta));
    cout << endl;
    cout << "print_in_binary of student 2 starosta"<< ' ';
    print_in_binary(&students[0].starosta, sizeof(students[0].starosta));
    cout << endl;
    cout << endl;
    cout << endl;

    cout << "Address of student 3 name" << ' '
         << &students[0].name << endl;
    cout << "offset of student 3" << ' '
         << offsetof (student,name)<< endl;
    cout << "Size of student 3 name" << ' '
         << sizeof (students[0].name) << endl;
    cout << "print_in_hex of student 3 name"<< ' ';
    print_in_hex(&students[0].name, sizeof(students[0].name));
    cout << endl;
    cout << "print_in_binary of student 3 name"<< ' ';
    print_in_binary(&students[0].name, sizeof(students[0].name));
    cout << endl;
    cout << endl;

    cout << "Address of student 3 year" << ' '
         << &students[0].year << endl;
    cout << "offset of student 3" << ' '
         << offsetof (student,year)<< endl;
    cout << "Size of student 3 year" << ' '
         << sizeof (students[0].year) << endl;
    cout << "print_in_hex of student 3 year"<< ' ';
    print_in_hex(&students[0].year, sizeof(students[0].year));
    cout << endl;
    cout << "print_in_binary of student 3 year"<< ' ';
    print_in_binary(&students[0].year, sizeof(students[0].year));
    cout << endl;
    cout << endl;

    cout << "Address of student 3 average" << ' '
         << &students[0].average << endl;
    cout << "offset of student 3" << ' '
         << offsetof (student,average)<< endl;
    cout << "Size of student 3 average" << ' '
         << sizeof (students[0].average) << endl;
    cout << "print_in_hex of student 3 name"<< ' ';
    print_in_hex(&students[0].average, sizeof(students[0].average));
    cout << endl;
    cout << "print_in_binary of student 3 name"<< ' ';
    print_in_binary(&students[0].average, sizeof(students[0].average));
    cout << endl;
    cout << endl;

    cout << "Address of student 3 courses" << ' '
         << &students[0].courses << endl;
    cout << "offset of student 3" << ' '
         << offsetof (student,courses)<< endl;
    cout << "Size of student 3 courses" << ' '
         << sizeof (students[0].courses) << endl;
    cout << "print_in_hex of student 3 courses"<< ' ';
    print_in_hex(&students[0].courses, sizeof(students[0].courses));
    cout << endl;
    cout << "print_in_binary of student 3 courses"<< ' ';
    print_in_binary(&students[0].courses, sizeof(students[0].courses));
    cout << endl;
    cout << endl;

    cout << "Address of student 3 starosta" << ' '
         << &students[0].starosta << endl;
    cout << "offset of student 3" << ' '
         << offsetof (student,starosta)<< endl;
    cout << "Size of student 3 starosta" << ' '
         << sizeof (students[0].starosta) << endl;
    cout << "print_in_hex of student 3 starosta"<< ' ';
    print_in_hex(&students[0].starosta, sizeof(students[0].starosta));
    cout << endl;
    cout << "print_in_binary of student 3 starosta"<< ' ';
    print_in_binary(&students[0].starosta, sizeof(students[0].starosta));
    cout << endl;
    cout << endl;

}
