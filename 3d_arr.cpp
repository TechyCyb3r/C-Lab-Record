#include<iostream>
using namespace std;
int main(){
    int arr[2][2][2];
    for(int i = 0;i<2;i++){
        cout<<"Entering matrix "<<i+1<<endl;
        for(int j=0;j<2;j++){
            cout<<"Enter elements of array in row: "<<j+1<<endl;
            for(int p=0;p<2;p++){
                cin>>arr[i][j][p];
            }
        }
    }
    for(int i = 0;i<2;i++){
        cout<<"Matrix "<<i+1<<endl;
        for(int j=0;j<2;j++){
            for(int p=0;p<2;p++){
                cout<<arr[i][j][p]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}