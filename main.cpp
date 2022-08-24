//hello world cpp

#include "inc/api.h"

static bool connec = false; //flag for connection

int userShow();
void loginPerson();

int main()
{   
    cout << "Welcome to the Employee Management System" << endl;
    loginPerson(); int choice = 0;
    
    while(true){
        
        if(f == ForceExit){
            cout << "Thank you for using our system ! " << endl;
            return 0;
        }
        else{
            int choice = userShow();
            userFunctions(choice);
        }
    
    }
    return 0;
}

void loginPerson(){

    cout<<"1. User \n2. Admin \n3. Exit"<<endl;
    int choice=0; string  password = ""; string  username = "";
    cin>>choice;

    if(choice==1){
        username = "user"; password = "user";
        if(userLogin(username, password)){
            cout << "User logged in" << endl;
        }
    }
    else if(choice==2){
        username = "admin"; password = "admin";
        if(userLogin(username, password)){
            cout << "Admin logged in" << endl;
        }
    }
    else{

        f = ForceExit;
    }
    
}

int userShow(){
    //show user options
    cout<<"\n\n1. Add Employee \n2. Delete Employee \n3. Update Employee \n4. Show Employee \n5. Exit"<<endl;
    
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    cout << endl << endl;

    return choice;
}

