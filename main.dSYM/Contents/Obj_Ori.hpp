class Hotel
{
private:
    string Firstname;
    string Lastname;
    long int DriverLicense;
    long int Number;
    int room[10];
    double price;
public:
    Hotel();
    ~Hotel();
};

Hotel::Hotel()
{
    Firstname = "X";
    Lastname = "Y";
    DriverLicense = 0;
    Number = 0;
    price = 89.78;
}

Hotel::~Hotel()
{
}