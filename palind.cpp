#include<iostream>
using namespace std;
int main()
{
    int n, ini ,x;
    // cout<<"Num ";
    cin>>n; //12321
    ini = x = n; // 12321
    // cout << x<< ini;
    int  rem, r=0;
    while(x>0){
    rem = x%10; // 3
    x = x/10; // 12
    r =  r*10 + rem ;// 123
}
// cout << "hello";
 if(ini == r){
    cout << "Plaindrome";
 }
 else{
    cout << "Not";
 }


    return 0;
}