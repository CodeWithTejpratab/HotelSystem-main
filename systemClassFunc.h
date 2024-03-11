#ifndef CLASSES
#include "systemClass.h"
#endif

#define SYSTEM_READY
//
//
//
//
// Hotel_system Class Functions define here 
Hotel_system::      Hotel_system(){//default constructor define 
    for(int i = 0; i < 10; i++){
        room[i]             = 0;
        roomSize[i]         = rand() % 3 + 1; // room bed size 1-3
    }
    price1                  = 80;
    price2                  = 100;
}

std::array<std::string, 2>Hotel_system::       getRoomInfo(int& index) {
    std::array<std::string, 2> roomInfo;
    roomInfo[0]             = std::to_string(this->room[index]);
    roomInfo[1]             = std::to_string(this->roomSize[index]);
    return roomInfo; //{room bool 1/0, bedroom size 1-3} as string array 
}

void Hotel_system::     resetRoom(int& index){
    room[index]             = 0; //free room
}

double Hotel_system::   getprice1(){
    return price1;
}

double Hotel_system::   getprice2(){
    return price2;
}
//
//
//
//
// Client Class define here 
Client::        Client(std::string name, int roomNumber, int nights){
    this->fullname          = name;
    this->roomNumber        = roomNumber;
    this->nights            = nights;
    this->next              = NULL;
}

void Client::       setFullName(std::string name){
    this->fullname          = name; 
}

void Client::       setRoomNumber(int roomNumber){
    this->roomNumber        = roomNumber;
}

void Client::       setnights(int nights){
   this->nights            = nights; 
}

std::string Client::        getFullname(){
    return this->fullname;
}

int Client::        getRoomNumber(){
    return this->roomNumber;
}

int Client::        getnights(){
    return this->nights;
}
//
//
//
void appendClient(Client* &head, std::string name, int roomNumber, int nights){
    if(!head){head          = new Client(name, roomNumber, nights);}
    else{
        Client* temp        = head;
        while(temp->next){
            temp            = temp->next;
        }
        temp->next          = new Client(name, roomNumber, nights);
        temp = NULL;
        delete temp;
    }
}

bool searchClient(Client* head, std::string name){
    while(head){
        if(head->getFullname() == name){return 1;}
        head                = head->next;
    }
    return 0;
}
//
//
//
//Service Class function define here 
 Service::          Service(){
    for(int i=0; i<10; i++){
        this->roomService[i]        = 0;
        this->poolService[i]        = 0;
        this->publicService[i]      = 0;
    }
    this->priceRoomService = this->pricePool = this->pricePublicService        = 20;
 }

bool Service::      getRoomService(int index){
    return this->roomService[index];
}

bool Service::      getPoolService(int index){
    return this->poolService[index];
}

bool Service::      getPublicService(int index){
    return this->publicService[index];
}

double Service::        getPriceRoom(){
    return this->priceRoomService;
}

double Service::        getPricePool(){
    return this->pricePool;
}

double Service::        getPricePublic(){
    return this->pricePublicService;
}

void Service::          setRoomService(int index){
    this->roomService[index]        = 1;
}

void Service::          setPoolService(int index){
    this->poolService[index]        = 1;
}

void Service::          setPublicService(int index){
    this->publicService[index]        = 1;
}
//
//
//