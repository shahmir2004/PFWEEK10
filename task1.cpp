#include <iostream>
using namespace std;

int checkCount(char toFind, string word);

main()
{

    int idx;
    char toFind;
    string wordAtIdx;
    int j;
    int count = 0;

    cout << "Enter number of elements in the array: ";
    cin >> idx;
    if (idx > 0)
    {

        string words[idx];

        for (int i = 0; i < idx; i++)
        {
            cout << "Enter word at idx " << i + 1 << " of the array : ";
            cin >> words[i];
        }

        cout << "Enter the character you want to find: ";
        cin >> toFind;

        for (int i = 0; i < idx; i++)
        {
            j = 0;
            wordAtIdx = words[i];

            count=count+checkCount(toFind, wordAtIdx);
        }

        
    }
    else
    {
        cout<<"Invalid idx";
    }

    if(count!=0)
    {
        cout<<count;
    }
    else if(count==0)
    {
        cout<<"No characters matched";
    }

}

int checkCount(char toFind, string word)
{
    int count=0;
    int i=0;

    while(word[i]!='\0')
    {
        if(word[i]==toFind)
        {
            count++;
        }
        i++;
    }
    return count;
}

