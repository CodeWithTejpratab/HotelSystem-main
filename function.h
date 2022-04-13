class hotel_system {
int* room;
public:
hotel_system();
void printroom();
~hotel_system();
};

class client: public hotel_system{
string firstName;
string lastName;
long int ID;
long int Number;
public:
client();
};
