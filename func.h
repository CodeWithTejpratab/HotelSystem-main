//hotel_system class function
hotel_system::hotel_system(){
    room = new int[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        room[i] = rand()%3+1;
    }
    price1 = 89.98;
    price2 = 129.77;
    price3 = 169.99;
}
void hotel_system::printroom(){
    for (int i = 0; i < 10; i++)
    {
        cout << room[i]<< " ";
    }
    cout<<endl;
  }

hotel_system::~hotel_system(){
    delete [] room;
}
int hotel_system::getroom(int i){
    int size = i;
    return room[size];
}

//Client class function
client::client(){
    firstName = "x";
    lastName = "x";
    ID = NULL;
    Number = NULL;
}

//service class function
service::service(){
    roomService = 0;
    publicService = 0;
    poolService = 0;
    pricePool = 20;
    pricePublic = 50;
    priceRoom = 35;
}
