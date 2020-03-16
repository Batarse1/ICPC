#include <iostream>
#include <string>

using namespace std;

int main(){
	int cases=0;
	int contM=0;
	int contF=0;
	int cont=0;
	string piece="";
	cin>>cases;
	cin.clear();cin.ignore(1000,'\n');
	for(int i=0;i<cases;i++){
		contM=0;
		contF=0;
		getline(cin,piece);
		for(int j=0;j<piece.size();j++){
			if(piece.at(j)=='M'){
				contM++;
			}
			else if(piece.at(j)=='F'){
				contF++;
			}
		}
		if(contM==contF and contM!=1){
			cout<<"LOOP"<<endl;
		}
		else{
			cout<<"NO LOOP"<<endl;
		}
	}
	return 0;
}