#include <iostream>
#include <string>
#include <sstream> // for std::ostringstream
#include <algorithm>

#define ll long long

using std::cout, std::endl; // can select which specific functions to take from the standard library

// !@TOADD -- add to my templates mechanism.
void print(std::string s)
{
    size_t lengthActVal = std::string("act_val: ").size() + s.size();
    size_t lengthMAddress = std::string("m_address: ").size() + sizeof(&s) * 2; // Approximation of address length in hex

    // sizeof -- unary operator that returns the size of a type or an object.
    std::string diff = std::string(std::max(lengthActVal, lengthMAddress), '*') + "\n";

    std::cout << diff
              << "m_address: " << &s << std::endl;
    std::cout << "act_val: " << s << "\n"
              << diff << std::endl;
}

// !@TOADD -- add to my templates mechanism.
template <typename S>
std::string toString(const S &val) // toString any object in C++
{
    std::ostringstream oss;
    oss << val;
    return oss.str();
}

// !@TOADD -- add to my templates mechanism.
template <typename T>
void print(const T &val) // print any generic type, input is the address of a variable.
{
    std::string s = toString<T>(val); // generics in C++
    print(s);
}

int main()
{
    // string is a part of the standard library.
    // methods of initializating strings.
    std::string str("hello world! nice to meeeeet you.");
    std::string s1{'1', '2'}; // with braces
    // std::string s2(s1, 9);

    print(str);
    print(s1);
    print<int>(100);

    ll a = 15L, b = 123L;
    print<ll>(a);
    print<ll>(b);

    print<decltype(&b)>(&b);
}