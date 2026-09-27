/*
◆────────────────────────────────────────◆
83. Different Data Types
◆────────────────────────────────────────◆

💡 Remember

Pass by Reference
works with all data
types like int, float,
char and string.

*/

#include <iostream>
using namespace std;

// Function
void update(int &age,
            float &marks,
            char &grade)
{
    age = 21;
    marks = 95.5;
    grade = 'A';
}

// Main Function
int main()
{
    int age = 20;
    float marks = 90.0;
    char grade = 'B';

    update(age, marks, grade);

    cout << age << endl;
    cout << marks << endl;
    cout << grade;

    return 0;
}

/*

Output:

21
95.5
A

*/
