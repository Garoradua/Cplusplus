#include<iostream>
using namespace std;
int top =-1;
#define n 5
int arr[5];
void push(){
	if(top==n){
		cout << "Stack overflow" << endl;
	}else{
		top++;
		cout << "Enter element \n";
		cin >> arr[top];
		cout << endl;
	}
}
void pop(){
	if(top==-1){
		cout << "Stack Undeflow" <<endl;
	}else{
		cout << arr[top] << " is popped" <<endl;
		top--;
	}
}
void peek(){
	if(top==-1){
		cout << "Stack Undeflow" <<endl;
	}else{
		cout << arr[top] << " is peek element" <<endl;
	}
}

void display(){
if(top==-1){
		cout << "Stack Undeflow" <<endl;
	}else{
		for(int i=top; i>=0; i--){
			cout << arr[i] << " ";
		}
	}
}

int main(){
	int again =1;
	while(again){
	cout << "Enter your choice for Stack \t 1.Push 2.Pop 3.Peek 4.Display" << endl;
	int choice;
	cin >> choice;
	switch(choice){
	case 1 : push(); break;
	case 2: pop(); break;
	case 3: peek(); break;
	case 4: display(); break;
	// default: cout << "Wrong input " <<endl;
	
}
		cout << "\n Want to operate more ?" << endl;
		cin >> again;
}

}