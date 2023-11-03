#include <iostream>
#include <vector>

using namespace std;

int print_array(string arrayName, int size);

int main() {
    cout << "Enter the size of array: ";
    int arraySize;
    cin >> arraySize;
    
    int count=0;  //iterate in loop
    int insert;  //user input
    vector<int> arrayName;

    //add user input to vector
    while (count<arraySize) {
        cout << "Enter value to insert into array: ";
        cin >> insert;
        arrayName.push_back(insert);

        count++;
    }

    cout << "[";
    for (int i=0; i<arrayName.size(); i++) {
        cout << arrayName[i] << ", ";
    }
    cout << "]";
//print_array(arraySize);
    return 0;
}


int print_array(int size) {
    
    int count=0;  //iterate in loop
    int insert;  //user input
    vector<int> arrayName;

    //add user input to vector
    while (count<size) {
        cout << "Enter value to insert into array: ";
        cin >> insert;
        arrayName.push_back(insert);

        count++;
    }

    cout << "[";
    for (int i=0; i<arrayName.size(); i++) {
        cout << arrayName[i] << ", ";
    }
    cout << "]";
}