#include <iostream>
#include <vector>

using namespace std;

int main(){
    long A=0;
    long C=0;
    long aux=0;
    long res=0;
    long dif=0;
    vector<long>cheight;
    while(true){
        res=0;
        cheight.clear();
        cin>>A;
        if(A==0){
            break;
        }
        cin>>C;
        if(C==0){
            break;
        }
        for(long i=0;i<C;i++){
            cin>>aux;
            cheight.push_back(aux);
        }
        for(long i=1;i<C;i++){
            if(cheight.at(i-1)<cheight.at(i)){
                dif=cheight.at(i)-cheight.at(i-1);
                res+=dif;
            }
        }
        if(cheight.at(C-1)<A){
            dif=A-cheight.at(C-1);
            res+=dif;
        }
        cout<<res<<endl;
    }
    return 0;
}