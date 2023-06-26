#include <iostream>
using namespace std;
int CalcularDoble (int num1);
int main()

{int num1,num2;
cout<<"ingrese num1: ";
cin>>num1;
int Doble;
Doble=CalcularDoble (num1);
cout<<Doble<<endl;

return 0;
}

int CalcularDoble (int num1)
{
return num1*2;
}
