#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
    int arr[10];
    srand(time(0));
    for(int i = 0; i < 10; ++i) {
        arr[i] = rand() % 100;
        cout << "Random number " << i+1 << ": " << arr[i] << endl;
    }

    char cellNumber[15];
    cellNumber[0] = '0';
    cellNumber[1] = '3';
    for(int i = 2; i < 14; ++i) {
        cellNumber[i] = '0' + (rand() % 10);
    }
    cellNumber[14] = '\0';

    cout << "Random 14digit cell number: " << cellNumber << endl;

    return 0;
}