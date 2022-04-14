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

class client: public hotel_system{
string firstName;
string lastName;
long int ID;
long int Number;
int nights;
public:
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

class service: public client{
    bool roomService;
    bool poolService;
    bool publicService;
    double priceRoom, pricePool, pricePublic;
    public:
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
