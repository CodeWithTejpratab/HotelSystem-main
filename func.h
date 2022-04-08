void menu();
void menu(){
    int roomsize;
    int loop = 0;
    int room[10]={1,1,1,2,2,2,3,3,3,1};
    cout << "Seclect the number of beds"<<endl<<"*note*- We only have rooms of max 3 beds"<<endl;
    cout << "Enter 1 = 1 bedroom"<<endl<< "Enter 2 = 2 bedroom"<<endl<< "Enter 1 = 1 bedroom"<<endl;
    cout << "Input: ";
    cin >> roomsize;
    while (loop!=1){
    if (roomsize == 1){
        loop =1;
        cout<<"showing aviable rooms with 1 bedroom"<<endl;
         for (int i = 0; i < 10; i++)
        {
            cout << "Room "<<i+1<<" -Number of beds: "<<room[i]<<endl;
        }
        break;
    }
    else if(roomsize == 2){
        loop =1;
        cout<<"showing aviable rooms with 2 bedroom"<<endl; 
        for (int i = 0; i < 10; i++)
        {
            cout << "Room "<<i+1<<" -Number of beds: "<<room[i]<<endl;
        }  
        break;
    }
    else if (roomsize == 3){
        loop =1;
        cout<<"showing aviable rooms with 3 bedroom"<<endl;
        for (int i = 0; i < 10; i++)
        {
            cout << "Room "<<i+1<<" -Number of beds: "<<room[i]<<endl;
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