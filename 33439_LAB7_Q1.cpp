#include<iostream>
using namespace std;
int main(){
    int size, sum=0;
    double avg;
    cout<<"enter size of array : ";
    cin>>size;
    int arr[size];
    cout<<"\n"<<"enter values to be stored in array : ";
    for(int i=0 ; i<size ; i++){
        cin>>arr[i];
    }
    for(int i=0 ; i<size; i++){
        sum=sum+arr[i];
    }
        cout<<"\n"<<"Sum is : "<<sum;
    for(int i=0 ; i<size ; i++){
        avg=sum/size;
    }    
    cout<<"\n"<<"average is  : "<<avg;
}
