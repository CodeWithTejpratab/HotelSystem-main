class Hotel
{
private:
    string Firstname;
    string Lastname;
    long int DriverLicense;
    long int Number;
    double price;
public:
    Hotel();
};

Hotel::Hotel(){
    Firstname = "X";
    Lastname = "Y";
    DriverLicense = 0;
    Number = 0;
    price = 89.78;
}

