#include "calculation_func.h"
void program();
void program(){
    service hotel;
    int userinput;
    hotel.printroom();
    cout<<endl;
    cout<<"Welcome to BookHotel.com"<<endl;
    cout<<"1) book a room"<<endl;
    cout<<"2) Checkout of room"<<endl;
    cout<<"input: ";
    cin>>userinput;
    if(userinput==1){
    bookroom(hotel);
    }
    else if(userinput ==2){

    }
    else 
    cout<<"invalid input, try again"<<endl;
    return program();
}