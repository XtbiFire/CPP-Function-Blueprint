/*
◆───────────────────────────────◆
99. Array Is Passed By Address
◆───────────────────────────────◆

💡 Remember

An Array is passed by
Address.

No new Array is created.

The Function works on the
Original Array.

🌐 Code
*/

#include <iostream>
using namespace std;

// Modify Array Function
void modifyArray(int arr[], int size)
{
    arr[0] = 100;
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

100 20 30

*/
