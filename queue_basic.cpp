#include<iostream>
using namespace std;
#define MAX 50
void insert();
void remove();
void display();
int queue_array[MAX];
int rear=-1;
int front=-1;
main()
{
    int choice;
    while(1)
    {
        cout<<"1.Insert element to queue\n2.Delete element from queue\n3.Display all elements of queue\n4.Quit\nEnter your choice: "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:insert();
                   display();
                   break;
            case 2:remove();
                   display();
                   break;
            case 3:display();
                   break;
            case 4:exit(1);
            default:cout<<"Wrong choice\n";
        }
    }
}
void insert()
{
    int add_item;
    if(rear==MAX-1)
        cout<<"Queue Overflow!\n";
    else
    {
        if(front==-1)
            front=0;
        cout<<"Insert the element in queue: ";
        cin>>add_item;
        rear=rear+1;
        queue_array[rear]=add_item;
    }
}
void remove()
{
    if(front==-1 || front>rear)
    {
        cout<<"Queue Underflow!\n";
        return;
    }
    else
    {
        cout<<"Element deleted from queue is "<<queue_array[front];
        front=front+1;
    }
}
void display()
{
    int i;
    if(front==-1)
        cout<<"The queue is empty!\n";
    else
    {
        cout<<"\nThe elements in the queue are: "<<endl;
        for(i=front;i<=rear;i++)
            cout<<queue_array[i]<<" ";
        cout<<"\n";
    }
}
