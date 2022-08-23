#if !defined(MACRO_SERVER_H)
#define MACRO_SERVER_H

#include <vector>
#include <string>
#include <iostream>
using namespace std;


struct EmployeeDetails{

    string name;
    int id;
    string department;
    string position;
    string salary;
};

//vector list for storing employee details
vector<EmployeeDetails> employeeList;

void addEmployee(){

    EmployeeDetails employee;
    cout<<"Employee Name : ";
    cin>>employee.name;
    cout<<"Employee Id : ";
    cin>>employee.id;
    cout<<"Department : ";
    cin>>employee.department;
    cout<<"Position : ";
    cin>>employee.position;
    cout<<"Salary : ";
    cin>>employee.salary;

    employeeList.push_back(employee);
    cout<<"Employee added successfully"<<endl;
}

void showEmployee(){

    //print data in rowwise

    cout<<"Name : "<< "Id : "<< "Department : "<< "Position : "<< "Salary : "<<endl;

    for(int i=0; i<employeeList.size(); i++){
        cout<<employeeList[i].name<<" : "<<employeeList[i].id<<" : "<<employeeList[i].department<<" : "<<employeeList[i].position<<" : "<<employeeList[i].salary<<endl;
    }
}

bool deleteEmployee (int id){

    for(int i=0; i<employeeList.size(); i++){
        if(employeeList[i].id == id){
            employeeList.erase(employeeList.begin()+i);
            cout<<"Employee deleted"<<endl;
            return true;
        }
    }
    cout << "Employee not found" << endl;
    return false;
}

bool updateEmployee(int id){
    for(int i=0; i<employeeList.size(); i++){
        if(employeeList[i].id == id){
            cout << "Enter name: ";
            cin>>employeeList[i].name;
            cout << "Enter id: ";
            cin>>employeeList[i].id;
            cout << "Enter department: ";
            cin>>employeeList[i].department;
            cout << "Enter position: ";
            cin>>employeeList[i].position;
            cout << "Enter salary: ";
            cin>>employeeList[i].salary;

            cout << "Employee updated" << endl;
            return true;
        }
    }
    cout << "Employee not found" << endl;
    return false;
}

#endif // MACRO

