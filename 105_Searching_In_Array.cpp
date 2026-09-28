/*
◆───────────────────────────────◆
105. Searching In Array
◆───────────────────────────────◆

💡 Remember

Searching means finding
a specific Element inside
an Array.

If the Element is found,

return true.

Otherwise,

return false.

🌐 Code
*/

#include <iostream>
using namespace std;

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
    int numbers[] = {10,20,30,40,50};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    int target = 30;

    if(searchElement(numbers, size, target))
    {
        cout << "Element Found";
    }
    else
    {
        cout << "Element Not Found";
    }

    return 0;
}

/*

▶ Execution Output

Element Found

*/