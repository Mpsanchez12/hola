#include <iostream>
using namespace std;

int main (){
int numero;
cout<<"Ingresar numero"<<endl;
cin>>numero;
if(numero<0){
cout<<"Ingrese un numero positivo"<<endl;
}
for(int i=1;i<=10;i++){
 cout<<numero<<"x"<<i<<"="<<numero*i<<endl;
}






return 0;

}
