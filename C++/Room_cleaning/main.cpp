#include <iostream>
using namespace std;

int main()
{
    int no_of_small_rooms;
    int no_of_big_rooms{24};
    const float price_of_small_room = 25;
    const int price_of_big_room = 35;
    float tax = 0.06;
    float cost1, cost;
    cout<<"Number of small rooms = ";
    cin>>no_of_small_rooms;
    cout<<endl;
    cout<<"Number of big rooms = ";
    cin>>no_of_big_rooms;
    cout<<"Price per small room = $25"<<endl;
    cout<<"Price per big room = $35 "<<endl;
    cost1 = (no_of_small_rooms*25)+(no_of_big_rooms*35);
    cost = 0.06*cost1 + cost1;
    cout<<"cost: "<<cost<<endl;
    
	
    
    
    
    
    
    return 0;
}
