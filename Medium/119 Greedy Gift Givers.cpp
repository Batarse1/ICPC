#include <iostream>
#include <iostream>
#include <queue>

using namespace std;

struct person{
    string name;
    int number;
    person(){
        name="";
        number=0;
    }
};

int main(){
    int n=0;
    bool simon=false;
    string giver;
    int spent=0;
    int presents=0;
    int aux=0;
    int auxspent=0;
    int number_of_presents=0;
    person a;
    queue <person> cola;
    while(cin>>n){
        number_of_presents=0;
        person arreglo[n];
        for(int i=0;i<n;i++){
            cin>>arreglo[i].name;
            arreglo[i].number=0;
        }
        number_of_presents+=n;
        for(int i=0;i<n;i++){
            aux=0;
            auxspent=0;
            cin>>giver;
            cin>>spent;
            cin>>presents;
            a.name=giver;
            if(presents!=0){
                aux=spent/presents;
                auxspent=spent%presents;
            }
            else{
                spent=0;
            }
            a.number=-spent+auxspent;
            cola.push(a);
            number_of_presents+=presents;
            if(presents!=0){
                for(int j=0;j<presents;j++){
                    cin>>a.name;
                    a.number=aux;
                    cola.push(a);
                }
            }
        }
        person numeros[number_of_presents];
        for(int i=0;i<number_of_presents;i++){
            numeros[i].name=cola.front().name;
            numeros[i].number=cola.front().number;
            cola.pop();
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<number_of_presents;j++){
                if(arreglo[i].name==numeros[j].name){
                    arreglo[i].number+=numeros[j].number;
                }
            }
        }
        if(simon==true){
            cout<<endl;
        }
        for(int i=0;i<n;i++){
            cout<<arreglo[i].name<<" "<<arreglo[i].number<<endl;
        }
        simon=true;
    }
    return 0;
}