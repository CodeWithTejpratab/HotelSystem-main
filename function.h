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
    string getfirstname(){
        return Firstname;
    }
    string getlastname(){
        return Lastname;
    }
    int getdriverlicense(){
        return DriverLicense;
    }
    int getnumber(){
        return Number;
    }
    double getprice(){
        return price;
    }

};

Hotel::Hotel(){
    Firstname = "X";
    Lastname = "Y";
    DriverLicense = 0;
    Number = 0;
    price = 89.78;
}

