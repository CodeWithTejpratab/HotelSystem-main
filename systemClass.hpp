#include "Wrapper.hpp"
#define CLASSES

class Service {
    bool roomService[10];
    bool poolService[10];
    bool publicService[10];
    double priceRoomService, pricePool, pricePublicService;

public:
    //friend class client;
    Service();
    bool getRoomService(int);
    bool getPoolService(int);
    bool getPublicService(int);
    double getPriceRoom();
    double getPricePool();
    double getPricePublic();
    void setRoomService(int);
    void setPoolService(int);
    void setPublicService(int);
    void resetService(int);
};

class Hotel_system: public Service{
    bool room[10];
    int roomSize[10]; // 1 bed, 2 bed
    double price1, price2;

public:
    Hotel_system();
    //
    //void printroom();
    //
    //~hotel_system(); //No destructors needed 
    //
    std::array<std::string, 2> getRoomInfo(int); //returns an array of strings size 2
    //
    void setRoom(int);
    //
    void resetRoom(int&);
    //
    double getprice1();
    //
    double getprice2();
    //
    friend class Client;
    //
};
//
//
// linklist of clients
class Client{
    std::string fullname;
    int roomNumber;
    int nights;

public:
    Client* next;
    friend class Hotel_system;
    Client(std::string name, int roomNubmber, int nights);
    void setFullName(std::string);
    void setRoomNumber(int);
    void setnights(int);
    std::string getFullname();
    int getRoomNumber();
    int getnights();
};


