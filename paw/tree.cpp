#include <iostream>
using namespace std;
struct node
{
    int info;
    struct node* left;
    struct node* right;
};
struct node* newnode(int it)
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->left=temp->right=NULL;
    temp->info=it;
    return temp;
}
void print(struct node* root)
{
    print(root->left);
    cout<<root->info;
    print(root->right);
}
struct node* insert(struct node* root,int item)
{
    if(root=NULL)
        return newnode(item);
    if(item<root->info)
        root=insert(root->left,item);
    else
        root=insert(root->right,item);
}
int main() 
{
    struct node* root;
    
    return 0;
}