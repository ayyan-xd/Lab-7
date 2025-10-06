#include<iostream>
using namespace std;
int main(){
    int m=3 ,n=3;
    int count=0;
int arr[m][n]={{1,6,0},{0,0,0},{4,0,5}};
for(int i=0 ; i<3 ; i++){
    for(int j=0 ; j<3 ; j++){
        if(arr[i][j]==0){
            count++;
        }
    }
}
    if(count>=(m*n)/2){
        cout<<"matrix is sparse";
        }
        else{
            cout<<"matrix is not sparse";
        }
}
