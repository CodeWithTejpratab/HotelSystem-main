class hotel_system {
int* room;
double price1, price2, price3;
public:
hotel_system();
void printroom();
~hotel_system();
int getroom(int);
};

class client: public hotel_system{
string firstName;
string lastName;
long int ID;
long int Number;
int nights;
public:
client();
};

class service: public client{
    bool roomService;
    bool poolService;
    bool publicService;
    double priceRoom, pricePool, pricePublic;
    public:
    service();
};
