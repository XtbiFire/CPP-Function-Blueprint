/*
◆───────────────────────────────◆
107. Common Errors
◆───────────────────────────────◆

💡 Remember

Most Array problems are
caused by small mistakes.

Writing the correct code
is just as important as
understanding the concept.

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
}

// Main Function
int main()
{
    int numbers[] = {10,20,30,40,50};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    printArray(numbers, size);

    return 0;
}

/*

▶ Execution Output

10 20 30 40 50

*/