/*
◆───────────────────────────────◆
90. Why Return by Reference Is Used
◆───────────────────────────────◆

💡 Remember

Return by Reference allows
the original variable to be
modified without creating
an extra copy.

*/

#include <iostream>
using namespace std;

int marks = 90;

// Function
int& getMarks()
{
    return marks;
}

// Main Function
int main()
{
    getMarks() += 5;

    cout << marks;

    return 0;
}

/*

Output:

95

*/
