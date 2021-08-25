// Section 11
// Arrays and functions
#include <iostream>


using namespace std;

void print_array( int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

void print_array(int arr[], size_t size)
{ // const
     for (size_t i{0}; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
   // arr[0] = 50000; // bug
}

// set each array element to value
void set_array(int arr[], size_t size, int value) {
    for (size_t i{0}; i < size; ++i)
        arr[i] = value;
}

int main() {
    int my_scores[5];
    cout << "Enter the elements: ";
    for(int i{}; i<5;i++){
        cin>>my_scores[i];
    }
    
    print_array(my_scores, 5);
    set_array(my_scores, 5, 100);
    print_array(my_scores, 5);
   
    
    cout << endl;
    return 0;
}

