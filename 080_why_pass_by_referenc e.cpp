/*
◆────────────────────────────────────────◆
80. Why Pass by Reference Is Used
◆────────────────────────────────────────◆

💡 Remember

Pass by Reference is
used when we want to
modify the original
variable without
creating a copy.

*/

#include <iostream>
using namespace std;

// Function
void addBonus(int &marks)
{
    marks += 10;
}

// Main Function
int main()
{
    int studentMarks = 90;

    addBonus(studentMarks);

    cout << studentMarks;

    return 0;
}

/*

Output:

100

*/
