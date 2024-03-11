#include "components.hpp"
#ifdef SYSTEM_READY

void program(){
    int userinput;
    std::cout<<"\n============================system online============================\n"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Welcome to BookHotel.com"<<std::endl;
    std::cout<<"1) book a room"<<std::endl;
    std::cout<<"2) Checkout of room"<<std::endl;
    std::cout<<"input: ";
    std::cin>>userinput;
    if(userinput==1){
        int roomSize, nights;
        std::string fullName;
        std::cout<<"\n\nHello! and welcome!\nWe have room of size 1 bed and 2 bed only"<<std::endl;
        std::cout<<"Enter your full name: ";
        std::cin>>fullName;
        std::cout<<"What size room would you like 1 or 2 bedroom: "; 
        std::cin>>roomSize;
        std::cout<<"How many nights do you want to stay: "; 
        std::cin>>nights;
        if(bookRoom(roomSize, nights, fullName) == -1){
            std::cout<<"\n+++++++++++++++++++++++\nSorry, we have no available rooms right now"<<std::endl;
        }
        program();
    }
    else if(userinput==2){
    
    }
    else {
        std::cout<<"invalid input, try again"<<std::endl;
        return program();
    }
}
    
#endif