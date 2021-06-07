#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem,sum=0;
    cout<<"Enter the number.";
    cin>>n;
    n=n>>3;
    if(n & 1 == 1)
    {
        cout<<1;
    }
    else{
        cout<<0;
    }
  
}