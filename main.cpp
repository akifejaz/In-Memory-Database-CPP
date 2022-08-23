//hello world cpp
#include "inc/server.h"
#include "inc/api.h"

static bool connec = false; //flag for connection
int show();
int FunctionsToPerform(int);

int main()
{   
    cout << "Welcome to the Employee Management System" << endl;

    if(connection()==1){ //connection establish

        connec = true;
    }
    else{
        connec = false;
        cout<<"Connection not established"<<endl;
        return 0;
    }

    while(true){

        int choice = show();
        if(choice == 5){
            break;
        }
        else{
            int r = FunctionsToPerform(choice);
            if(r==-1){break;}
        }
    }

    //make switch cases for choice


    return 0;
}


int show(){

    //show user options
    cout<<"\n"<<endl;
    cout << "1. Add Employee" << endl;
    cout << "2. Delete Employee" << endl;
    cout << "3. Update Employee" << endl;
    cout << "4. Show Employee" << endl;
    cout << "5. Exit" << endl;
    
    
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    cout << endl;

    return choice;
}

int FunctionsToPerform(int choice){

    //switch case for user choice
    switch(choice){
        case 1:
            addEmployee();
            
            break;
        case 2:
           // deleteEmployee();
            break;
        case 3:
           // updateEmployee();
            break;
        case 4:
            showEmployee();
            
            break;
        case 5:
            if(conn == true){
                closeConnection();
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