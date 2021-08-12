/*
----------------------------------------------------------------------------
Name:Mahajan Gopal Gulab
rollno:96
Assignment Name: Implementation of All Pair Shortest Path
Class: MCA I Lab: CA Lab III (DS)
----------------------------------------------------------------------------
*/
#include<iostream.h>
#include<conio.h>
class path
{
int a[5][5],i,j,k,n,s,d;
public:
void insert();
void display();
};
void path::insert()
{
cout<<"\nEnter the no. of vertices";
cin>>n;
cout<<"\nEnter the matrix:";
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
{
cin>>a[i][j];
if(a[i][j]==-1)
a[i][j]=9999;
}
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
for(k=1;k<=n;k++)
if(a[i][j]<(a[i][k]+a[k][j]))
a[i][j]=a[i][j];else
a[i][j]=(a[i][k]+a[k][j]);
}
void path::display()
{
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
cout<<"\t"<<a[i][j];
cout<<"\n";
}
cout<<"\nEnter the source vertex:";
cin>>s;
cout<<"\nEnter the destination vertex:"; cin>>d;
cout<<"\nPath from Source "<<s<<" to destination "<<d<<" is ";
cout<<a[s][d];
}
void main()
{
clrscr();
path p;
p.insert();
cout<<"\n Shortest path is \n";
p.display();
getch();
}
/* Output
Enter the no. of vertices 3
Enter the matrix:0 4 11
6 0 2
3 -1 0
Shortest path is
0 4 6
5 0 2
3 7 0
Enter the source vertex:3
Enter the destination vertex:2
Path from Source 3 to destination 2 is 7 */