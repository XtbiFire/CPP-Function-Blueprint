/*
◆───────────────────────────────◆
104. Finding Minimum Element
◆───────────────────────────────◆

💡 Remember

The Minimum Element is
the Smallest Value in
an Array.

Start with the First
Element and keep updating
the Minimum whenever a
smaller value is found.

🌐 Code
*/

#include <iostream>
using namespace std;

// Minimum Function
int findMinimum(const int arr[], int size)
{
    int minimum = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }

    return minimum;
}

// Main Function
int main()
{
    int marks[] = {72,85,91,67,88};

    int size = sizeof(marks) / sizeof(marks[0]);

    int smallest = findMinimum(marks, size);

    cout << "Minimum Marks : "
         << smallest;

    return 0;
}

/*

▶ Execution Output

Minimum Marks : 67

*/