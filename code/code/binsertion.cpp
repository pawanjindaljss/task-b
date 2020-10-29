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
	temp->left=NULL,temp->right=NULL;
	return temp;
}
int insert(struct node* root,int key)
{
	queue<struct node*> q;
	q.push(root);
	if(root==NULL)
	{
	    root=newnode(key);
		return 0;
	}
	else
	{
	    struct node *root;
		root=q.front();
		q.pop();	
		while(!q.empty())
		{
			if(!root->left)
			{
				root->left=newnode(key);
				return 0;
			}
			else
				q.push(root->left);
			if(!root->right)
			{
				root->right=newnode(key);
				return 0;
			}
			else
				q.push(root->right);
		}
	}
}
void inorder(struct node* root)
{
	if(root==NULL)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
int main()
{
	int n;
	cin>>n;
	struct node *root;
	while(n--)
	{
		int x;
		cin>>x;
		insert(root,x);
	}
	inorder(root);
}