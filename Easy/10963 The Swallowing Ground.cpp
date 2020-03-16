#include <iostream>

using namespace std;

int main(){
    int n=0;
    int w=0;
    int a=0;
    int b=0;
    int range=0;
    bool output=true;
    cin>>n;
    for(int i=0;i<n;i++){
        output=true;
        cin>>w;
        cin>>a>>b;
        range=a-b;
        for(int j=0;j<w-1;j++){
            cin>>a>>b;
            if(a-b!=range){
                output=false;
            }
        }
        if(output==true){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
        
        if(i<n-1){
            cout<<endl;
        }
    }
    return 0;
}