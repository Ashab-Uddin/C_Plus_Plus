#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character: ";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"Lower Case";
    }
    else{
        cout<<"Upper Case";
    }

    return 0;
}