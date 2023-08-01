#include<iostream>
#include<stdlib.h>

using namespace std;

struct node{
	int data;
	struct node*next;
};

struct node*head;

void beginsert();
void lastinsert();
//void random_insert();
//void begin_delete();
//void last_delete();
//void random_delete();
void display();
//void search();
int main()
{
	int choice=0;
	while(choice!=9)
	{
		cout<<"\n\n*****Main Menu*****\n";
		cout<<"Choose one option from the following list: ";
		cout<<"\n1.Insert in beginning\nInsert in last\nInsert at random\nDelete from Beginning\n5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Show\n9.Exit\n";
	    cout<<"Enter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				beginsert();
				break;
			case 2:
				lastinsert();
				break;
			case 3:
				random_insert();
				break;
			case 4:
				begin_delete();
				break;
			case 5:
				last_delete();
				break;
			case 6:
				random_delete();
				break;
			case 7:
				search();
				break;
			case 8:
				display();
				break;
			case 9:
				exit(0);
				break;
			default:
				cout<<"please enter valid choice...";
		}			
	}
}

void beginsert()
{
	struct node *ptr;
	int item;
	ptr = (struct node*)malloc(sizeof(struct node*));
	if(ptr==NULL)
	{
		cout<<"\n OVERFLOW";
	}
	else
	{
		cout<<"Enter value:";
		cin>>item;
		ptr->data=item;
		ptr->next=head;
		head=ptr;
		cout<<"\nNode inserted.";
	}
}
void lastinsert()
{
	struct node *ptr,*temp;
	int item;
	ptr = (struct node*)malloc(sizeof(struct node*));
	if(ptr==NULL)
	{
		cout<<"\n OVERFLOW";
	}
	else
	{
		cout<<"Enter value:";
		cin>>item;
		ptr->data=item;
		if(head==NULL)
		{
			ptr->next=NULL;
			head = ptr;
			cout<<"\nNode inserted.";
		}
		else
		{
			temp = head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=ptr;
			ptr->next = NULL;
			cout<<"\nNode inserted.";
		}
	}
}
void display()
{
	struct node *ptr;
	ptr = head;
	if(ptr == NULL)
	{
		cout<<"Nothing to print.";
	}
	else
	{
		cout<<"\nprinting values...";
		while(ptr!=NULL)
		{
			cout<<"\n"<<ptr->data;
			ptr=ptr->next;
		}
	}
}
