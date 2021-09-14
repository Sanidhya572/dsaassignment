Q2.
//

#include<iostream>
using namespace std;
int main()
{
        int arr[100], size, i, j, temp;
        cout<<"\n Enter Array Size : ";
        cin>>size;
        cout<<"\n Enter Array Elements : \n";
        for(i=0; i<size; i++)
        {
                cin>>arr[i];
        }
        cout<<"\n Array Elements : \n\n";
        for(i=0; i<size; i++)
        {
                cout<<arr[i]<<"\t";
        }
        j=i-1;  // j points to the last element and i points to the first element
        i=0;     
        while(i<j)
        {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                i++;
                j--;
        }
        cout<<"\n\n Reverse Array Elements : \n\n";
        for(i=0; i<size; i++)
        {
                cout<<arr[i]<<"\t";
        }
        return 0;
}


Q3.
//
#include <iostream>
#include <conio.h>
#define SIZE 2;

void main ()
{
  int arr[SIZE][SIZE][SIZE];
  int i, j, k;
  clrscr ();
  for (i = 0; i < SIZE; i++)
    {
      for (j = 0; j < SIZE; j++)
	{
	  for (k = 0; k < SIZE; k++)
	    arr[i][j][k] = i + j + k;
	}
    }
  cout << "\n Elements in Row major order are: \n";
  for (i = 0; i < SIZE; i++)
    {
      for (j = 0; j < SIZE; j++)
	{
	  for (k = 0; k < SIZE; k++)
	    arr[i][j][k] = i + j + k;
	}
    }
  cout << "\nElements in colum major order\n";
  for (i = 0; i < SIZE; i++)
    {
      for (j = 0; j < SIZE; j++)
	{
	  for (k = 0; k < SIZE; k++)
	    cout << "[" << i << "]" << "[" << j << "]" << "[" << k << "]" <<
	      "=" << arr[i][j][k];
	  cout << "\n\n";
	}
    }

getch();


