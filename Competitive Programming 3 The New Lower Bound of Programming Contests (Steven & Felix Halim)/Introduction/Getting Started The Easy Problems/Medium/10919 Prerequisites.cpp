#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    bool decision=true;
    int k=0;
    int m=0;
    int c=0;
    int r=0;
    int cont=0;
    long category_course=0;
    while(true){
        decision=true;
        cin>>k;
        long courses[k];
        if(k==0){
            break;
        }
        cin>>m;
        for(int i=0;i<k;i++){
            cin>>courses[i];
        }
        sort(courses,courses+k);
        for(int i=0;i<m;i++){
            cont=0;
            cin>>c>>r;
            for(int j=0;j<c;j++){
                cin>>category_course;
                for(int l=0;l<k;l++){
                    if(category_course==courses[l]){
                        cont++;
                    }
                }
            }
            if(cont<r){
                decision=false;
            }
        }
        if(decision==true){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}