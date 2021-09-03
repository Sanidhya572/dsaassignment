
Q1.
//
#include<iostream>
using namespace std;

int
main ()
{

  const char *sub[7] =
    { "discerte maths", "cloud computing", "DSA", "php", "data communication",
"linux", "java programming" };
  cout << "Enter the subjects of your current semester:" << endl;

  cout << "The sub are:" << endl;
  for (int j = 0; j < 7; j++)
    {
      cout << j + 1 << "." << sub[j];
      cout << endl;
    }

  return 0;

}



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
