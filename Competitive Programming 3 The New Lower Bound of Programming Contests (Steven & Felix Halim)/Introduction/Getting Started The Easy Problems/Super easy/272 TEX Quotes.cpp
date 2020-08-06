#include <iostream>
#include <string>

using namespace std;

int main(){
	string word;
	int cont=0;
	while(getline(cin,word)){
		for(int i=0;i<word.length();i++){
			if(word[i]=='"'){
				cont++;
				if(cont%2==1){
					cout<<"``";
				}
				else{
					cout<<"''";
				}

			}
			else{
				cout<<word[i];
			}
		}
		cout<<endl;
	}
	return 0;
}