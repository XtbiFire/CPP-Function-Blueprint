/*
◆───────────────────────────────◆
101. Read Only Array (const)
◆───────────────────────────────◆

💡 Remember

A const Array cannot be
modified inside a Function.

The Function can Read the
Array but cannot Change it.


🌐 Code
*/

#include <iostream>
using namespace std;

// Print Function
void printArray(const int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    // arr[0] = 100;   // Error
}

// Main Function
int main()
{
    int marks[] = {85,90,78,95};

    int size = sizeof(marks) / sizeof(marks[0]);

    printArray(marks, size);

    return 0;
}

/*

▶ Execution Output

85 90 78 95

*/
