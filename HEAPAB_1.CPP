/*------------------------------------------------------------------------
Name:Mahajan Gopal Gulab
Roll no:96
Assignment Name: Implementation of Heap Sort using Adjust/Heapify
Class: MCA I Lab: CA Lab III (DS)
-------------------------------------------------------------------------*/

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class Heap
{
int b[50],n;
public:
void get();
void heapsort(int a[],int n);
void heapify(int a[],int n);
void adjust(int a[],int i,int n);
void disp();
};
void Heap::get()
{
cout<<"\n Enter How many node wants tostore:"; cin>>n;
for(int i=1;i<=n;i++)
cin>>b[i];
heapsort(b,n);
}
void Heap::disp()
{
for(int i=1;i<=n;i++)
cout<<"\t"<<b[i];
cout<<"\n";
}
void Heap::heapsort(int a[],int n){
heapify(a,n);
cout<<"\n MAX Heap Tree is :\n";
disp();
for(int i=n;i>=2;i--)
{
int t=a[i];
a[i]=a[1];
a[1]=t;
adjust(a,1,i-1);
}
}
void Heap::heapify(int a[],int n)
{
int i;
for(i=n/2;i>=1;i--)
{
adjust(a,i,n);
}
}
void Heap::adjust(int a[],int i, int n)
{
int j=2*i;
int item=a[i];
while(j<=n)
{
if((j<n) && (a[j]<a[j+1]))
j=j+1;
if(item>=a[j])
return;
else
{
a[j/2]=a[j];
j=2*j;
}
}
a[j/2]=item;
}
void main()
{
clrscr();
Heap h;
h.get();
cout<<"\n Sorted Heap Tree is :\n";
h.disp();
getch();
}

/******************** OUTPUT **********************

 Enter How many node wants tostore:5                                            
11 23 43 22 45                                                                  
                                                                                
 MAX Heap Tree is :                                                             
        45      23      43      22      11                                      
                                                                                
 Sorted Heap Tree is :
        11      22      23      43      45                                      
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
 */