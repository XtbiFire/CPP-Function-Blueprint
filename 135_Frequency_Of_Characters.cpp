/*
◆───────────────────────────────◆
135. Frequency Of Characters
◆───────────────────────────────◆

💡 Remember

Character Frequency
means counting how many
times each Character appears.

◆───────────────────────────────◆

💻 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Character Frequency Function
void showFrequency(string text)
{
    for(char ch = 'a'; ch <= 'z'; ch++)
    {
        int count = 0;

        for(char current : text)
        {
            if(current == ch)
            {
                count++;
            }
        }

        if(count > 0)
        {
            cout << ch << " : " << count << endl;
        }
    }
}

// Main Function
int main()
{
    string text = "banana";

    showFrequency(text);

    return 0;
}

/*

◆───────────────────────────────◆

▶ Output

a : 3
b : 1
n : 2

◆───────────────────────────────◆

*/