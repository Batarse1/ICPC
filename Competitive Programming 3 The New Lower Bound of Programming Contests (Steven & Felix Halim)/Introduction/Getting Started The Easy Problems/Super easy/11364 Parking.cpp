#include <iostream>
#include <algorithm>

using namespace std;

void funcion(){
    int n=0;
    int sum=0;
    int estacionamiento=0;
    cin>>n;
    int a[n]={};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort (a,a+n);
    for(int i=1;i<n;i++){
        sum+=(a[i]-a[i-1]);
    }
    estacionamiento=(a[0]+a[n-1])/2;
    sum+=estacionamiento-a[0];
    sum+=a[n-1]-estacionamiento;
    cout<<sum<<endl;
}

int main(){
    int t=0;
    cin>>t;
    for(int i=0;i<t;i++){
        funcion();
    }
    return 0;
}