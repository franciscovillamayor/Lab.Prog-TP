#include <iostream>
using namespace std;
float ConvertirPesos (int dolares);
int main()

{float dolares,  Pesos;
cout<<"ingrese la cantidad de dolares"<<endl;
cin>>dolares;
//int Pesos,int dolares;
Pesos=ConvertirPesos (dolares);
cout<<Pesos<<endl;

return 0;

}

int ConvertirPesos (int dolares)
{
int Pesos=(331.37)*dolares;
return Pesos ;
}

