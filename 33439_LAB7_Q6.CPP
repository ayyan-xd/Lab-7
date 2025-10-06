#include<iostream>
#include<string>

using namespace std;

int main(){
    string names[5] = {"Ali", "Zuhair", "Faisal", "Maaz", "Anis"};
    cout << "Original: ";
    for(int i=0; i<5; i++) cout << names[i] << " ";
    cout << endl;
 
    string ins[5];
    for(int i=0; i<5; i++) ins[i] = names[i];
    for(int i=1; i<5; i++) {
        string key = ins[i];
        int j = i-1;
        while(j>=0 && ins[j] > key) {
            ins[j+1] = ins[j];
            j--;
        }
        ins[j+1] = key;
    }
    cout << "Insertion sort: ";
    for(int i=0; i<5; i++) cout << ins[i] << " ";
    cout << endl;

    string sel[5];
    for(int i=0; i<5; i++) sel[i] = names[i];
    for(int i=0; i<4; i++) {
        int min_idx = i;
        for(int j=i+1; j<5; j++) {
            if(sel[j] < sel[min_idx]) min_idx = j;
        }
        string temp = sel[i];
        sel[i] = sel[min_idx];
        sel[min_idx] = temp;
    }
    cout << "Selection sort: ";
    for(int i=0; i<5; i++) cout << sel[i] << " ";
    cout << endl;
}
