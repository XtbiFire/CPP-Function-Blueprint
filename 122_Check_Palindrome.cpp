/*
◆───────────────────────────────◆
122. Check Palindrome
◆───────────────────────────────◆

💡 Remember

A Palindrome reads the
same from Left to Right
and Right to Left.

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Palindrome Function
bool isPalindrome(const string &text)
{
    int left = 0;
    int right = text.length() - 1;

    while(left < right)
    {
        if(text[left] != text[right])
        {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

// Main Function
int main()
{
    string word = "madam";

    if(isPalindrome(word))
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}

/*

▶ Execution Output

Palindrome

*/