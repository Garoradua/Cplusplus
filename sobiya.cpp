// // input 5 -> 25
// 6 -> 36 correct
// 9 -> 81 incorrect 
// -6 wrong

#include<iostream>
using namespace std;
int main(){
 cout << "Enter the number";
 int n;
 cin >> n;
 int b;

 if(n<0){
 	cout<<"Wrong number";
 }
 else{
 	int x;
 	x =n*n;
 	
 	b = x%10;
 }
if(n>0){
 if(n==b){
 	cout << "Correct number";
 }else{
 	cout << "Incorrect no";
 }
}
}