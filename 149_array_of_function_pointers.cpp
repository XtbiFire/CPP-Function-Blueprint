/*
◆───────────────────────────────◆
149. Array Of Function Pointers
◆───────────────────────────────◆

💡 Remember

An Array Of Function Pointers
can store addresses of
multiple compatible Functions.

◆───────────────────────────────◆

💻 Code
*/

#include <iostream>
using namespace std;

// Add Function
void add()
{
    cout << "Add Function" << endl;
}

// Subtract Function
void subtract()
{
    cout << "Subtract Function" << endl;
}

// Multiply Function
void multiply()
{
    cout << "Multiply Function" << endl;
}

// Main Function
int main()
{
    // Array Of Function Pointers
    void (*functions[3])() = {add, subtract, multiply};

    // Call Functions Through Array
    functions[0]();
    functions[1]();
    functions[2]();

    return 0;
}

/*

◆───────────────────────────────◆

▶ Output

Add Function
Subtract Function
Multiply Function

◆───────────────────────────────◆

*/