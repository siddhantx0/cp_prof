#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    decltype(a) b = 124213213;

    cout << a << " " << b << endl;

    int *p = &b;        // pointer b with the address of b;
    cout << *p << endl; // dereferencing the pointer
    b = 15;
    cout << *p << endl; // dereferencing the pointer

    decltype(p) test = &b; // test is a int pointer type that references the address of b
    cout << test << endl;

    // & operator
    //! "&" is used to obtain the memory address of a variable
    cout << &b << endl;    // what's the memory address of b?
    cout << *test << endl; // dereferencing the pointer test
    cout << b << endl;     // what's the value at b?

    /*

!        "&" is the address-of operator and is used to obtain the address of a variable.
!        "*" is the dereference operator and is used to access or modify the value stored at the address a pointer holds.
!        Conceptually, & takes you from a value to its address, while * takes you from an address to the value stored at that address.

    */
    return 0;
}