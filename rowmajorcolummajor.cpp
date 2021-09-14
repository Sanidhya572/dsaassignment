
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


