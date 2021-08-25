// Section 9
// Nested Loops - Histogram

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int num_items{};

    cout << "How many data items do you have? ";
    cin >> num_items;

    vector<int> data {};
    for(int i{}; i<num_items;i++)
    {
        int data_items{};
        cin>>data_items;
        data.push_back(data_items);
        
    }
    
    for(auto a : data){        
        for(int j{};j<a;j++){
            if(j%2 ==0)
                cout<<"-";              // for my reference
            else
                cout<<"*";
        }                      
        
        cout<<endl;
    }              

    cout<<endl;
    return 0;

    }
    
    
    
    
    
    
    
    
    
    
    
    
//
//    for (int i{1}; i<= num_items; ++i) {
//        int data_item{};
//        cout << "Enter data item " << i << ": ";
//        cin >> data_item;
//        data.push_back(data_item);
//    }
//
//    cout << "\nDisplaying Histogram" << endl;
//    for (auto val: data) {
//        for (int i{1} ; i<=val; ++i) {
//            if (i % 5 == 0)
//                cout << "*";
//            else
//                cout << "-";
//        }
//        cout << endl;
//    }
//
//
//    cout <<  endl;
//    return 0;
//}

