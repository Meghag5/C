#include <iostream>
using namespace std;
int main() {
    cout<<"Name: Megha Gupta"<<endl;
    cout<<"Enrollment Number: 35414802719"<<endl;
    int n,sum=0,rem;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++){
        sum=sum+a[i];
        
    }
    cout<<sum;
}
