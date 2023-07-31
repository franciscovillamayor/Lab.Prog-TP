#include<iostream>
#include<string>
using namespace std;

string InvertirPalabra (string palabra);

int main()
{   string palabra;
	cout<<"ingrese  una palabra"<<endl;
	getline(cin,palabra);
	cout<<InvertirPalabra(palabra)<<endl;
	return 0;	
}

string InvertirPalabra (string palabra)
{

int i;
string nfrase;
//string f;
for(i =palabra.size()-1;  i>=0; i--)
{
	nfrase +=palabra[i];
}

return nfrase;
}

