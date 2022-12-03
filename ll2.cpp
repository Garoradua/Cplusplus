#include<iostream>
using namespace std;
int main(){
	struct node{
		int data;
		struct node *next;
	};
	struct node *temp, *newnode, *head;
	head = 0;
	int a=1;
	do{
	newnode = (struct node *)malloc(sizeof(struct node*));
	cout << "Enter data" <<endl;
	cin >> newnode->data;
	newnode->next=NULL;
	if(head==0){
		head = temp = newnode;
	}else{
		temp->next = newnode;
		temp=newnode;
		temp->next = NULL;
	}
	cout <<"Enter more ?" << endl;
	cin>>a;
}while(a);

temp = head;
while(temp != NULL){
	cout << temp->data << " ";
	temp = temp->next;
}
}