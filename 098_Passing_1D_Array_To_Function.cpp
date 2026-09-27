/*
◆───────────────────────────────◆
98. Passing 1D Array To Function
◆───────────────────────────────◆

💡 Remember

Whenever an Array is passed,
its Size should also be passed.

The Function uses the Size
to process every element.

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
