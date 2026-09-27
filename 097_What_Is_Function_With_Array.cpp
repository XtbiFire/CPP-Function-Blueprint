/*
◆───────────────────────────────◆
97. What Is Function With Array
◆───────────────────────────────◆

💡 Remember

A Function can receive an
entire Array.

One Function can work
with all Array elements.

🌐 Code
*/

#include <iostream>
using namespace std;

// Print Function
void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// Main Function
int main()
{
    int marks[] = {85,90,78,95,88};

    int size = sizeof(marks) / sizeof(marks[0]);

    printArray(marks, size);

    return 0;
}

/*

▶ Execution Output

85 90 78 95 88

*/
