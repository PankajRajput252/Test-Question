/*
This is the program for counting of closed path
closed path between 0 to 9 are
0,4,6,9= 1 closed path
8=2 closed path
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem,sum=0;
    cout<<"Enter the digit.";
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        if(rem==0 || rem==4 || rem==6 || rem==9)
        {
            sum=sum+1;
        }
        if(rem==8)
        {
            sum=sum+2;
        }
    }
    cout<<"number of closed path ="<<sum;
}