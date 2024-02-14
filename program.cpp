#include "calculation_func.h"
void program();
void program(){
    service hotel;
    int userinput;
    hotel.printroom();
    cout<<"\n============================system online============================\n"<<endl;
    cout<<endl;
    cout<<"Welcome to BookHotel.com"<<endl;
    cout<<"1) book a room"<<endl;
    cout<<"2) Checkout of room"<<endl;
    cout<<"input: ";
    cin>>userinput;
    if(userinput==1){
    bookroom(hotel, userinput);
    }
    else if(userinput==2){
    checkout(hotel);
    }
    else 
    cout<<"invalid input, try again"<<endl;
    return program();
}