#include <iostream>

using namespace std;

int main(){
    int T=0;
    int N=0;
    int high_jumps=0;
    int low_jumps=0;
    cin>>T;
    for(int i=0;i<T;i++){
        high_jumps=0;
        low_jumps=0;
        cin>>N;
        int height_of_walls[N]={};
        for(int j=0;j<N;j++){
            cin>>height_of_walls[j];
        }
        if(N>1){
            for(int j=1;j<N;j++){
                if(height_of_walls[j]>height_of_walls[j-1]){
                    high_jumps++;
                }
                else if(height_of_walls[j]<height_of_walls[j-1]){
                    low_jumps++;
                }
            }
        }
        cout<<"Case "<<i+1<<": "<<high_jumps<<" "<<low_jumps<<endl;
    }
    return 0;
}