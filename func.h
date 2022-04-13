hotel_system::hotel_system(){
    room = new int[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        room[i] = rand()%3+1;
    }
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