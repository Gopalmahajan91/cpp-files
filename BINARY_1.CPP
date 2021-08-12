/*
------------------------------------------------------------------------------
Assignment Name: Implementation of Binary search Tree Insertion, Deletion,
Search & Recursive Tree Traversal
------------------------------------------------------------------------------
*/
# include<conio.h>
# include<process.h>
# include<iostream.h>
# include<alloc.h>
struct node
{
int ele;
node *left;
node *right;
};
typedef struct node *nodeptr;
class bstree
{
public:
void insert(int,nodeptr &);
void del(int,nodeptr &);
int deletemin(nodeptr &);
void find(int,nodeptr &);
void preorder(nodeptr);
void inorder(nodeptr);
void postorder(nodeptr);
};
void bstree::insert(int x,nodeptr &p)
{
if (p==NULL){
p = new node;
p->ele=x;
p->left=NULL;
p->right=NULL;
}
else
{
if (x < p->ele)
insert(x,p->left);
else if (x>p->ele)
insert(x,p->right);
else
cout<<"Element already Exits !\n";
}
}
void bstree:: del(int x,nodeptr &p)
{
nodeptr d;
if (p==NULL)
cout<<"Element not found\n";
else if (x < p->ele)
del(x,p->left);
else if (x > p->ele)
del(x,p->right);
else if ((p->left == NULL) && (p->right ==NULL))
{
d=p;
free(d);
p=NULL;
}
else if (p->left == NULL)
{
d=p;
free(d);
p=p->right;
}
else if (p->right ==NULL)
{
d=p;
p=p->left;
free(d);
}
else
p->ele=deletemin(p->right);
}
int bstree::deletemin(nodeptr &p)
{
int c;
if (p->left == NULL)
{
c=p->ele;
p=p->right;
return c;
}else
c=deletemin(p->left);
return c;
}
void bstree::find(int x,nodeptr &p)
{
if (p==NULL)
cout<<"Element not found !\n";
else
{
if (x <p->ele)
find(x,p->left);
else if ( x> p->ele)
find(x,p->right);
else
cout<<"Element Found !\n";
}
}
void bstree::preorder(nodeptr p)
{
if (p!=NULL)
{
cout<<p->ele<<"-->";
preorder(p->left);
preorder(p->right);
}
}
void bstree::inorder(nodeptr p)
{
if (p!=NULL)
{
inorder(p->left);
cout<<p->ele<<"-->";
inorder(p->right);
}
}
void bstree::postorder(nodeptr p)
{
if (p!=NULL)
{
postorder(p->left);
postorder(p->right);
cout<<p->ele<<"-->";
}
}
void main()
{
clrscr();
int ch,x;
bstree bst;
char c='y';
nodeptr root;root=NULL;
do
{
clrscr();
cout<<"\n-------------------------";
cout<<"\nBinary Search Tree";
cout<<"\n-------------------------\n";
cout<<"\n1.Insertion 2.Deletion 3.Find 4.Preorder";
cout<<"\n5.Inorder 6.Postorder7.Exit ";
cout<<"Enter your choice :\n"; cin>>ch;
switch(ch)
{
case 1:
cout<<"1.Insertion\n";
cout<<"Enter the new element to get inserted:\n"; cin>>x;
bst.insert(x,root);
cout<<"Inorder traversal is :";
bst.inorder(root);
break;
case 2:
cout<<"2.Deletion\n";
cout<<"Enter the element to get deleted:\n"; cin>>x;
bst.del(x,root);
bst.inorder(root);
break;
case 3:
cout<<"3.Find\n";
cout<<"Enter the element to be searched :\n";
cin>>x;
bst.find(x,root);
break;
case 4:
cout<<"4.Preorder\n";
if (root==NULL)
cout<<"Tree is empty\n";
else
{
cout<<"Preorder traversal (Recursive) is:\n"; bst.preorder(root);
}
break;
case 5:
cout<<"5.Inorder\n";
if (root==NULL)
cout<<"Tree is empty";
else
{
cout<<"Inorder traversal (Recursive) is:\n"; bst.inorder(root);
}
break;
case 6:cout<<"6.Postorder\n";
if (root==NULL)
cout<<"Tree is empty";
else
{
cout<<"Postorder traversal (Recursive) is:\n"; bst.postorder(root);
}
break;
case 7:
exit(0);
}
cout<<"\nContinue (y/n) ? ";
cin>>c;
}while (c=='y' || c == 'Y');
getch();
}
