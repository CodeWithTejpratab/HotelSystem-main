#include "system.h"
//hotel_system class function
hotel_system::hotel_system(){
    room = new int[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        room[i] = rand()%3+1;
    }
    price1 = 89.98;
    price2 = 129.77;
    price3 = 169.99;
}
void hotel_system::printroom(){
    for (int i = 0; i < 10; i++)
    {
        cout << room[i]<< " ";
    }
    cout<<endl;
  }

hotel_system::~hotel_system(){
    delete [] room;
}
int hotel_system::getroom(int i){
    int size = i;
    return room[size];
}
double hotel_system::getprice1(){
    return price1;
}
double hotel_system::getprice2(){
    return price2;
}
double hotel_system::getprice3(){
    return price3;
}

//Client class function
client::client(){
    firstName = "x";
    lastName = "x";
    ID = NULL;
    Number = NULL;
    nights = 0;
}
void client::setfirstName(string x){
    firstName = x;
}
void client::setlastName(string x){
    lastName = x;
}
void client::setID(long int x){
    ID=x;
}
void client::setNumber(long int x){
    Number=x;
}
void client::setnights(int x){
    nights=x;
}
string client::getfirstname(){
    return firstName;
}
string client::getlastname(){
    return lastName;
}
int client::getID(){
    return ID;
}
int client::getNumber(){
    return Number;
}
int client::getnights(){
    return nights;
}

//service class function
service::service(){
    roomService = 0;
    publicService = 0;
    poolService = 0;
    pricePool = 20;
    pricePublic = 50;
    priceRoom = 35;
}

    bool service::getroomservice(){
        return roomService;
    }
    bool service::getpoolservice(){
        return poolService;
    }
    bool service::getpublicservice(){
        return publicService;
    }
    double service::getpriceRoom(){
        return priceRoom;
    }
    double service::getpricePool(){
        return pricePool;
    }
    double service::getpricePublic(){
        return pricePublic;
    }
    void service::setroomService(bool x){
        roomService = x;
    }
    void service::setpoolService(bool x){
        poolService = x;
    }
    void service::setpublicService(bool x){
        publicService=x;
    }
