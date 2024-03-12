#include "components.hpp"
#ifdef SYSTEM_READY

void setServiceForRoom(int index, double &price){
    char input;
    std::cout<<"\n-+===========+-\n"<<std::endl;
    std::cout<<"Would you like to add room service y/n"<<std::endl;
    std::cin>>input;
    if(input == 'y'){
        Hotel.setRoomService(index);
        price+=Hotel.getPriceRoom();
    }
    std::cout<<"Would you like to add pool service y/n"<<std::endl;
    std::cin>>input;
    if(input == 'y'){
        Hotel.setPoolService(index);
        price+=Hotel.getPricePool();
    }
    std::cout<<"Would you like to add public service y/n"<<std::endl;
    std::cin>>input;
    if(input == 'y'){
        Hotel.setPublicService(index);
        price+=Hotel.getPricePublic();
    }
}

void program(){
    int userinput;
    double price        = 0.0;
    std::cout<<"\n============================system online============================\n"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Welcome to BookHotel.com"<<std::endl;
    std::cout<<"1) book a room"<<std::endl;
    std::cout<<"2) Checkout of room"<<std::endl;
    std::cout<<"input: ";
    std::cin>>userinput;
    std::cin.ignore();
    if(userinput==1){
        int roomSize, nights;
        std::string fullName;
        std::cout<<"\n\nHello! and welcome!\nWe have room of size 1 bed and 2 bed only"<<std::endl;
        std::cout<<"Enter your full name: ";
        std::getline(std::cin, fullName);
        std::cout<<"What size room would you like 1 or 2 bedroom: "; 
        std::cin>>roomSize;
        if(roomSize == 1){
            price += Hotel.getprice1();
        }
        else if(roomSize == 2){
            price += Hotel.getprice2();
        }
        std::cout<<"How many nights do you want to stay: "; 
        std::cin>>nights;
        if(bookRoom(roomSize, nights, fullName) == -1){
            std::cout<<"\n+++++++++++++++++++++++\nSorry, we have no available rooms right now"<<std::endl;
        }
        else{
            char serviceInput;
            std::cout<<"============================="<<std::endl;
            std::cout<<"Booked!\nHere is your info:\n"<<std::endl;
            std::array<std::string, 3> info         = searchClient(People, fullName);
            std::cout<<"Name: "<<info[0]<<"\nYour room number: "<<info[1]<<"\nNights stayed: "<<info[2]<<std::endl;
            std::cout<<"\nWould you like to add room service y/n"<<std::endl;
            std::cin>>serviceInput;
            if(serviceInput == 'y'){
                setServiceForRoom(std::stoi(info[1]), price);
            }
            std::cout<<"\nYour total is: $"<<(price*nights)<<std::endl;
        }
    }
    else if(userinput==2){
        int roomNumber;
        std::cout<<"\nWelcome to Checkout\nWhat is your room number: "<<std::endl;
        std::cin>>roomNumber;
        Hotel.resetRoom(roomNumber);
        std::cout<<"Checked out! Come again"<<std::endl;
    }
    else {
        std::cout<<"invalid input, try again"<<std::endl;
    }
    return program();
}
    
#endif