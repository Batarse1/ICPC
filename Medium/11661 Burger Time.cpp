#include <iostream>
#include <vector>

using namespace std;

int main(){
    int res=0;
    int aux=0;
    long L=0;
    string S="";
    vector<int> d;
    vector<int> r;
    vector<int> z;
    while(true){
        res=0;
        cin>>L;
        if(L==0){
            break;
        }
        cin>>S;
        for(int i=0;i<L;i++){
            if(S.at(i)=='Z'){
                z.push_back(i);
            }
            else if(S.at(i)=='D'){
                d.push_back(i);
            }
            else if(S.at(i)=='R'){
                r.push_back(i);
            }
        }
        if(z.empty()){
            res=L+1;
            for(int i=0;i<d.size();i++){
                for(int j=0;j<r.size();j++){
                    aux=d.at(i)-r.at(j);
                    if(aux<0){
                        aux=aux*-1;
                    }
                    if(aux<res){
                        res=aux;
                    }
                }
            }
        }
        z.clear();
        r.clear();
        d.clear();
        cout<<res<<endl;
    }
    return 0;
}