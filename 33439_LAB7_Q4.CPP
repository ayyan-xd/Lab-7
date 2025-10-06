#include<iostream>

using namespace std;
int main(){
    int size=5;
    double std1_marks[size]={60,75,85,95,49};
    double std2_marks[size]={59,70,65,45,39};
    double std1_mean;
    double std2_mean;
    for(int i=0;i<size;i++){
        std1_mean+=std1_marks[i];
        std2_mean+=std2_marks[i];
    }
    std1_mean=std1_mean/size;
    std2_mean=std2_mean/size;
    double covariance;
    for(int i=0;i<size;i++){
        covariance+=(std1_marks[i]-std1_mean)*(std2_marks[i]-std2_mean);
    }
    covariance=covariance/(size-1);
    cout<<"Covariance: "<<covariance<<endl;
    if(covariance>0){
        cout<<"Positive covariance"<<endl;
        cout<<"The two students have a positive relationship in their marks"<<endl;
        cout<<"If one student scores high, the other is likely to score high as well"<<endl;
        
    }
    else{
        cout<<"Negative covariance"<<endl;
        cout<<"The two students have a negative relationship in their marks"<<endl;
        cout<<"If one student scores high, the other is likely to score low"<<endl;
        
    }

    return 0;
}