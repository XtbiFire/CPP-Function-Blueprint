/*
◆───────────────────────────────◆
138. String Menu Driven Program
◆───────────────────────────────◆

💡 Remember

A Menu Driven Program
lets the user choose
which String operation to perform.

◆───────────────────────────────◆

💻 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Reverse String Function
string reverseString(string text)
{
    string result;

    for(int i = text.length() - 1; i >= 0; i--)
    {
        result += text[i];
    }

    return result;
}

// Count Vowels Function
int countVowels(string text)
{
    int count = 0;

    for(char ch : text)
    {
        if(ch == 'a' || ch == 'e' ||
           ch == 'i' || ch == 'o' ||
           ch == 'u')
        {
            count++;
        }
    }

    return count;
}

// Main Function
int main()
{
    string text = "programming";

    int choice;

    cout << "1. Find Length" << endl;
    cout << "2. Reverse String" << endl;
    cout << "3. Count Vowels" << endl;

    cout << "Enter Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Length : "
                 << text.length();
            break;

        case 2:
            cout << "Reversed : "
                 << reverseString(text);
            break;

        case 3:
            cout << "Vowels : "
                 << countVowels(text);
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}

/*

◆───────────────────────────────◆

▶ Output

1. Find Length
2. Reverse String
3. Count Vowels
Enter Choice: 2

Reversed : gnimmargorp

◆───────────────────────────────◆

*/