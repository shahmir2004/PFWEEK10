#include <iostream>
using namespace std;

int array[50];
bool checkCycle(int cycle, int arrayvalues);
main()
{
    
    int cycle;
    int idx;
    int c=0;
    bool answer;
    cout<<"Enter numbers to enter in the array: ";
    cin>>idx;

    for(int i=0; i<idx; i++)
    {
        cout<<"Enter number at array index "<<i+1<<" : ";
        cin>>array[i];
        c++;
    }


    cout<<"Enter cycle length: ";
    cin>>cycle;

    answer=checkCycle(cycle, c);

    cout<<answer;
    

}

bool checkCycle(int cycle, int arrayvalues)
{
    bool condition=false;
    int count=0;
    int count2=0;
    int count3=0;

    if(cycle>=arrayvalues)
    {
        condition=true;
    }
    else if(cycle<arrayvalues)
    {
            for(int i=0; i<arrayvalues-1; i++)
            {
                if(array[i]==array[i+1])
                {
                    count3++;
                }
            }
            if(count3==arrayvalues-1)
            {
                condition=true;
                return condition;
            }
            
            while(count<cycle)
            {
                if(array[count]==array[count+cycle])
                {
                    count2++;
                }
                count++;
            }
            if(count2==cycle)
            {
                condition=true;
            }
        
    }
    
    
    return condition;
}