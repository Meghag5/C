#include<bits/stdc++.h>
using namespace std;
void swap(char *a,char *b){
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void printString(char str[],int l,int h){
    char temp;
    if(l==h){
        cout<<str<<endl;
        return;
    }
    int mid=(l+h)/2;
    swap(str[l],str[mid]);
    printString(str,l+1,h);
    
}

int main(){
    int t;  //number of test cases
    cin>>t;

    while(t--){
        int n,l=0;    //length of string
        cin>>n;
        char str[n+1];
        cin>>str;
    printString(str,l,n-1);
    }
}

//input=abcde
//output=cadbe
