#if !defined(MACRO_SERVER_H)
#define MACRO_SERVER_H

#include <vector>
#include <string>
#include <iostream>
using namespace std;

enum flags{

    user, admin, ForceExit
 
};

flags f ;

struct EmployeeDetails{

    string name;
    int id;
    string department;
    string position;
    string salary;
};

class Employe {

private:
    EmployeeDetails Emp;
public:
    Employe(){
        Emp.name = "";
        Emp.id = 0;
        Emp.department = "";
        Emp.position = "";
        Emp.salary = "";
    }
    Employe(string name, int id, string department, string position, string salary){
        Emp.name = name;
        Emp.id = id;
        Emp.department = department;
        Emp.position = position;
        Emp.salary = salary;
    }
    //setter for Emp
    void setName(string name){
        Emp.name = name;
    }
    void setId(int id){
        Emp.id = id;
    }
    void setDepartment(string department){
        Emp.department = department;
    }
    void setPosition(string position){
        Emp.position = position;
    }
    void setSalary(string salary){
        Emp.salary = salary;
    }
    //getter for Emp
    string getName(){
        return Emp.name;
    }
    int getId(){
        return Emp.id;
    }
    string getDepartment(){
        return Emp.department;
    }
    string getPosition(){
        return Emp.position;
    }
    string getSalary(){
        return Emp.salary;
    }
    
    ~Employe(){}
    
    void addEmployee();
    void showEmployee();
    bool deleteEmployee(int id);
    bool updateEmployee(int id);
    // void sortEmployee();
     
};

//vector list for storing employee details

vector<Employe> classEmpList;
Employe classEmp;


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

void Employe :: showEmployee(){

    //show row wise
    cout<<"Name   : "<<"Id   : "<<"Department   : "<<"Position   : "<<"Salary   : "<<endl;
    for(int i=0; i<classEmpList.size(); i++){
        cout<<classEmpList[i].getName()<<"   "<<classEmpList[i].getId()<<"   "<<classEmpList[i].getDepartment()<<"   "<<classEmpList[i].getPosition()<<"   "<<classEmpList[i].getSalary()<<endl;
    }
}

bool Employe :: deleteEmployee(int id){
    //delete 
    for(int i=0; i<classEmpList.size(); i++){
        if(classEmpList[i].getId() == id){
            classEmpList.erase(classEmpList.begin()+i);
            return true;
        }
    }
    return false;
}

bool Employe :: updateEmployee(int id){
    
    //update
    for(int i=0; i<classEmpList.size(); i++){
        if(classEmpList[i].getId() == id){
            string name, department, position, salary;
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
            classEmpList[i].setName(name);
            classEmpList[i].setId(id);
            classEmpList[i].setDepartment(department);
            classEmpList[i].setPosition(position);
            classEmpList[i].setSalary(salary);
            return true;
        }
    }
    return false;
}

/*
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

    //print data in rowwise
    for(int i=0; i<classEmpList.size(); i++){
        cout<<classEmpList[i].getName()<<" : "<<classEmpList[i].getId()<<" : "<<classEmpList[i].getDepartment()<<" : "<<classEmpList[i].getPosition()<<" : "<<classEmpList[i].getSalary()<<endl;
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

*/
#endif // MACRO


