#ifndef CLASSES
#include "systemClass.h"
#endif

#define SYSTEM_READY

// Hotel_system Class Functions define here 
Hotel_system::  Hotel_system(){//default constructor define 
    for(int i = 0; i < 10; i++){
        room[i] = 0;
        roomSize[i] = rand() % 3 + 1; // room bed size 1-3
    }
    price1 = 80;
    price2 = 100;
}

std::array<std::string, 2> Hotel_system::   getRoomInfo(int& index) {
    std::array<std::string, 2> roomInfo;
    roomInfo[0] = std::to_string(room[index]);
    roomInfo[1] = std::to_string(roomSize[index]);
    return roomInfo; //{room bool 1/0, bedroom size 1-3} as string array 
}

void Hotel_system:: resetRoom(int& index){
    room[index] = 0; //free room
}

double Hotel_system::   getprice1(){
    return price1;
}

double Hotel_system::   getprice2(){
    return price2;
}