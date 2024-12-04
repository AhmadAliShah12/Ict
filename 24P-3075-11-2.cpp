#include<iostream>
using namespace std;
int main() 
{
int matrix[4][4];
int transpose[4][4];

cout << "Enter the elements of the 4x4 matrix:" << endl;

for (int i = 0; i < 4; i++)
 {
for (int j = 0; j < 4; j++)
 {
    cin >> matrix[i][j];
        }
    }
for (int i = 0; i < 4; i++) {
 for (int j = 0; j < 4; j++) {
   transpose[j][i] = matrix[i][j];
        }
    }
cout << "Transpose of the matrix:" << endl;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cout << transpose[i][j] << " ";
      }
   cout << endl;
  }
return 0; 
}
