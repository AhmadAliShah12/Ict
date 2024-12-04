#include<iostream>
using namespace std;
int main() 
{
int rowA, colA, rowB, colB;

cout<<"Enter the number of rows and columns of Matrix A: "<<endl;
cin>>rowA>>colA;
cout<<"Enter the number of rows and columns of Matrix B: "<<endl;
cin >>rowB>>colB;

if (colA != rowB)
 {
cout << "Matrices cannot be multiplied. Number of columns of Matrix A must equal number of rows of Matrix B"<<endl;
        return 0;
    }
int matrixA[rowA][colA];
int matrixB[rowB][colB];
int result[rowA][colB];

for(int i = 0; i < rA; i++) 
{
   for(int j = 0; j < colB; j++) 
   {
       result[i][j] = 0;
      }
  }

cout<<"Enter the numbers of Matrix A:"<<endl;
   for (int i = 0; i < rowA; i++)
    {
      for (int j = 0; j < colA; j++)
       {
        cin>>matrixA[i][j];
        }
    }
    cout<<"Enter the numbers of Matrix B:"<<endl;
    for(int i = 0; i < rowB; i++)
     {
        for(int j = 0; j < colB; j++)
        {
            cin >> matrixB[i][j];
        }
    }

for(int i = 0; i < rowA; i++)
{
        for (int j = 0; j < colB; j++)
        {
            for (int k = 0; k < colA; k++)
            {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
cout<<"Matrix after multiplying:"<<endl;
    for (int i = 0; i < rowA; i++) 
    {
        for (int j = 0; j < colB; j++)
         {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
  return 0;
}
