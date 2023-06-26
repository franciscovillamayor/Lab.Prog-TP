#include <iostream>
using namespace std;
float CalcularPeso (float peso);
int main()

{ int Luna, tierra;
cout<<"ingrese su peso"<<endl;
cin>>tierra;
Luna=CalcularPeso (tierra);
cout<<"su peso en la luna es: "<<Luna<<endl;

return 0;

}


float CalcularPeso (float peso)
{
float Luna = (peso/9.81) * 1.622;
return Luna;

}



