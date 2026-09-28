/*
◆───────────────────────────────◆
109. Final Boss
◆───────────────────────────────◆

💡 Remember

Functions with Arrays make
Programs Cleaner, Reusable
and Easy to Maintain.

One Array can be used by
many Functions.

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

    cout << endl;
}

// Sum Function
int findSum(const int arr[], int size)
{
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

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

// Search Function
bool searchElement(const int arr[], int size, int target)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            return true;
        }
    }

    return false;
}

// Main Function
int main()
{
    int marks[] = {85,92,78,96,88};

    int size = sizeof(marks) / sizeof(marks[0]);

    cout << "Marks : ";
    printArray(marks, size);

    cout << "Sum : "
         << findSum(marks, size)
         << endl;

    cout << "Maximum : "
         << findMaximum(marks, size)
         << endl;

    cout << "Minimum : "
         << findMinimum(marks, size)
         << endl;

    if(searchElement(marks, size, 92))
    {
        cout << "Search : Element Found";
    }
    else
    {
        cout << "Search : Element Not Found";
    }

    return 0;
}

/*

▶ Execution Output

Marks : 85 92 78 96 88

Sum : 439

Maximum : 96

Minimum : 78

Search : Element Found

*/