#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,r;
cout<<"Enter number.";
cin>>n;
r=n%8;
if(r==1)
{
    cout<<1<<"Thumb";
}
if(r==5)
{
    cout<<5<<"Little finger.";
}
if(r==0 || r==2)
{
    cout<<2<<"fore finger.";
}
if(r==3 || r==7)
{
    cout<<3<<"middle finger.";
}
if(r==4 || r==6)
{
    cout<<4<<"ring finger.";
}

}