#if !defined(MACRO_API_H)
#define MACRO_API_H
#include "server.h"



bool userLogin(string username, string password){

    if(username == "user" && password == "user"){
        f = user;
        return true;
    }
    else if(username == "admin" && password == "admin"){
        f = admin;
        return true;   //val for admin in enum
    }
    else{
        cout << "Invalid username or password" << endl;
        return false;
    }
}


void userFunctions(int choice){
    //switch b/w choices class functions Employee
    switch(choice){
        case 1:
            classEmp.addEmployee();
            break;
        case 2:
            if(f==user){
                cout<<"Login As Admin Please :"<<endl;
                break;
            }
            static int id; cout<<"Enter id : "; cin>>id;
            classEmp.deleteEmployee(id);
            break;
        case 3:
            if(f==user){
                cout<<"Login As Admin Please :"<<endl;
                break;
            }
            id; cout<<"Enter id : "; cin>>id;
            classEmp.updateEmployee(id);
            break;
        case 4:
            classEmp.showEmployee();
            break;
        case 5:
            f = ForceExit;
            break;
        default:
            cout<<"Invalid Choice";
            break;
    }
}

/*
static int userConn = 0, adminConn = 0; //flag for connection
//enum for user admin and exit

int userFunctions(int choice){
    switch(choice){
        case 1:
            //addEmployee();
            classEmp.addEmployee();
            break;
        case 2:
           // showEmployee();
           //showEmployee();
            break;
        case 3:
            if(userConn == 1){
                userConn = 0;
            }
            cout << "Thank you for using our system" << endl;
            return -1;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
    return 0;
}

int adminFunctions(int choice){

    //switch case for user choice
    switch(choice){
        case 1:
            //addEmployee();    
            break;
        case 2:
            static int id; cout<<"Enter id : "; cin>>id;
            //deleteEmployee(id);
            break;
        case 3:
            cout<<"Enter id : "; cin>>id;
            //updateEmployee(id);
            break;
        case 4:
            //showEmployee();    
            break;
        case 5:
            if(adminConn == 1){
                adminConn = 0;
            }
            cout << "Thank you for using our system" << endl;
            return -1;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }

    return 0;
}
*/

#endif // _AP

