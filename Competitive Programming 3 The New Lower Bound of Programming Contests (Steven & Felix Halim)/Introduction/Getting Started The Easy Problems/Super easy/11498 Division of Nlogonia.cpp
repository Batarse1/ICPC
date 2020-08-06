#include <iostream>

using namespace std;

int main(){
    int k=0;
    long n=0;
    long m=0;
    long x=0;
    long y=0;
    cin>>k;
    while(k!=0){
        cin>>n>>m;
        for(int i=0;i<k;i++){
            cin>>x>>y;
            if(x<n and y>m){
                cout<<"NO"<<endl;
            }
            else if(x>n and y>m){
                cout<<"NE"<<endl;
            }
            else if(x>n and y<m){
                cout<<"SE"<<endl;
            }
            else if(x<n and y<m){
                cout<<"SO"<<endl;
            }
            else{
                cout<<"divisa"<<endl;
            }
        }
        cin>>k;
    }
    return 0;
}