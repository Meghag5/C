#include<bits/stdc++.h>
using namespace std;
void printString(char str[],char str1[],int i,int j,int n){
    if(i>n){
        str1[j]='\0';
        return;
    }
    str1[j]=str[i];
    printString(str,str1,i+1,j+1,n);
    if(str[i]==str[i+1]){
        str1[j]=str[i+1];
    printString(str,str1,i+1,j,n);
    }
}
int main() {
    char str[20];
    cin>>str;
    char str1[20];
     int n=strlen(str);
    printString(str,str1,0,0,n-1);
    cout<<str1<<endl;
    return 0;
}
