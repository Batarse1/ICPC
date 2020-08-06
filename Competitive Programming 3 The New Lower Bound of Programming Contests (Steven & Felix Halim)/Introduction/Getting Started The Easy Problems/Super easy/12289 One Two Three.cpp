#include <iostream>
#include <string>

using namespace std;

int main(){
    int n=0;
    string conteo=" ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>conteo;
        if(conteo.size()==5){
            cout<<3<<endl;
        }
        else if((conteo.at(0)=='t' and conteo.at(1)=='w') or (conteo.at(0)=='t' and conteo.at(2)=='o') or (conteo.at(2)=='o' and conteo.at(1)=='w') ){
            cout<<2<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    return 0;
}