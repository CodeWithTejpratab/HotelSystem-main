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

int bookRoom(int roomSize, int nights, 
             std::string clientName){
    int availableRoom       = getAvalableRoom(roomSize);
    if (availableRoom != -1){
        Hotel.setRoom(availableRoom);
        appendClient(People, clientName, availableRoom, nights);
        return 0;
    }
    return -1;
}

void checkoutRoom(int roomNumber){ //This function can be improve, remember to do so
     Hotel.resetRoom(roomNumber);
     Hotel.resetService(roomNumber);
}

void deleteClient(Client*& head, std::string name){
    Client *temp                = head;
    Client *prev                = NULL;
    bool found = false;
    if (temp->getFullname() == name){
        head                    = head->next;
        delete temp;
    }
    else{
        while (temp){
            if (temp->getFullname() == name){
                prev->next      = temp->next;
                delete temp;
                break;
            }
            prev                = temp;
            temp                = temp->next;
        }
    }
}

void uploadClientInfoAndDelete(Client*& head, std::string name){ //Upload client info the database and delete client from heap
    //establish connection to databse


    //upload client info


    deleteClient(head, name);
}
