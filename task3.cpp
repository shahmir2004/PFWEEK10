#include <iostream>
using namespace std;
main()
{

    int idx1;
    int idx2 = 0;
    int count = 0;

    cout << "Enter number of digits in array 1: ";
    cin >> idx1;

    int array1[idx1];

    for (int i = 0; i < idx1; i++)
    {
        cout << "Enter digit at place " << i + 1 << " of array 1: ";
        cin >> array1[i];
    }

    for (int i = 1; i < idx1 - 1; i++)
    {
        if (array1[i] > array1[i + 1] && array1[i] > array1[i - 1])
        {
            count = count + 1;
        }
    }

    int array2[count];

    for (int i = 1; i < idx1 - 1; i++)
    {
        if (array1[i] > array1[i + 1] && array1[i] > array1[i - 1])
        {

            array2[idx2] = array1[i];
            idx2++;
        }
    }

    if (count > 0)
    {
        for (int i = 0; i < count; i++)
        {

            cout << array2[i];
            if (i < count - 1)
            {
                cout << " , ";
            }
        }
    }

    else if(count==0)
    {
        cout<<"No such numbers were found";
    }
}