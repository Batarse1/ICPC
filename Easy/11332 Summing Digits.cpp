#include <iostream>

using namespace std;

int main(){
    long n=0;
    cin>>n;
    while(n!=0){
        if(n%9==0){
            cout<<9<<endl;
        }
        else{
            cout<<n%9<<endl;
        }
        cin>>n;
    }
    return 0;
}
