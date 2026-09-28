/*
◆───────────────────────────────◆
108. Real Life Examples
◆───────────────────────────────◆

💡 Remember

Functions with Arrays are
used in almost every
Software Application.

One Function can process
different Arrays without
changing the code.

🌐 Code
*/

#include <iostream>
using namespace std;

// Highest Score Function
int findHighestScore(const int score[], int size)
{
    int highest = score[0];

    for(int i = 1; i < size; i++)
    {
        if(score[i] > highest)
        {
            highest = score[i];
        }
    }

    return highest;
}

// Main Function
int main()
{
    int score[] = {120,250,180,400,350};

    int size = sizeof(score) / sizeof(score[0]);

    cout << "Highest Score : "
         << findHighestScore(score, size);

    return 0;
}

/*

▶ Execution Output

Highest Score : 400

*/