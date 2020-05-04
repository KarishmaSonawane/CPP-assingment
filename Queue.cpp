#include <iostream>
using namespace std;
void push();
void pop();
void show();

class queue
{
	public:
	int n,a[10],choice,front=-1,rear=-1;
	void setqueuesize()
	{
		cout<<"Enter the size of the queue:"<<endl;
		cin>>n;
	}
	public: void operation()
	{
		while(choice!=4)
		{
			cout<<"Enter the operation for the queue:"<<endl<<"1.Push"<<endl<<"2.Pop"<<endl<<"3.Show"<<endl<<"4.Exit the operation"<<endl;
			cin>>choice;
			switch(choice)
			{
				case 1:push();
				break;
				case 2:pop();
				break;
				case 3:show();
				break;
				case 4:cout<<"Exiting the operations"<<endl;
				break;
				default:cout<<"Invalid move";
			}
		}
	}
		void push()
		{
			int value;
			cout<<"Enter the value to be inserted in the queue:"<<endl;
			cin>>value;
			if(rear==n-1)
			{
				cout<<"Queue is overflowing"<<endl;
			}
			if(front==-1 && rear==-1)
			{
				front=0;
				rear=0;
			}
			else
			{
				rear=rear+1;
			}
			a[rear]=value;
			cout<<"Value is inserted in the queue"<<endl;
		}
		
		void pop()
		{
			if(front==-1 || front>rear)
			{
				cout<<"Queue underflow"<<endl;
			}
			if(front == rear)  
				{  
					front = -1;  
					rear = -1 ;  
				}  
				else   
				{  
					front = front + 1;  
				}
			cout<<"value is deleted"<<endl;
		}
		void show()
		{
			int i;
			if(rear==-1)
			{
				cout<<"Queue is empty"<<endl;
			}
			else
			{
				cout<<"The values sin the queue are:"<<endl;
				for(i=front;i<=rear;i++)
				{
					cout<<" "<<a[i]<<" ";
				}
				cout<<endl;
			}
		}
 	
};
int main()
{
	queue q;
	q.setqueuesize();
	q.operation();
	return 0;
}