#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Num of elemnts in arr: ";
    cin>>n;
    int arr[n];
    int temp;

    for(int i = 0;i<n;i++){
    cin>>arr[i];
    }
    
    for(int i=0;i<=n/2;i++)
    {
        temp = arr[n-1-i];
        arr[n-i-1] = arr[i];
        arr[i] = temp;
    }

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}