#include <iostream>
#include <string>

using namespace std;

int main(){
    int t=0,a=0,b=0,c=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        if((a>b and a<c) or (a>c and a<b)){
            cout<<"Case "<<i+1<<": "<<a<<endl;
        }
        else if((b>a and b<c) or (b>c and b<a)){
            cout<<"Case "<<i+1<<": "<<b<<endl;
        }
        else if((c>a and c<b) or (c>b and c<a)){
            cout<<"Case "<<i+1<<": "<<c<<endl;
        }
    }
    return 0;
}