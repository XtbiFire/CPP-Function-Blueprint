/*
◆───────────────────────────────◆
102. Finding Sum Of Array
◆───────────────────────────────◆

💡 Remember

A Function can calculate
the Sum of all Array
elements.

The final Sum is returned
to the Calling Function.

🌐 Code
*/

#include <iostream>
using namespace std;

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

// Main Function
int main()
{
    int marks[] = {80,90,75,95};

    int size = sizeof(marks) / sizeof(marks[0]);

    int total = findSum(marks, size);

    cout << "Total Marks : "
         << total;

    return 0;
}

/*

▶ Execution Output

Total Marks : 340

*/