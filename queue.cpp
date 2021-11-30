#include<bits/stdc++.h>
using namespace std;
int qu[100],front=-1,rear=-1,n=100;
void enqueue()
{
    int inp;
    if(rear==n-1)
    {
        cout<<"q is full";
       
    }
    
    else if(rear==-1)
    {
        cout<<"input no";
    cin>>inp;

        front++;
        rear++;
        qu[front]=inp;
    }
    else{
        rear++;
        qu[rear]=inp;

    }
}

void dequeue()
{
    if(front==-1)
    {
        cout<<"q is empty";
    }
    else if(front==rear)
    {
        cout<<qu[front];
        front--;
        rear--;
    }
    else{
        cout<<qu[front];
        front++;
    }
}
void display()
{
    if(front=-1)
    {
        cout<<"q is empty";
    }
    else{
        for(int i=front;i<=rear;i++)
        {
            cout<<qu[i]<<endl;
        }
    }
}
int main()
{
    int again=1;
    int n;
    do
    {   
        cout<<"enter n"<<endl;
        cin>>n;
        switch(n)
        {
            case 1:
            enqueue();
            break;

            case 2:
            dequeue();
            break;

            case 3:
            display();
            break;

            default:
            cout<<"Invalid input"<<endl;
            break; 
        }
        cout<<"want more?"<<endl;
        cin>>again;
       
    }while(again);
    
}