#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createNode(value)
{
    struct node* newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
struct node* insert(struct node* root, int data)
{
    if (root == NULL) return createNode(data);

    if (data < root->data)
        root->left  = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);    
    return root;
}
void inorder(struct node* root)
{
    if(root == NULL) 
        return;
    inorder(root->left);
    printf("%d ->", root->data);
    inorder(root->right);
}
void preorder(struct node* root)
{
    if(root == NULL) 
        return;
    printf("%d ->", root->data);
    inorder(root->left);
    inorder(root->right);
}
void postorder(struct node* root)
{
    if(root == NULL) return;
    inorder(root->left);
    inorder(root->right);
    printf("%d ->", root->data);
}
int main()
{
    struct node *root = NULL;
    int ch,a;
   do
    {
        printf("\n1:Insert\n2:Inorder\n3:Preorder\n4:Postorder\n");
        printf("-------MAKE CHOICE-------\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                 printf("Element to insert: ");
                 scanf("%d",&a);
                 root=insert(root,a);
                 break;
            case 2:
                 inorder(root);
                 break;
            case 3:
                 preorder(root);
                 break;
            case 4:
                 postorder(root);
                 break;
            case 5:
                return 0;
        }
    }while(ch!=5);
    return 0;
}