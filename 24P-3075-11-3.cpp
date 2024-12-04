#include<iostream>
using namespace std;
int main() 
{
int students,quiz;

cout<<"Enter the number of students: "<<endl;
cin>>students;

cout << "Enter the number of quizzes: "endl;
cin >>quiz;

int scores[students][Quiz];
int highest = 0;
for (int i = 0; i < students; i++) {
    cout<<"Enter scores for student"<<i+1<<": ";
     for (int j = 0; j < quiz; j++) 
     {
       cin>>scores[i][j];
        if(scores[i][j] > highest)
         {
                highest = scores[i][j];
        }
     }
  }

cout << endl;
 for(int j = 0; j < quiz; j++) 
 {
     int quizTotal = 0;
      for(int i = 0; i < students; i++) 
      {
            quizTotal+=scores[i][j];
        }
        double quizavg = static_cast<double>(quiztot)/students;
        cout<<"Average score for quiz "<<j + 1<<": " <<quizAvg<<endl;
    }
     cout<<endl;
     double classtot = 0;
     for(int i = 0; i < students; i++) 
     {
        int studenttot = 0;
        for(int j = 0; j < Quiz; j++) 
        {
            studenttot += scores[i][j];
        }
        double studentAvg = static_cast<double>(studenttot)/quiz;
        cout<<"Average score for student "<<i + 1<<": "<<studentAvg<< endl;
        classtot += studenttot; 
    }
double totalavg = classtot/(students * quiz);
cout<<"Overall class average: "<<totalavg<<endl;

cout<<"Highest score achieved: "<<highest<<endl;

return 0;    
}
