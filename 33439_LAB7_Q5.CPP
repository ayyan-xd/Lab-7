#include<iostream>

using namespace std;
int main(){
    int size;
    cout<<"Enter The Size of Square Matrix :";
    cin>>size;
    int arr[size][size];
    int transpose[size][size];

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<"Enter Value for arr ["<<i<<"]["<<j<<"] : ";
            cin>>arr[i][j];
            transpose[j][i] = arr[i][j];
            
        }
    }
    cout<<"Original Matrix : "<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
           cout<<arr[i][j]<<'\t';
        }
        cout<<endl;
    }
    cout<<"Transpose Matrix :"<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
           cout<<transpose[i][j]<<'\t';
        }
        cout<<endl;
    }
    bool symetric=false;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i][j]!=transpose[i][j]){
                symetric=false;
                break;
            }
            else{
                symetric=true;
            }
        }
        if(!symetric){
            break;
        }
    }
    
    if(symetric){
        cout<<"Matrix is Symmetric"<<endl;
        
    }
    else{
        cout<<"Matrix is not Symmetric"<<endl;
        
    }

    return 0;
}