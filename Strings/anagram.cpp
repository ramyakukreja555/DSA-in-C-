#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
     string s;
     getline(cin,s);
     
     string t;
     getline(cin,t);
     sort(s.begin(),s.end());
     sort(t.begin(),t.end());
     bool anagram=true;
     if(s.length()!=t.length()){
        anagram=false;
     }
     else{
     for(int i=0;i<s.length();i++){
        if(s[i]!=t[i]){
            anagram=false;
            break;
        }
     }
    }
     if(anagram){
        cout<<"it is a anagram";
     }
     else{
        cout<<"it is not a anagram";
     }
    }
     // method 2
//      #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s, t;
//     getline(cin, s);
//     getline(cin, t);

//     if(s.length() != t.length()){
//         cout << "Not an anagram";
//         return 0;
//     }

//     for(int i = 0; i < s.length(); i++){
//         bool found = false;

//         for(int j = 0; j < t.length(); j++){
//             if(s[i] == t[j]){
//                 t[j] = '#';   // mark as used
//                 found = true;
//                 break;
//             }
//         }

//         if(!found){
//             cout << "Not an anagram";
//             return 0;
//         }
//     }

//     cout << "Anagram";
// }
// }