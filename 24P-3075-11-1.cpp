#include<iostream>
using namespace std;
const int Rowa = 10;
const int Seata = 10;
int main() 
{
int seating[Rowa][Seata] = {0};
int reserved = 0;
int row,seat;

cout <<"Enter row and seat number to reserve (0 0 to stop): "<<endl;
while(cin >>row>> seat)
 {
   if(row == 0 && seat == 0)
    {
      break;
      }
      if (row < 1 || row > Rowa || seat < 1 || seat > Seata) 
      {
        cout <<"Invalid row or seat number. Please try again."<<endl;
      } 
      else if (seating[row - 1][seat - 1] == 1) 
      {
         cout << "Seat already reserved. Please try again."<<endl;
      } 
      else 
      {
   seating[row - 1][seat - 1] = 1;
   reserved++;
cout<<"Seat reserved successfully."<<endl;
        }
        cout<<"Enter row and seat number to reserve (0 0 to stop): "<<endl;
    }
cout<<"Total reserved seats: "<<reserved<<endl;
cout << "Final seating chart:"<<endl;
  for(int i = 0; i < ROWS; i++) 
   {
        for (int j = 0; j < Seata; j++)
         {
            cout << seating[i][j] << " ";
        }
        cout<<endl;
    }
return 0;
}

