#include<iostream>
using namespace std;
#define n 5
int arr[n];
int top = -1;
int data = 0;
void push(){
	if(top==n-1){
		cout << "Stack overflow";
	}else{
	top++;
	cout << "Enter data \n";
	cin >> data;
	arr[top] = data;
}
}
void pop(){
	if(top==-1){
		cout << "Stack underflow";
	}else{
		cout << arr[top] <<" is popped";
		top--;
	}

}
void peek(){
	cout << arr[top];
}
void display(){
	if(top==-1){
		cout << "stack empty";
	}else{
	for(int i=top; i>=0; i--){
		cout << arr[i];
	}
}
}

int main(){
	int again =1;
	do{
	cout << "1. push \n 2. pop \n 3. peek \n 4. display" ;
	int a;
	cin >> a;
	switch(a){
		case 1: push(); break;
		case 2: pop(); break;
		case 3: peek(); break;
		case 4: display(); break;
	}
	cout << "more ?";
	cin >> again;
}while(again);
}