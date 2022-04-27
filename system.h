class hotel_system {
int* room;
double price1, price2, price3;
public:
hotel_system();
void printroom();
~hotel_system();
int getroom(int);
double getprice1();
double getprice2();
double getprice3();
};

class client{
string firstName;
string lastName;
long int ID;
long int Number;
int nights;
public:
friend class service;
client();
void setfirstName(string);
void setlastName(string);
void setID(long int);
void setNumber(long int);
void setnights(int);
string getfirstname();
string getlastname();
int getID();
int getNumber();
int getnights();
};

class service: public hotel_system{
    bool roomService;
    bool poolService;
    bool publicService;
    double priceRoom, pricePool, pricePublic;
    public:
    friend class client;
    service();
    bool getroomservice();
    bool getpoolservice();
    bool getpublicservice();
    double getpriceRoom();
    double getpricePool();
    double getpricePublic();
    void setroomService(bool);
    void setpoolService(bool);
    void setpublicService(bool);

};
