#include <iostream>

using namespace std;

int main(){
    int t=0,n=0;
    long r=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        r=n*567;
        r=r/9;
        r=r+7492;
        r=r*235;
        r=r/47;
        r=r-498;
        r/=10;
        if(r<0){
            r*=-1;
        }
        r=r%10;
        cout<<r<<endl;
    }
    return 0;
}