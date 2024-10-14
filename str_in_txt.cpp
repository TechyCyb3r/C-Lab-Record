#include<iostream>
#include<string>
using namespace std;
int main(){
    string mtext,intext;
    int pos;
    cout<<"Enter the main text: ";
    getline(cin, mtext);
    cout<<"Enter text to insert: ";
    getline(cin, intext);
    cout<<"Enter the position to insert the text: ";
    cin>>pos;
    mtext.insert(pos,intext);
    cout<<"The modified text is: "<<mtext<<endl;
    return 0;
}