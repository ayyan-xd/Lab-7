#include<iostream>

using namespace std;

int main(){
    double sales[6][4] = {0};
    int emp, prod;
    double amt;
    cout<<"Enter Values in the order Employee Product Amount << (Ctrl+D to end input) : ";
    while(cin >> emp >> prod >> amt){
        sales[prod-1][emp-1] += amt;
    }
    cout << "Product\tEmp1\tEmp2\tEmp3\tEmp4\tTotal" << endl;
    for(int p=0; p<6; p++){
        cout << "P" << (p+1) << "\t";
        double row_sum = 0;
        for(int e=0; e<4; e++){
            cout << sales[p][e] << "\t";
            row_sum += sales[p][e];
        }
        cout << row_sum << endl;
    }
    cout << "Total\t";
    double col_sums[4] = {0};
    for(int e=0; e<4; e++){
        for(int p=0; p<6; p++){
            col_sums[e] += sales[p][e];
        }
        cout << col_sums[e] << "\t";
    }
    double total = 0;
    for(double s : col_sums) total += s;
    cout << total << endl;
}
