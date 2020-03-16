#include <iostream>

using namespace std;

int main(){
    int T=0,N=0,a=0;
    long summile=0,sumjuice=0;
    cin>>T;
    for(int i=0;i<T;i++){
        summile=0;
        sumjuice=0;
        cin>>N;
        for(int j=0;j<N;j++){
            cin>>a;
            summile+=((a/30)+1)*10;
            sumjuice+=((a/60)+1)*15;
        }
        if(summile==sumjuice){
            cout<<"Case "<<i+1<<": Mile Juice "<<summile<<endl;
        }
        else if(summile<sumjuice){
            cout<<"Case "<<i+1<<": Mile "<<summile<<endl;
        }
        else{
            cout<<"Case "<<i+1<<": Juice "<<sumjuice<<endl;
        }
    }
    return 0;
}