#include <iostream>
using namespace std;
int bisiesto(int);
int main()
{
   int anio;
   cout<<"Introduce a"<<(char)164<<"o: ";
   cin >> anio;
   if(bisiesto(anio))
      cout << "Bisiesto" << endl;
   else
      cout << "No es bisiesto" << endl;
   system("pause");
}
int bisiesto(int a)  
{
    if(a%4==0 and a%100!=0 or a%400==0)
        return 1;
    else
        return 0;
}


