#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    const int n = 20;
   int numbers[n],negCount = 0,posCount = 0,zeroCount = 0;
    for(int i=1;i<=n;i++)
    {
        cout<<"\nEnter number["<<i<<"] : ";
        cin>>numbers[i];
        if(numbers[i] > 0)
        {
            posCount++;
        }
        else if(numbers[i] < 0)
        {
            negCount++;
        }
        else
        {
            zeroCount++;
        }
    }
    cout<<"\nWe have "<<posCount<<" positive numbers in this array"<<endl;
    cout<<"\nWe have "<<negCount<<" negative numbers in this array"<<endl;
    cout<<"\nWe have "<<zeroCount<<" zeros in this array"<<endl;
    cout<<"\n\nPositive numbers are : "<<endl;
    for(int i=1;i<=n;i++)
    {
        if(numbers[i] > 0)
        {
            cout<<numbers[i]<<"  ";
        }
    }
    cout<<"\n\nNegative numbers are : "<<endl;
    for(int i=1;i<=n;i++)
    {
        if(numbers[i] < 0)
        {
            cout<<numbers[i]<<"  ";
        }
    }
    getch();
    return 0;
}
