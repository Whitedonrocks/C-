// Design a C++ class Employee with private attributes name (string), id (integer), and salary (double). Include public member functions: 
// • setData(string n, int i, double s): Sets the name, id, and salary of the employee. 
// • getData(): Displays the name, id, and salary of the employee. 
// In the main() function, create an array of Employee objects with a size of 3. Prompt the user to input details for each employee and display their information. 

#include<iostream>
using namespace std;
class Employee{
    private:
    string name;
    int id;
    double salary;
    public:

    void setData(string n,int i,double s){
        name=n;
        id=i;
        salary=s;
    }

    void getData(){
        
        cout<<name<<"\t"<<id<<"\t"<<salary<<endl;
    }

};
int main(){
    
    Employee obj1;
    int i;
    string name[3];
    int id[3];
    double salary[3];
    cout<<"Enter the name , id and salary of 3 employee:"<<endl;
   
    for(i=0;i<3;i++){
        cin>>name[i]>>id[i]>>salary[i];
        cout<<endl<<endl;
        }
    cout<<"Name:"<<"\t"<<"Id:"<<"\t"<<"Salary:"<<endl;
    for ( i = 0; i < 3; i++)
    {
        obj1.setData(name[i],id[i],salary[i]);
        obj1.getData();

    }
    
     



return 0;
}