#include <iostream>

using namespace std;

int main(){
    int m=0,n=0,c=0;
    int operation=0;
    int sum=0;
    int max=0;
    int cont=0;
    bool blow=false;
    while(cin>>n>>m>>c){
        if(n==0 and m==0 and c==0){
            break;
        }
        int consumption[n]={};
        sum=0;
        max=0;
        blow=false;
        cont++;
        for(int i=0;i<n;i++){
            cin>>consumption[i];
        }
        for(int i=0;i<m;i++){
            cin>>operation;
            sum+=consumption[operation-1];
            consumption[operation-1]*=-1;
            if(sum>max){
                max=sum;
            }
            if(sum>c){
                blow=true;
            }
        }
        if(blow==true){
            cout<<"Sequence "<<cont<<endl;
            cout<<"Fuse was blown."<<endl;
        }
        else{
            cout<<"Sequence "<<cont<<endl;
            cout<<"Fuse was not blown."<<endl;
            cout<<"Maximal power consumption was "<<max<<" amperes."<<endl;
        }
        cout<<endl;
    }
    return 0;
}