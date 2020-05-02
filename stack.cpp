#include<iostream>
using namespace std;

int stack[10];
int top=-1;

void push(int n);
void pop();
void show();

int main()
{
    int n,choice=0;
	cout<<"Enter The size of stack ";
	cin>>n;
	n=n-1;

	while(choice != 4)
	{
		cout<<"\nSelect the operation given below...";
		cout<<"\n1.Push\n2.Pop\n3.Show\n4.Exit";
		cout<<"\nEnter Your Choice. ";
		cin>>choice;

		switch(choice)
		{
			case 1:
				push(n);
				break;

			case 2:
				pop();
				break;

			case 3:
				show();
				break;

			case 4:
				break;

			default:
				cout<<"\nInvalid Input Try Again...";
		}
	}

	return 0;
}

void push(int n)
{
	int val=0;
	if(top >= n)
	{
		cout<<"\nOverflow!";
	}
	else
	{
		top = top + 1;
		cout<<"\nEnter The Value ";
		cin>>val;
		stack[top] = val;
	}
}

void pop()
{
	if(top == -1)
	{
		cout<<"Underfow!";
	}
	else
	{
		top = top - 1;
		cout<<"Value Popped!";
	}
}

void show()
{
    int i;
	
	if(top == -1)
	{
		cout<<"Stack is Empty!";
	}
	else
	{
		for(i=top;i>-1;i--)
		{
			cout<<stack[i]<<endl;
		}
	}
}