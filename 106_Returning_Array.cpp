/*
◆───────────────────────────────◆
106. Returning Array
◆───────────────────────────────◆

💡 Remember

A Local Array cannot be
returned from a Function.

The Local Array is destroyed
when the Function ends.

🌐 Code
*/

#include <iostream>
using namespace std;

// Fill Array Function
void fillArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        arr[i] = (i + 1) * 10;
    }
}

// Main Function
int main()
{
    int numbers[5];

    int size = sizeof(numbers) / sizeof(numbers[0]);

    fillArray(numbers, size);

    for(int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}

/*

▶ Execution Output

10 20 30 40 50

*/