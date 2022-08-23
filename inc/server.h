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
    cout << "Enter name: ";
    cin >> employee.name;
    cout << "Enter id: ";
    cin >> employee.id;
    cout << "Enter department: ";
    cin >> employee.department;
    cout << "Enter position: ";
    cin >> employee.position;
    cout << "Enter salary: ";
    cin >> employee.salary;
    
    employeeList.push_back(employee);
    cout << "Employee added" << endl;
}

void showEmployee(){

    //print data in rowwise

    cout<<"Name : "<< "Id : "<< "Department : "<< "Position : "<< "Salary : "<<endl;

    for(int i=0; i<employeeList.size(); i++){
        cout<<employeeList[i].name<<" : "<<employeeList[i].id<<" : "<<employeeList[i].department<<" : "<<employeeList[i].position<<" : "<<employeeList[i].salary<<endl;
    }
}

#endif // MACRO

