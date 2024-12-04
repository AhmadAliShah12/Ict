#include<iostream>
using namespace std;
int main() 
{
char strng[20];

cout << "Enter a character array (max 19 characters): "<<endl;
cin >> strng;

bool string = false;
for(int i = 0; i < 20; i++) 
{
 if (strng[i] == '\0') 
 { 
    string = true;
      break;
      }
    }
if(string)
{
    cout <<"The input is a string."<< endl;
    }
    else 
    {
        cout <<"The input is a character array."<< endl;
    }
return 0;
}
