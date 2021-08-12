/*-----------------------------------------------------------------------------
Name:Gopal Gulab Mahajan
Roll no:96
Assignment Name: Implementation of Max heap using Heapify/Adjust
Class: MCAI Lab: CA Lab III (DS)
------------------------------------------------------------------------------*/

#include<iostream.h>
#include<conio.h>
class heap
{
int i,j,item,a[10],n;
public:
void get();
void show();
void adjust(int [],int i,int j);
void heapify(int [],int);
};
void heap::get()
{
cout<<"enter the size of array";
cin>>n;
for(i=1;i<=n;i++)
cin>>a[i];
heapify(a,n);
}
void heap::show()
{
cout<<"\n The element is=> \n";
for(i=1;i<=n;i++)
cout<<a[i]<<"\t";
}
void heap::adjust(int a[],int i,int n)
{
j=2*i;item=a[i];
while(j<=n)
{
if((j<n)&&(a[j]<a[j+1]))
j++;
if(item>=a[j])
break;
a[j/2]=a[j];
j=2*j;
}
a[j/2]=item;
}
void heap::heapify(int a[],int n)
{
for(i=n/2;i>=1;i--)
adjust(a,i,n);
}
void main()
{
clrscr();
heap h;
h.get();
h.show();
getch();
}
/**********output***************

enter the size of array7
10 20 30 40 50 60 70                                                            
                                                                                
 The element is=>                                                               
70      50      60      40      20      10      30 */



















