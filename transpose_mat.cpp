#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    for(int i = 0;i<3;i++){
        cout<<"Enter elements of array in row: "<<i+1<<endl;
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    } cout<<"\nTranspose of this matrix"<<endl;for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}