#include <iostream>

using namespace std;

int main(){
    int n=0, a=0,cont=0,contnumeros=0,contceros=0;
    cin>>n;
    while(n!=0){
        cont++;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a==0){
                contceros++;
            }
            else{
                contnumeros++;
            }
        }
        cout<<"Case "<<cont<<": "<<contnumeros-contceros<<endl;
        contnumeros=0;
        contceros=0;
        cin>>n;
    }
    return 0;
}