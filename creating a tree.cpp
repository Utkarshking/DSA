#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
int data;
node *lchild;
node *rchild;	
}
struct node* new node(int value)
{
node *n =new node
n->data=value;
n->lchild=NULL;
n->rchild=NULL;	
return n;
}
struct node* insertvalue(struct node* root,int value,queue<node *> &q)
{
node* node =new node(value)
if(root==NULL)
{
root=node;	
}
else if(q.front()->left==NULL)
{
q.front()->left=node;	
}
else
{
q.front()->right=node;	
q.pop();
}
q.push(node);
return root;	
}
node * createtree(int arr[],int n)
{
node* root=NULL;
queue <node*> q;
for(int i=0;i<n;i++)
{
root=insertvalue(root,arr[i],q);
return root;	
}
int main()
{
int arr[] = { 10, 20, 30, 40, 50, 60 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    Node* root = createTree(arr, n); 
    levelOrder(root); 
    return 0;	
}
}



