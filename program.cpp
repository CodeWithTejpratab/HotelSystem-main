#include "components.h"
#ifdef SYSTEM_READY

void program();
void program(){
    service hotel;
    int userinput;
    hotel.printroom();
    std::cout<<"\n============================system online============================\n"<<endl;
    std::cout<<endl;
    std::cout<<"Welcome to BookHotel.com"<<endl;
    std::cout<<"1) book a room"<<endl;
    std::cout<<"2) Checkout of room"<<endl;
    std::cout<<"input: ";
    std::cin>>userinput;
    if(userinput==1){
    bookroom(hotel, userinput);
    }
    else if(userinput==2){
    checkout(hotel);
    }
    else 
    std::cout<<"invalid input, try again"<<endl;
    return program();
}

#endif