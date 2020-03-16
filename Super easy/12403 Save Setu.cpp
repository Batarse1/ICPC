#include <iostream>
#include <string>

using namespace std;

int main(){
    int n=0,sum=0,a=0;
    string opcion=" ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>opcion;
        if(opcion=="donate"){
            cin>>a;
            sum+=a;
        }
        else{
            cout<<sum<<endl;
        }
    }
    return 0;
}