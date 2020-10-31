// create a linked list
#include<bits/stdc++.h>
using namespace std;
int main()
{
	struct node{
		int data;
		struct node *next;
	};
	struct node *head, *newnode, *temp;
	head=0;
	int again =1;
	while(again){
	// newnode = (struct node *)malloc(sizeof(struct node));
	newnode= new struct node;
	cin >> newnode->data;
	newnode->next=NULL;

	if(head==0){
		head = temp = newnode;
	}
	else{
		temp->next = newnode;
		temp=newnode;
	}
	cin>> again;
}	
	// insert at beginning
// temp=head;
// newnode= (struct node *)malloc(sizeof(struct node));
// int number;
// cout << "Hello"; 
// cin >> number;
// newnode->data = number;
// newnode->next = temp;
// head=newnode;

//insert node at end
// newnode=(struct node*)malloc(sizeof(struct node));
// cout << "Hello";
// int ele;
// cin >> ele;
// newnode->data=ele;
// newnode->next=NULL;
// temp->next=newnode;
// temp=newnode;


// insert node at given location
// int location;
// cin >> location;
// temp = head;
// newnode= (struct node *)malloc(sizeof(struct node));
// int number;
// cin>>number;
// newnode->data=number;
// for(int i=1;i<location-1;i++){
// 	temp=temp->next;
// }
// newnode->next=temp->next;
// temp->next=newnode;


// delete from beginning
// cout<<"Hello";
// temp=head;
// head=temp->next;
// free(temp);

//delete from end
// temp=head;
// struct node * previous_node; 
// while(temp->next!=0){
// 	previous_node=temp;
// 	temp=temp->next;
// }
// previous_node->next=NULL;
// free(temp);

// remove at parrticular position
struct node *previous_node;
temp=head;
int i=1;
int pos;
cout<<"Hello";
cin>>pos;
while(i<pos){
	previous_node=temp;
	temp=temp->next;
	i++;
}
previous_node->next=temp->next;
free(temp);
// free(previous_node);




temp=head;
	while(temp!=0){
		cout << temp->data;
		temp=temp->next;
	}
	return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int main(){

// 		struct node{
// 			int data;
// 			struct node *next;
// 		};

// 		struct node *head, *newnode,  *temp;
// 		head = 0;
// 		int again =1;
// 			while(again){
// 		newnode = (struct node *)malloc(sizeof(struct node));
// 		cout << "Enter the data in the node";
// 		cin >> newnode->data;
// 		newnode->next = NULL;

// 		if(head==0){
// 			head = temp = newnode ;
// 		}
// 		else{
// 			temp->next=newnode;
// 			temp = newnode;
// 		}
// 		cin >> again;
// 	}
// 		return 0;
// 	}
