#include "system_func.h"
#ifndef CLASSES
#include "system.h"
#endif

service validate();
service validate(){
service* x;
string fname, lname;
long int ID, Number;
cout << "Enter you first name: ";
cin>>fname;
cout << "Enter you last name: ";
cin>>lname;
cout<<"Enter your ID number: ";
cin>>ID;
cout<<"Enter your phone number: ";
cin>>Number;
x.setfirstName(fname);
x.setlastName(lname);
x.setID(ID);
x.setNumber(Number);
cout<<endl;
return x;
}

void createclient(service&, int&);
void createclient(service& x, int& user){
int counter = 0;
*x = new service[10];
if (user==1){
x[counter]=validate();
counter++;
}
}


void bookroom(service&, int&);
void bookroom(service& hotel, int& user){
    int roomsize;
    int loop = 0;
    int night;
    cout << "\n\nSeclect the number of beds"<<endl<<"*note*- We only have rooms of max 3 beds"<<endl;
    cout << "Enter 1 = 1 bedroom"<<endl<< "Enter 2 = 2 bedroom"<<endl<< "Enter 3 = 3 bedroom"<<endl;
    cout << "Input: ";
    cin >> roomsize;
    int input;
    char cbooked;
    while (loop!=1){
    if (roomsize == 1){
        loop =1;
        cout<<endl<<"Showing aviable rooms with 1 bedroom"<<endl;
         for (int i = 0; i < 10; i++)
        {
            if(hotel.getroom(i)==1){
            cout << "Room "<<i+1<<" -Number of beds: "<<hotel.getroom(i)<<endl;
            }
        }
        cout << "Select the room you would like to book"<<endl;
        cout << "input: ";
        cin >> input;
        cout << "How many nights will you be staying: ";
        cin >> night;
        hotel.setnights(night);
        cout <<"\n\nRoom " <<input<<" -Number of beds: "<<hotel.getroom(input-1)<<endl;
        cout << "Cost: $"<< hotel.getnights()*hotel.getprice1()<<" for "<<night<<" Nights\ny"<<endl;
        createclient(hotel, user);
        cout << "\nwould you like to confrom youe selection Y/N"<<endl<<"Input: ";
        cin >> cbooked;
        if (cbooked == 'Y' || cbooked =='y'){
        cout<<"Booked sucessful"<<endl;
        return bookroom(hotel, user);
        }
        else if(cbooked == 'N' || cbooked == 'n'){
        cout<<"Canceled"<<endl;
        return bookroom(hotel, user);
        }
        else {
        cout << "error, try again"<<endl;
        cout << "would you like to confrom youe selection Y/N"<<endl<<"Input: ";
        cin >> cbooked;
        }
        break;
    }
    else if(roomsize == 2){
        loop =1;
        cout<<endl<<"Showing aviable rooms with 2 bedroom"<<endl;
         for (int i = 0; i < 10; i++)
        {
            if(hotel.getroom(i)==2){
            cout << "Room "<<i+1<<" -Number of beds: "<<hotel.getroom(i)<<endl;
            }
        }
        
        cout << "Select the room you would like to book"<<endl;
        cout << "input: ";
        cin >> input;
        cout << "How many nights will you be staying: ";
        cin >> night;
        hotel.setnights(night);
        cout <<"Room " <<input<<" -Number of beds: "<<hotel.getroom(input-1)<<endl;
        cout << "Cost: $"<< hotel.getnights()*hotel.getprice1()<<" for "<<night<<" Nights"<<endl;
        createclient(hotel, user);
        cout << "would you like to confrom youe selection Y/N"<<endl<<"Input: ";
        cin >> cbooked;
        if (cbooked == 'Y' || cbooked =='y'){
        cout<<"Booked sucessful"<<endl;
        return bookroom(hotel, user);
        }
        else if(cbooked == 'N' || cbooked == 'n'){
        cout<<"Canceled"<<endl;
        return bookroom(hotel, user);
        }
        else {
        cout << "error, try again"<<endl;
        cout << "would you like to confrom youe selection Y/N"<<endl<<"Input: ";
        cin >> cbooked;
        }
        break;
    }
    else if (roomsize == 3){
        loop =1;
        cout<<endl<<"Showing aviable rooms with 3 bedroom"<<endl;
         for (int i = 0; i < 10; i++)
        {
            if(hotel.getroom(i)==3){
            cout << "Room "<<i+1<<" -Number of beds: "<<hotel.getroom(i)<<endl;
            }
        }
        cout << "Select the room you would like to book"<<endl;
        cout << "input: ";
        cin >> input;
        cout << "How many nights will you be staying: ";
        cin >> night;
        hotel.setnights(night);
        cout <<"Room " <<input<<" -Number of beds: "<<hotel.getroom(input-1)<<endl;
        cout << "Cost: $"<< hotel.getnights()*hotel.getprice1()<<" for "<<night<<" Nights"<<endl;
        createclient(hotel, user);
        cout << "would you like to confrom youe selection Y/N"<<endl<<"Input: ";
        cin >> cbooked;
        if (cbooked == 'Y' || cbooked =='y'){
        cout<<"Booked sucessful"<<endl;
        return bookroom(hotel, user);
        }
        else if(cbooked == 'N' || cbooked == 'n'){
        cout<<"Canceled"<<endl;
        return bookroom(hotel, user);
        }
        else {
        cout << "error, try again"<<endl;
        cout << "would you like to confrom youe selection Y/N"<<endl<<"Input: ";
        cin >> cbooked;
        }
        break;
    }
    else {
        cout << "Unavailable, Try again"<<endl;
        cout << "Input: ";
        cin >> roomsize;
    }
 }
}


void checkout(service&);
void checkout(service& hotel){
int roomNumber;
long int phone;
cout<<"what is your room number: ";
cin>>roomNumber;
cout<<"what is your phone number: ";
cin>>phone;
if((roomNumber==hotel.getroom(roomNumber))&&(phone==hotel.getNumber())){
cout<<"checked-out sucessful"<<endl;
}
else
cout << "error, try again"<<endl;
return checkout(hotel);
}
