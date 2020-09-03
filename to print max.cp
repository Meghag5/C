#include <iostream>
using namespace std;
int main() {
    cout<<"Name: Megha Gupta"<<endl;
    cout<<"Enrollment Number: 35414802719"<<endl;
    int n,max,rem;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    max=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
        
    }
    cout<<max;
}
