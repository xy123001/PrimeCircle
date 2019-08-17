#include<iomanip>
#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

const int n=4;
int a[n+1];
int b[n+1];

bool pd(int x, int y)
{
    if( x + y == 2)
        return true;
    for(int i = 2; i<= sqrt(x + y); i++)
    {
        if((x + y)%i == 0)
            return false;
    }
    return true;
}

void print()
{
    for(int i = 1; i<=n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

void search(int t)
{
    cout<<"searching "<<t<<" --- ";
    if(t == n+1)
    {   
        if(pd(a[n], a[1]))
        {
            print();
        }
        return;
    }

    for(int i=1; i<=n; i++)
    {
        if( !b[i] && pd(i, a[t-1]))
        {
            a[t] = i;
            b[i] = 1;
            search(t+1);
            b[i] = 0;
        }
    }
}
int main()
{
 
 search(1);
    
}
