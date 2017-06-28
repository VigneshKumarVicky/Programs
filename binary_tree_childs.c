//Given N integers, store them in a binary tree and print the specified integer's left and right child.If no child then print -1.

/*
    Input   : 5
              21 13 8 9 6 23
              8
    Output  : 6 9
    
    Tree will be,
                    21
                  8    23
                6   9   
    
*/

#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*left;
    struct node*right;
}*root=NULL;
void insert(struct node** tree,int val)
{
    struct node *temp;
    if(*tree==NULL)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=val;
        temp->right=temp->left=NULL;
        *tree=temp;
    }
    if(val>(*tree)->data)
        insert(&(*tree)->right,val);
    else if(val<(*tree)->data)
        insert(&(*tree)->left,val);
}
void print(struct node* tree,int n)
{
    if(n==tree->data)
    {
        if(tree->left==NULL && tree->right==NULL)
            printf("-1");
        else if(tree->left==NULL)
           printf("%d",tree->right->data);
        else if(tree->right==NULL)
            printf("%d",tree->left->data);
        else
            printf("%d %d",tree->left->data,tree->right->data);
    }
    if(n>tree->data)
        print(tree->right,n);
    else if(n<tree->data)
        print(tree->left,n);
}
int main()
{
    int val,t;
    char ch;
    struct node*temp;
    while(ch!='\n')
    {
        scanf("%d",&val);
        scanf("%c",&ch);
        insert(&root,val);
    }
    scanf("%d",&val);
    print(root,val);
    return 0;
}
