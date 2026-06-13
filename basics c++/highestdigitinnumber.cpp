#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your number: "<<endl;
    cin>>num;
    int max=0, rem;
    while(num!=0){
        rem=num%10;
        if(rem>max){
            max=rem;
        } num=num/10;
    } 
    cout<<"The highest digit is:"<<max;
}