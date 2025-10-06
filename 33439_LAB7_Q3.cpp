#include<iostream>
using namespace std;
int main(){
    int row, col, max;
    cout<<"enter number of rows and columns : ";
    cin>>row>>col;
    int arr[row][col];
    cout<<"enter matrix elements : ";
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
        cin>>arr[i][j];
    }
}
        for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
   max=arr[0][0];
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    cout<<"maximum element is : "<<max;
}
