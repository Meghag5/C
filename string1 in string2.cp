#include <bits/stdc++.h>
using namespace std;
int main() {
    string str1="hackerrank";
    string str2;
    cin>>str2;
    int j=0;
    for(int i=0;i<str2.length();i++){
        
            if(str2[i]==str1[j]){
                j++;
            }
        }
    
    if(j==str1.length()){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
