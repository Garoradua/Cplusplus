#include <iostream>
using namespace std;
#define n 5
int front=-1;
int rear = -1;
int a[n];

void enqueue(){
	if(rear==-1){
		rear++;
		front++;
		cout << "enter ele" << endl;
		cin >> a[rear];
	}else if(rear==n-1){
		cout << "Queue is full" << endl;
	}
		else{
			cout << "enter ele" << endl;
		rear++;
		cin >> a[rear];
	}
}
void dequeue(){
	if(rear==-1){
		cout << "Queue is Empty" << endl;
	}else if(front==rear && front!=-1){
		cout << a[rear];
		rear =-1;
		front=-1;
	}
		else{
			cout << a[front];
		front++;
		
	}
}
void display(){
	if(rear==-1){
		cout << "Queue is Empty" << endl;
	}else{
		for(int i=front; i<=rear; i++){
			cout << a[i] << " ";
		}
	}
}
int main(){
	int choice;
	int again=1;
	while(again){
	cin >> choice;
	switch(choice){
		case 1: enqueue();
				break;
		case 2: dequeue();
				break;
		case 3: display();
				break;
	}
	cout << "enter more ?" << endl;
	cin >> again;
}

}