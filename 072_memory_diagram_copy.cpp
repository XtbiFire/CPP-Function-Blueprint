/*
◆────────────────────────────────────────◆
72. Memory Diagram (Copy)
◆────────────────────────────────────────◆

💡 Remember

Pass by Value creates
a copy of the original
variable.

Changes are made only
to the copied variable,
not to the original.

*/

#include <iostream>
using namespace std;

// Function
void update(int x)
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

Copy Created

x = 20

↓

x = 100

↓

a = 20

Output:

20

*/
