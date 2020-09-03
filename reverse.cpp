#include <iostream>
using namespace std;
int main() {
    cout<<"Name: Megha Gupta"<<endl;
    cout<<"Enrollment Number: 35414802719"<<endl;
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
        
    }
}
