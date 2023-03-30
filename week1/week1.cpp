// week1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "week1: Hello World!\n";
    int iVal1 = -1;   //these are primitives
    short shVal2 = 3;
    int iVal3 = 45;
    long lval = 123456789;
    
    float fVal = 23;
    char chVal = 'S';
    
    std::cout << "\n iVal1 = " << iVal1 << " address = " << &iVal1;
    std::cout << "\n shVal2 = " << shVal2 << " address = " << &shVal2;
    std::cout << "\n iVal3 = " << iVal3 << " address = " << &iVal3;
    
    std::cout << "\n **** Size of char = " << sizeof(chVal);
    std::cout << "\n **** Size of short = " << sizeof(shVal2);
    std::cout << "\n **** Size of int = " << sizeof(iVal1);

    int* iPtr = NULL;
    iPtr = &iVal1;

    std::cout << "\n\n value of ptr variable = " << iPtr;
    std::cout << "\n iPtr address = " << &iPtr;
    std::cout << "\n size of iPtr = " << sizeof(iPtr);
    std::cout << "\n value lval points to is " << *(&lval + 1);

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
