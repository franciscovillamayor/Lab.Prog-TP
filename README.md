#include <iostream>
#include <string>
using namespace std;
int ContarVocales(string frase);
int main(){
     string f;
     cout<<"ingrese una frase: "<<endl;
     getline(cin,f);
     cout<<ContarVocales(f)<<endl;
system("PAUSE");
	
	
	return 0;
}
int ContarVocales(string frase){
int contador=0;
for(int i=0; i<frase.size(); i++){
	if (frase[i]=='a'|| frase[i]=='e'|| frase[i]== 'i'|| frase[i]=='o'|| frase[i]=='u'){
		contador=contador+ 1;
		
	}
}
	return contador;
}
