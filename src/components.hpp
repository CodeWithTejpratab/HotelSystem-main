#include "systemClassFunc.hpp"
/////////////////////////////////////////////////////
// Global variables accessible by anyone ////////////
Hotel_system Hotel;//////////////////////////////////
Client* People = NULL;///////////////////////////////
///////////////////////////////////////////////////// 
int getAvalableRoom(int roomSize){
    std::array<std::string, 2> roomInfo;
    int position        = 0;
    for(int i=0; i<10;i++){
        roomInfo        = Hotel.getRoomInfo(i);
        if(roomInfo[0] == "0" && roomInfo[1] == std::to_string(roomSize)){
            return position;
        }
        position++;
    }
    return -1;
}

int bookRoom(int roomSize, int nights, std::string clientName){
    int availableRoom       = getAvalableRoom(roomSize);
    if (availableRoom != -1){
        Hotel.setRoom(availableRoom);
        appendClient(People, clientName, availableRoom, nights);
        return 0;
    }
    return -1;
}

void checkoutRoom(int roomNumber){
     Hotel.resetRoom(roomNumber);
     Hotel.resetService(roomNumber);
}

