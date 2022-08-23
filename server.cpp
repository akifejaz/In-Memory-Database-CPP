#include "inc/api.h"

//define the funtions of Employe class
void Employe :: addEmployee(){
    string name, department, position, salary;
    int id;

    cout<<"Enter Name : ";
    cin>>name;
    cout<<"Enter Id : ";
    cin>>id;
    cout<<"Enter Department : ";
    cin>>department;
    cout<<"Enter Position : ";
    cin>>position;
    cout<<"Enter Salary : ";
    cin>>salary;

    classEmpList.push_back(Employe(name, id, department, position, salary));
    
}
