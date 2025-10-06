#include<iostream>
using namespace std;

int main(){
    int rows, cols;
    rows=8;
    cols=2;
    double plots[rows][cols]={{150.6,126.9},
                                 {354 , 451.51},
                                 {172.23,75.65},
                                 {73.33,707.17},
                                 {415.15,116.17},
                                 {415.15,116.17},
                                 {415.15,116.17},
                                 {415.15,116.17}};
    cout<<"Plot No Length\tWidth"<<endl;
    for(int i=0;i<rows;i++){
        cout<<i+1<<"\t";
        for(int j=0;j<cols;j++){
            cout<<plots[i][j]<<"\t";
        }
        cout<<endl;
    }                             
    double area_of_plots[rows];
    for(int i=0;i<rows;i++){
        area_of_plots[i]=plots[i][0]*plots[i][1];
        cout<<"Area of plot "<<i+1<<" is: "<<area_of_plots[i]<<endl;
    }
    double highest_area=area_of_plots[0];
    for(int i=1;i<rows;i++){
        if(area_of_plots[i]>highest_area){
            highest_area=area_of_plots[i];
        }
    }
    double highest_area_Index;
    for(int i=0;i<rows;i++){
        if(area_of_plots[i]==highest_area){
            highest_area_Index=i+1;
        }
    }
    cout<<"Highest area is: "<<highest_area<<endl;
    cout<<"Plot number of highest area is: "<<highest_area_Index<<endl;
    return 0;
}