/*--------------------------------------------------------
Name:Mahajan Gopal Gulab
Roll no: 96
Matrix Addition using Two Dimensional Arrays in C++
--------------------------------------------------------*/

#include <iostream.h>
#include<conio.h>
int main()
{
clrscr();
 int r, c, a[100][100], b[100][100], sum[100][100], i, j;
 cout << "Enter number of rows (between 1 and 100): ";
 cin >> r;
 cout << "Enter number of columns (between 1 and 100): ";
 cin >> c;
 cout << endl << "Enter elements of 1st matrix: " << endl;
 // Storing elements of first matrix entered by user.
 for(i = 0; i < r; ++i)
 for(j = 0; j < c; ++j)
 {
 cout << "Enter element a" << i + 1 << j + 1 << " : ";
 cin >> a[i][j];
 }
 // Storing elements of second matrix entered by user.
 cout << endl << "Enter elements of 2nd matrix: " << endl;
 for(i = 0; i < r; ++i)
 for(j = 0; j < c; ++j)
 {
 cout << "Enter element b" << i + 1 << j + 1 << " : ";
 cin >> b[i][j];
 }
 // Adding Two matrices
 for(i = 0; i < r; ++i)
for(j = 0; j < c; ++j)
 sum[i][j] = a[i][j] + b[i][j];
 // Displaying the resultant sum matrix.
 cout << endl << "Sum of two matrix is: " << endl;
 for(i = 0; i < r; ++i)
for(j = 0; j < c; ++j)
{
 cout << sum[i][j] << " ";
 if(j == c - 1)
cout << endl;
}
getch();
}
/***********************output***********************
Enter number of rows (between 1 and 100): 2
Enter number of columns (between 1 and 100): 2                                  
                                                                                
Enter elements of 1st matrix:                                                   
Enter element a11 : 1                                                           
Enter element a12 : 2                                                           
Enter element a21 : 3                                                           
Enter element a22 : 4
                                                                                
Enter elements of 2nd matrix:                                                   
Enter element b11 : 4                                                           
Enter element b12 : 5                                                           
Enter element b21 : 6                                                           
Enter element b22 : 7                                                           
                                                                                
Sum of two matrix is:                                                           
5 7                                                                             
9 11                                                                            
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
	     */
