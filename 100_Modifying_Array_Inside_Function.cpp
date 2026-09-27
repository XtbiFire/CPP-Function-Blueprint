/*
◆───────────────────────────────◆
100. Modifying Array Inside Function
◆───────────────────────────────◆

💡 Remember

An Array is passed by
Address.

Changing an element inside
the Function changes the
Original Array.

🌐 Code
*/

#include <iostream>
using namespace std;

// Modify Array Function
void modifyArray(int arr[], int size)
{
    arr[1] = 200;
}

// Main Function
int main()
{
    int numbers[] = {10,20,30};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    modifyArray(numbers, size);

    for(int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}

/*

▶ Execution Output

10 200 30

*/
