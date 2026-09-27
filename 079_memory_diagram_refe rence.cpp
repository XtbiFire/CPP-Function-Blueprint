/*
◆────────────────────────────────────────◆
79. Memory Diagram (Reference)
◆────────────────────────────────────────◆

💡 Remember

A reference variable
does not create a new
memory.

It becomes another
name (alias) for the
original variable.

*/

#include <iostream>
using namespace std;

// Function
void update(int &x)
{
    x = 100;
}

// Main Function
int main()
{
    int a = 20;

    update(a);

    cout << a;

    return 0;
}

/*

Memory Diagram

Before Function Call

a = 20

↓

x ─────► a

↓

x = 100

↓

a = 100

Output:

100

*/
