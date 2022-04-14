#include "system_func.h"
void validate(service&);
void validate(service& x){
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
}