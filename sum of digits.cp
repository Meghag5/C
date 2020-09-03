#include <iostream>
using namespace std;
int main() {
    cout<<"Name: Megha Gupta"<<endl;
    cout<<"Enrollment Number: 35414802719"<<endl;
    int n,sum=0,rem;
    cin>>n;
    while(n!=0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    cout<<sum;
}
