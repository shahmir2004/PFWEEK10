#include <iostream>
using namespace std;

main()
{

    int daysrun;
    int countprogress = 0;
    cout << "Enter number of saturdays that kaka ran: ";
    cin >> daysrun;
    bool flag = true;

    if (daysrun > 0)
    {
        int milesSaturday[daysrun];

        for (int i = 0; i < daysrun; i++)
        {
            cout << "Enter number of miles run on saturday " << i + 1 << " : ";
            cin >> milesSaturday[i];
        }

        for (int i = 0; i < daysrun - 1; i++)
        {
            if (milesSaturday[i + 1] > milesSaturday[i])
            {
                countprogress++;
            }
        }

        cout << "Days run are "<<countprogress;
    }
    else if(daysrun==0)
    {
        cout<<"No days ran";
    }
    else if(daysrun<0)
    {
        cout<<"Enter valid day";
    }
}