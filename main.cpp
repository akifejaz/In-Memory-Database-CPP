//hello world cpp
#include "inc/server.h"
#include "inc/api.h"

static bool connec = false; //flag for connection
int adminShow();
int userShow();
int loginPerson();


// enum Person{
//     user,admin, exit
// };

int main()
{   
    cout << "Welcome to the Employee Management System" << endl;
    int person = loginPerson(); int choice = 0;
    if(person == -1 || person == 3){return -1;}

    while(true){
        
        if(person==1){
            cout << "User logged in" << endl;

            choice = userShow();
            if(choice == -1 || choice == 3){return -1;}

            choice = userFunctions(choice);
            if(choice == -1){return -1;}

        }
        else if(person==2){
            cout << "Admin logged in" << endl;

            choice = adminShow();
            if(choice == -1 || choice == 5){return -1;}

            choice = adminFunctions(choice);
            if(choice == -1){return -1;}
        }
        else{
            return 0; 
        }
    
    }
    return 0;
}

int loginPerson(){

    cout<<"1. User \n2. Admin \n3. Exit"<<endl;
    int choice=0; string  password = ""; string  username = "";
    cin>>choice;

    if(choice==1){
        username = "user"; password = "user";
        choice = userLogin(username, password);
    }
    else if(choice==2){
        username = "admin"; password = "admin";
        choice = adminLogin(username, password);
    }

    return choice;
}

int userShow(){
    cout<<"1. Add Employee \n2. Show Employee \n3. Exit"<<endl;
    int choice=0;
    cin>>choice;

    return choice;
}

int adminShow(){

    //show user options
    cout<<"1. Add Employee \n2. Delete Employee \n3. Update Employee \n4. Show Employee \n5. Exit"<<endl;
    
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    cout << endl;
    return choice;
}
