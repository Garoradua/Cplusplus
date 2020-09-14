#include<iostream>
using namespace std;
int main()
{
int n,i,j,*arr,a[100]={};
int max,index,eq;
cout<<"How many elements: ";
cin>>n;
arr=new int[n];
cout<<"\nInput array elements: ";
for (i=0; i<n; i++)
{
    cin>>arr[i];
    a[arr[i]]++;
}
max=a[0];
index=0;
for (i=0; i<100; i++)
{
    if (max<a[i])
    {   max=a[i];
        index=i;
    }
}
cout<<"Max occuring no. is: "<<index<<"\n";
return 0;
}