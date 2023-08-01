//binary tree...

#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *right, *left;
};

void main()
{
	struct node *root;
	root = create();
}

struct node *create()
{
	struct node *temp;
	int data;
	int choice;
	temp=(struct node*)malloc(sizeof(struct node));
	cout<<"Press 0 to exit";  
    cout<<"\nPress 1 for new node";  
    cout<<"Enter your choice : ";
	cin>>choice;
	if(choice==0)
	{
		return 0;
	 }
	else{
		cout<<"Enter data";
		cin>>data;
		temp->data=data;
		cout<<"Enter the left child:";
		cin>>data;
		temp->left=create();
		cout<<"Enter the right child:";
		cin>>data;
		temp->right=create();
		return temp;
	}  
}
