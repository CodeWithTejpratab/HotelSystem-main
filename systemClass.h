#include "wrapper.hpp"
#define CLASSES

class Hotel_system: public Service{
    bool room[10];
    int roomSize[10]; // 1 bed, 2 bed
    double price1, price2;

public:
    Hotel_system();
    //void printroom();
    //~hotel_system(); //No destructors needed 
    std::array<std::string, 2> getRoomInfo(int&);
    void resetRoom(int&);
    double getprice1();
    double getprice2();
    friend class Client;
};

class Client{
    std::string firstName;
    std::string lastName;
    int roomNumber;
    int nights;

public:
    friend class Hotel_system;
    Client();
    void setfirstName(std::string);
    void setlastName(std::string);
    void setRoomNumber(long int);
    void setnights(int);
    std::string getfirstname();
    std::string getlastname();
    int getRoomNumber();
    int getnights();
};

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
};
