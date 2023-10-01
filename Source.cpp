/*
// linked list
#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node* next;
};

class linkedList
{
	public:
		
		node* head = NULL;
		node* temp = NULL;

	struct node* createnode()
	{
		int Data;
		node* newnode = new node();

		cout << "ENTER THE DATA " << endl;
		cin >> Data;

		if (newnode != NULL)
		{
			newnode->data = Data;
			newnode->next = NULL;
		}
		else
		{
			cout << "MEMORY IS NOT ALLOCATED" << endl;
		}

		return newnode;
	}

	void createLinkedList()
	{
		node* newnode1 = NULL;

		newnode1 = createnode();

		if (head == NULL)
		{
			head = newnode1;
			return;
		}

		temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode1;
		cout<<endl;
	}

	void displayLinkedList()
	{
		 temp = head;
		while (temp != NULL)
		{
			cout << temp->data;
			if (temp->next != NULL)
				cout << "->";
			temp = temp->next;
		}
		cout << endl;
	}

};
int main()
{
	linkedList obj;
	int choice;

	do
	{
		cout << "ENTER THE CHOICE:" << endl;
		cout << "1.CREATELL" << endl;
		cout << "2.DISPLAYLL" << endl;
		cout << "0.exit" << endl;
		cin >> choice;

		switch (choice)
		{
			case 1: obj.createLinkedList();
				break;

			case 2: obj.displayLinkedList();
				break;

		}


	} while (choice!=0);

	return 0;

}*/

/*

//stack {static}
#include<iostream>
using namespace std;
#define MAX 1000

class stack1
{
public:
	int stk[MAX];
	int top =-1;

	void push(int data)
	{

		if (top == (MAX - 1))
		{
			cout << "stack is overflow" << endl<<endl;
		}
		else
		{
			top++;
			stk[top] = data;
			cout << endl << endl;
		}
		 
	}

	void pop()
	{
		int del;
		if (top < 0)
		{
			cout << "stack is underflow" << endl<<endl;
		}
		else
		{
				del = stk[top];
				top--;
			cout << del<<endl<<endl;
		}
	}
	void top1()
	{
		if (top == -1)
		{
			cout << "no element" << endl << endl;
		}
		else
			cout << "Top element is "<<stk[top] << endl << endl;
	}
	void display()
	{
		int i;
		for (i = top; i >= 0; i--)
		{
			cout << stk[i];
		}

		cout << endl;
	}

};

int main()
{
	stack1 obj;
	int choice;

	do {
		cout << "ENTER THE CHOICE" << endl;
		cout << "1.push"<<endl;
		cout << "2.pop"<<endl;
		cout << "3.top"<<endl;
		cout << "4.display" << endl;
		cout << "0.exit" << endl;

		cin >> choice;

		switch (choice)
		{
			case 1:
				int x;
				cout << "enter the element" << endl;
				cin >> x;
				obj.push(x);
				break;

			case 2:
				 obj.pop();
				break;

			case 3:
				obj.top1();
				break;

			case 4:
				obj.display();
				break;

		}

	   } while (choice != 0);

	return 0;
}
*/

//queue{static}

/*
#include<iostream>
using namespace std;
#define MAX 1000

class queue
{
	public:

		int que[MAX];
		int rear;
		int front;

		queue()
		{
			front = -1;
			rear = -1;
		}

	void enqueue(int data)
	{
		if (rear == (MAX -1) )
		{
			cout << "QUEUE IS EMPTY:" << endl;
		}

		else if(rear == -1 && front == -1 )
		{
			front = rear = 0;
			que[rear] = data;
		}
		else
		{
			front++;
			que[front] = data;

		}
	}

	void dequeue()
	{
		if (rear == -1 && front ==-1 )
		{
			cout << "QUUEUE IS UNDERFLOW" << endl;
		}
		else if (front ==rear )
		{
			rear = front = -1;
			//cout << " deleted val is" << que[rear] << endl;
			
		}
		
		else
		{
			cout << " deleted val is"<<que[rear] << endl;
			rear++;
		}
	}

	void display()
	{
		int i = 0; 

		if (rear == -1 && front == -1)
		{
			cout << "Queue is empty" << endl;
			return;
		}
		else
		{
			for ( i = rear; i < front + 1; i++)
			{
				cout << que[i];
			}
			cout << endl;
		}
	}
};


int main()
{
	queue obj;
	int choice;
	do
	{
		cout << "1.enqueue" << endl;
		cout << "2.dequeue" << endl;
		cout << "3.display" << endl;
		cout << "0.exit" << endl;
		cout << "ENTER THE CHOICE" << endl;
		cin >> choice;

		switch (choice)
		{
			case 1:
				int data;
				cout << "ENTER THE DATA" << endl;
				cin >> data;
				obj.enqueue(data);
				break;

			case 2:
				obj.dequeue();
				break;
		}

	} while (choice != 0);

	return 0;
}*/

// DOUBLY LL


#include<iostream>
using namespace std;

struct node
{
	struct node* prev;
	int data;
	struct node* next;
};

class Doubbly
{
	public:
		node* newnode = NULL;
		node* Head = NULL;
		node* temp = NULL;

		 node* createLL(int Data)
		{
			  newnode = new node();

			if (newnode == NULL)
			{
				cout << "MEMORY IS NOT ALLOCATED" << endl;
				return nullptr;
			}
			else
			{
				newnode->prev = NULL;
				newnode->data = Data;
				newnode->next = NULL;
			}
			return newnode;

		}

		void DoublyLL()
		{
			int Data;
			cout << "Enter the DATA" << endl;
			cin >> Data;

			node* newnode1 = createLL(Data);

			if (Head == NULL)
			{
				Head = newnode1;
			}
			else
			{
				 temp = Head;

				 while (temp->next != NULL)
				 {
					 temp = temp->next;
				 }

					temp->next = newnode1;
					newnode1->prev = temp;
				
			}
			cout << endl;
			//cout << endl;
		}

		void Display()
		{
			 temp = Head;

			if (Head == NULL)
			{
				cout << "NO LL IS CREATED" << endl;
			}
			else
			{
				while (temp != NULL)
				{
					
					cout << temp->data << " -> ";
					temp = temp->next;
				}
				//cout << temp->data;
			}
			cout << endl;
			//cout << endl;
		}
		
		void DeleteFirstLl()
		{
			if (Head == NULL)
			{
				cout << "There is no linkedlist" << endl;
			}
			else
			{
				temp = Head;

				Head = temp->next;
				cout << "First eleent has been deleted" << temp->data << endl;
				free(temp);
			
			}
			cout << endl;
		}

		void DeleteLastLl()
		{
			if (Head == NULL)
			{
				cout << " There is no LL" << endl;
			}
			else
			{

				temp = Head;
				
				while (temp->next != NULL)
				{
					temp = temp->next;
				}
				cout << "Last Element Has been deleted" << temp->data << endl;

				(temp->prev)->next = NULL;
				free(temp);

			}
		}

		void DeleteAnyLl(int Data)
		{
			node* temp1 = NULL;
			
			if (Head == NULL)
			{
				cout << "NO LL is there" << endl;

			}
				temp = Head;
				temp1 = temp->next;
				

				while (temp != NULL)
				{
					if (temp == Head)
					{
						DeleteFirstLl();
					}


					if (temp1->data == Data)
					{
						cout << temp->data << endl;
						free(temp);
						temp = temp->next;
						temp1 = temp1->next;
					}
				}
			/*else
			{
				
				temp = Head;

				while (temp  != NULL)
				{
					if ((temp -> data ) == data)
					{
						cout << temp->data << " is deleted" << endl;
						free(temp);
						break;
						
					}
					else
					{
						cout << "no such data fount" << endl;
						break;
					}
					temp = temp->next;
				}
				
			}*/

			
		}
};

int main()
{

	Doubbly obj;

	int choice;
	do
	{
		
		cout << "1.CREATE THE DOUBLY LL" << endl;
		cout << "2.DISPLAY THE LL" << endl;
		cout << "3.To delete first element" << endl;
		cout << "4.To delete last element" << endl;
		cout << "5.To delete any element" << endl;
		cout << "6.PRESS 0 FOR EXIST" << endl;
		cout << "ENTER  THE CHOICE" << endl;
		cin >> choice;
		cout << endl;

		switch (choice)
		{
			case 1:
				obj.DoublyLL();
				break;

			case 2:
				obj.Display();
				break;

			case 3:
				obj.DeleteFirstLl();
				break;

			case 4:
				obj.DeleteLastLl();
				break;
				
			case 5:
				int Data;
				cout << "Enter the Data that you want to delete in ll" << endl;
				cin >> Data;
				obj.DeleteAnyLl(Data);
				break;
		}

	} while (choice != 0);

	return 0;
}