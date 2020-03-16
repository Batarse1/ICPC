#include <iostream>

using namespace std;

int main(){
    int T=0;
    int max=0;
    cin>>T;
    for(int i=0;i<T;i++){
        max=0;
        string URL[10]={};
        int relevance[10]={};
        for(int j=0;j<10;j++){
            cin>>URL[j];
            cin>>relevance[j];
            if(relevance[j]>max){
                max=relevance[j];
            }
        }
        cout<<"Case #"<<i+1<<":"<<endl;
        for(int j=0;j<10;j++){
            if(relevance[j]==max){
                cout<<URL[j]<<endl;
            }
        }
    }
    return 0;
}