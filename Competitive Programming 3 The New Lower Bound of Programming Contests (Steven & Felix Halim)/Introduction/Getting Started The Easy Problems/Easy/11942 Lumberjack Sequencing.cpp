#include <iostream>

using namespace std;

int main(){
    int N=0;
    int static a[10];
    bool ascendent=true;
    bool descendent=true;
    cin>>N;
    bool ans[N]={};
    for(int i=0;i<N;i++){
        ascendent=true;
        descendent=true;
        for(int j=0;j<10;j++){
            cin>>a[j];
        }
        //ascendent
        for(int j=1;j<10;j++){
            if(a[j]<a[j-1]){
                ascendent=false;
            }
        }
        //descendent
        for(int j=0;j<9;j++){
            if(a[j]<a[j+1]){
                descendent=false;
            }
        }
        if(ascendent==true or descendent==true){
            ans[i]=true;
        }
        else{
            ans[i]=false;
        }
    }
    cout<<"Lumberjacks:"<<endl;
    for(int i=0;i<N;i++){
        if(ans[i]==true){
            cout<<"Ordered"<<endl;
        }
        else{
            cout<<"Unordered"<<endl;
        }
    }
    return 0;
}