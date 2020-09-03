#include <iostream>
using namespace std;
int main() {
    int n,max,min,rem;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    max=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }}
    min=a[0];
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }    
    }
    cout<<max<<endl;
    cout<<min<<endl;
}
