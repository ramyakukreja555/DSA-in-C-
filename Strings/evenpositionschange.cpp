#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    string str;
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++){
        if(i%2==0) str[i]='a';
    }
    cout<<str;
}