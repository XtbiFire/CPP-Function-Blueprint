/*
◆───────────────────────────────◆
139. String Final Boss
◆───────────────────────────────◆

💡 Remember

A String Final Boss
combines multiple String
operations in one program.

◆───────────────────────────────◆

💻 Code
*/

#include <iostream>
#include <string>
using namespace std;

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

// Remove Spaces Function
string removeSpaces(string text)
{
    string result;

    for(char ch : text)
    {
        if(ch != ' ')
        {
            result += ch;
        }
    }

    return result;
}

// Main Function
int main()
{
    string text = "hello world";

    cout << "Original : "
         << text << endl;

    cout << "Length : "
         << text.length() << endl;

    cout << "Vowels : "
         << countVowels(text) << endl;

    cout << "Reversed : "
         << reverseString(text) << endl;

    cout << "Without Spaces : "
         << removeSpaces(text);

    return 0;
}

/*

◆───────────────────────────────◆

▶ Output

Original : hello world
Length : 11
Vowels : 3
Reversed : dlrow olleh
Without Spaces : helloworld

◆───────────────────────────────◆

*/