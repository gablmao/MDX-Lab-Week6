#include <iostream>
#include <array>


using namespace std;

int swap(int pos1, int pos2);

int main() {

    int pos1=0;
    int pos2=0;

    cout << "Enter two positions to swap: ";
    cin >> pos1 >> pos2;

    swapPos(pos1, pos2);

    return 0;
}

int swapPos(int pos1, int pos2) {
    int numbers[] = {1, 2, 3};
    int temp = numbers[pos2];
    numbers[pos2] = numbers[pos1];
    numbers[pos1] = numbers[temp];

    for (int i=0; i<sizeof(numbers); i++){
        return numbers[i];
    }
}