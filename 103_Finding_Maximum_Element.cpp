/*
◆───────────────────────────────◆
103. Finding Maximum Element
◆───────────────────────────────◆

💡 Remember

The Maximum Element is
the Largest Value in
an Array.

Start with the First
Element and keep updating
the Maximum whenever a
larger value is found.

🌐 Code
*/

#include <iostream>
using namespace std;

// Maximum Function
int findMaximum(const int arr[], int size)
{
    int maximum = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }

    return maximum;
}

// Main Function
int main()
{
    int marks[] = {72,85,91,67,88};

    int size = sizeof(marks) / sizeof(marks[0]);

    int largest = findMaximum(marks, size);

    cout << "Maximum Marks : "
         << largest;

    return 0;
}

/*

▶ Execution Output

Maximum Marks : 91

*/