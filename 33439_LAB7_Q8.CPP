#include<iostream>

using namespace std;
int main(){
    double table[5][9];
    int j=1;
    
    for(int i=0;i<5;i++){
        cout<<"enter Student ID : ";
        cin>>table[i][0];
        cout<<"enter marks of 1st course : ";
        cin>>table[i][j];
        cout<<"enter marks of 2nd course : ";
        cin>>table[i][j+1];
        cout<<"enter marks of 3rd course : ";
        cin>>table[i][j+2];
        cout<<"enter marks of 4th course : ";
        cin>>table[i][j+3];
        cout<<"enter marks of 5th course : ";
        cin>>table[i][j+4];
        table[i][6]=500;
        table[i][7]=table[i][1]+table[i][2]+table[i][3]+table[i][4]+table[i][5];
        table[i][8]=table[i][7]/500*100;
        }
    cout<<"Std id\tC1\tC2\tC3\tC4\tC5\tTotal\tObtained\tPercentage : \n";
    for(int i=0;i<5;i++){
        for(int j=0;j<9;j++){
            cout<<table[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0 ;
}