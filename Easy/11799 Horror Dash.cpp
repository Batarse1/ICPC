#include <iostream>

using namespace std;

int main(){
    int T=0;
    int N=0;
    int a=0;
    int max=0;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N;
        for(int j=0;j<N;j++){
            cin>>a;
            if(a>max){
                max=a;
            }
        }
        cout<<"Case "<<i+1<<": "<<max<<endl;
        max=0;
    }
    return 0;
}