#include <iostream>
#include <math.h>
int main()
{
    int n,biti=0,m,g=0;
    int counter;
    cin>>n;
    m=n;
    if(n==0)
    {
        biti=1;
        return 0;
    }
    if(n>0)
    {
        while(n>0)
        {
            n=n>>1;
            biti++;
        }
    }
    else
        if(n==-1)
    {
        counter=1;
        return 0;
    }

}

