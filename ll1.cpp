#include<iostream>
using namespace std;
int main(){
	struct node
	{
		int data;
		struct node *next;	
	};

	struct node *head, *temp, *newnode;
	head= 0;

	int again = 1;
	while(again){
	newnode = (struct node *)malloc(sizeof(struct node));
	cout << "Enter Data" << endl;
	cin >> newnode->data;
	newnode->next = NULL;

	if(head==0){
		head = temp = newnode;
	}else{
		temp->next = newnode;
		temp = newnode;
	}

	cout << "More operations ?   0/1";
	cin >> again;

}

temp = head;
while(temp!=0){
	cout << temp->data;
	temp = temp->next;
}

}