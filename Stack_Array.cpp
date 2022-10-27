#include<iostream>
using namespace std;
#define size 5
int ar[size];
int front=-1,rear=-1,i;
void Print()
{
    if(front==-1 || rear==-1)
    {
        cout<<"\nList Empty";
    }
    else
    {
        cout<<"\nYour queue: ";
        for(i=front;i<=rear;i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<endl;
    }
}
Insert()
{
    if(rear==size-1)
    {
        cout<<"\nList Overflow.\n";
    }
    else
    {
        if(front==-1)
        {
            front++;
        }
        cout<<"\nEnter an element: ";
        rear++;
        cin>>ar[rear];
        cout<<"\nElement Inserted!\n";
    }

}
Delete()
{
    if(front==-1)
    {
        cout<<"\nList Empty.";
    }
    else
    {
        cout<<"\nElement "<<ar[front]<<" got deleted\n";
        rear--;
        if(front>rear)
        {
            front=-1;
            rear=-1;
        }

    }
}
int main()
{
    int ch;
    while(ch!=4)
    {
    cout<<"-------------Choice List-------------\n";
    cout<<"1. Push an element."<<endl;
    cout<<"2. Pop an element."<<endl;
    cout<<"3. Print the Stack."<<endl;
    cout<<"4. Exit."<<endl;
    cout<<"Enter your choice:\n";
    cin>>ch;

        switch(ch)
        {
            case 1: Insert();
                    break;
            case 2: Delete();
                    break;
            case 3: Print();
                    break;
            case 4: break;
            default: cout<<"\nWrong Choice.\n";
                    break;
        }
    }
    return 1;
}
