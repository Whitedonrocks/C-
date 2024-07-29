// Define a C++ class Student with private attributes name (string), rollNumber (integer), and marks (array of floats). Include public member functions: 
// • setData(string n, int r, float m[]): Sets the name, rollNumber, and marks for the student. 
// • calculateAverageMarks(): Calculates and returns the average of the marks. • displayData(): Displays the name, rollNumber, and average marks of the student. 
// In the main() function, create two Student objects, set their data, calculate and display their average marks, and display their details.

#include<iostream>
using namespace std;
class Student{
    string name;
    int rollNumber;
    float marks[3];
    public:
    void setData(string n, int r, float m[]){
        name=n;
        rollNumber=r;
        marks[3]=m[3];
    }
   float calculateAverageMarks(){
    
    float avg;
    avg=(marks[0]+marks[1]+marks[2])/3;

   }
   void displayData(){
    cout<<name<<"\t"<<rollNumber<<"\t"<<marks<<endl;
   }
    
  
};
int main(){
 Student s1,s2;
 s1.setData("Ram",12,22);





return 0;
}