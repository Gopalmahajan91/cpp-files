/* -------------------------------------------------------------
Name:Mahajan Gopal Gulab
Rollno:96
Assignment Name: Perform Bubble Sort for Integer
Class: MCA I Lab: CA Lab III (DS)
---------------------------------------------------------------- */

#include<iostream.h>
#include<conio.h>
class demo
{
	int a[10],i,last,exch,j,n,temp;
	public:
		void get();
		void asc_sort();
		void dec_sort();
		void disp();
};
void demo::get()
{
	cout<<"\n Enter the array size:";
	cin>>n;
	cout<<"\nEnter the array element:";
	for(i=1;i<=n;i++)
	cin>>a[i];
}
void demo::asc_sort()
{
	last=n;
	for(i=1;i<=n-1;i++)
	{
		exch=0;
		for(j=1;j<=last-1;j++)
		{
			if(a[j]>a[j+1]) //change a[j]<a[j+1] for descending
			 {
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				exch=exch+1;
			}
		}
		if(exch==0)
		return;
		else
		last=last-1;
	}
}
void demo::dec_sort()
{
	last=n;
	for(i=1;i<=n-1;i++)
{
	exch=0;
	for(j=1;j<=last-1;j++)
	{
		if(a[j]<a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			exch=exch+1;
		}
	}
	if(exch==0)
	return;
	else
	last=last-1;
}
}
void demo::disp()
{
cout<<"\nThe array element are :";
for(i=1;i<=n;i++)
cout<<a[i]<<"\t";
}
void main()
{
clrscr();
demo d;
d.get();
d.disp();
d.asc_sort();
cout<<"\nAfter Ascending Sort:";
d.disp();
d.dec_sort();cout<<"\nAfter Descending Sort:";
d.disp();
getch();
}

/*******************************************************************
  Output:


 Enter the array size:5                                                         
                                                                                
Enter the array element:11 23 10 26 50                                          
                                                                                
The array element are :11       23      10      26      50                      
After Ascending Sort:                                                           
The array element are :10       11      23      26      50                      
After Descending Sort:                                                          
The array element are :50       26      23      11      10
*/
