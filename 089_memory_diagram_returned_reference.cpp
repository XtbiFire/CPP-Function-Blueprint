/*
◆────────────────────────────────────────◆
89. Memory Diagram (Returned Reference)
◆────────────────────────────────────────◆

💡 Remember

A reference points to the
same memory location as
the original variable.

*/

#include <iostream>
using namespace std;

int value = 10;

// Function
int& getValue()
{
    return value;
}

// Main Function
int main()
{
    getValue() = 100;

    cout << value;

    return 0;
}

/*

Output:

100

*/
