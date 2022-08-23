#if !defined(MACRO_API_H)
#define MACRO_API_H


#include <iostream>
using namespace std;
static int userConn = 0, adminConn = 0; //flag for connection

int userLogin(string username, string password){

    if(username == "user" && password == "user"){
        cout << "User logged in" << endl;
        userConn = 1;
        return 1;
    }
    else{
        cout << "Invalid username or password" << endl;
        return -1;
    }
}

int adminLogin(string username, string password){
    
    if(username == "admin" && password == "admin"){
        cout << "Admin logged in" << endl;
        adminConn = 1;
        return 2;   //val for admin in enum
    }
    else{
        cout << "Invalid username or password" << endl;
        return -1;
    }
}


int userFunctions(int choice){
    switch(choice){
        case 1:
            addEmployee();
            break;
        case 2:
            showEmployee();
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
            addEmployee();    
            break;
        case 2:
            static int id; cout<<"Enter id : "; cin>>id;
            deleteEmployee(id);
            break;
        case 3:
            cout<<"Enter id : "; cin>>id;
            updateEmployee(id);
            break;
        case 4:
            showEmployee();    
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

#endif // _AP

