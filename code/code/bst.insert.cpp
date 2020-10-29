#include <bits/stdc++.h> 
using namespace std; 
struct node
{
	int data;
	struct node *left,*right;
};
struct node* newnode(int data)
{
	struct node* temp=new node;
	temp->data=data;
	temp->left=NULL;temp->right=NULL;
	return temp;
}
struct node* insert(struct node* root,int key)
{
	if(root==NULL)
		return newnode(key);
	else
	{
		if(key<(root->data))
		{
			root->left=insert(root->left,key);
		}
		if(key>root->data)
		{
			root->right=insert(root->right,key);
		}
	}
}
void inorder(struct node *root)
{
	if(root!=NULL)
	{	
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}	
}
int main()
{
	struct node *root=NULL;
	int n;
	cin>>n;
	int x;
	cin>>x;
	root=insert(root,x);
	n--;
	while(n--)
	{
		int x;
		cin>>x;
		root=insert(root,x);
	}
	inorder(root);
}