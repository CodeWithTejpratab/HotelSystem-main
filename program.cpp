void program(){
    cout<<endl;
    cout<<"Welcome to Booking.com"<<endl;
    int roomsize;
    int stay;
    int loop = 0;
    int counter=0;
    int const room[10]={1,1,1,2,2,2,3,3,3,1};
    cout << "Seclect the number of beds"<<endl<<"*note*- We only have rooms of max 3 beds"<<endl;
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
            if(*(room+i)==1){
            cout << "Room "<<i+1<<" -Number of beds: "<<room[i]<<endl;
            counter++;
            }
        }
        cout << "Select the room you would like to book"<<endl;
        cout << "input: ";
        cin >> input;
        cout << "How many nights will you be staying: ";
        cin >> stay;
        cout <<"Room " <<input<<" -Number of beds: "<<room[input-1]<<endl;
        cout << "Cost: "<< stay*89.78<<" for "<<stay<<" Nights"<<endl;
        cout << "would you like to confrom youe selection Y/N"<<endl<<"Input: ";
        cin >> cbooked;
        if (cbooked == 'Y' || cbooked =='y'){
        cout<<"Booked sucessful"<<endl;
        }
        else if(cbooked == 'N' || cbooked == 'n'){
        cout<<"Canceled"<<endl;
        return program();
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
            if(*(room+i)==2){
            cout << "Room "<<i+1<<" -Number of beds: "<<room[i]<<endl;
            counter++;
            }
        }  
        cout << "Select the room you would like to book"<<endl;
        cout << "input: ";
        cin >> input;
        cout <<"Room " <<input<<" -Number of beds: "<<room[input-1]<<endl;
        cout << "would you like to confrom youe selection Y/N"<<endl<<"Input: ";
        cin >> cbooked;
        if (cbooked == 'Y' || cbooked =='y'){
        cout<<"Booked sucessful"<<endl;
        }
        else if(cbooked == 'N' || cbooked == 'n'){
        cout<<"Canceled"<<endl;
        return program();
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
            if(*(room+i)==3){
            cout << "Room "<<i+1<<" -Number of beds: "<<room[i]<<endl;
            counter++;
            }
        }
        cout << "Select the room you would like to book"<<endl;
        cout << "input: ";
        cin >> input;
        cout <<"Room " <<input<<" -Number of beds: "<<room[input-1]<<endl;
        cout << "would you like to confrom youe selection Y/N"<<endl<<"Input: ";
        cin >> cbooked;
        if (cbooked == 'Y' || cbooked =='y'){
        cout<<"Booked sucessful"<<endl;
        }
        else if(cbooked == 'N' || cbooked == 'n'){
        cout<<"Canceled"<<endl;
        return program();
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
    cout<<endl;
}