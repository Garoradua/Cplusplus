#include <iostream>
using namespace std;
int top = -1;
#define n 5
int a[5];
void push(){
	if(top==n-1){
		cout << "Stack Overflow" << endl;
	}else{
		cout << "Enter ele" << endl;
		int ele;
		cin >> ele;
		top++;
		a[top] = ele; 
		 
	}
}
void pop(){
	if(top==-1){
		cout << "Stack underflow" << endl;
	}else{
		cout << a[top];
		top--;
	}
}
void display(){
	if(top==-1){
		cout << "Stack is empty" << endl;
	}else{
	for(int i=top; i>=0; i--){
		cout << a[i];
	}
}
}
void peek(){
	if(top==-1){
		cout << "Stack is empty" << endl;
	}else{
	cout << a[top];
}
}

int main(){
	int choice;
	int again=1;
	while(again){
	cin >> choice;
	switch(choice){
		case 1: push();
				break;
		case 2: pop();
				break;
		case 3: display();
				break;
		case 4: peek();
				break;
	}
	cout << "enter more ?" << endl;
	cin >> again;
}
}