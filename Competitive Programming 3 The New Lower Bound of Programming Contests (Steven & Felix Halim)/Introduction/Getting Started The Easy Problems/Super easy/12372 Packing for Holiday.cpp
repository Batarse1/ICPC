#include <iostream>

using namespace std;

int main(){
    int n=0,a=0,b=0,c=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a<21 and b<21 and c<21){
            cout<<"Case "<<i+1<<": good"<<endl;
        }
        else{
            cout<<"Case "<<i+1<<": bad"<<endl;
        }
    }
    return 0;
}