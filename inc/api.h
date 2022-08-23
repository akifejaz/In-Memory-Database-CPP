#if !defined(MACRO_API_H)
#define MACRO_API_H


#include <iostream>
using namespace std;
static int conn = 0; //flag for connection

int connection(){

    
    if(conn == 0){
        cout << "Connection established" << endl;
        conn = 1;
        return 1;
    }
    else{
        cout << "Connection already established" << endl;
        return 0;
    }

}

int closeConnection(){
    if(conn == 1){
        cout << "Connection closed" << endl;
        conn = 0;
        return 1;
    }
    else{
        cout << "No connection to close" << endl;
        return 0;
    }
}

#endif // _AP
