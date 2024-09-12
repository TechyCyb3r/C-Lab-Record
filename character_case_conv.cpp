#include<iostream>
using namespace std;
int main(){
    char c,get;
    cout<<"Enter any character: ";
    cin>>get;
    if(isupper(get)){
        c = tolower(get);
       cout<<"Lower Case Character: "<<(c); 
    }else{
        c = toupper(get);
        cout<<"Upper case Character: "<<(c);
    }
    return 0;
}