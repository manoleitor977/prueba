#include <iostream>

using namespace std;

class clasecita{
    
     string nombre;

     public: 
     string getName(){
         return nombre;
     }
     clasecita(string nombreinicial){
         setName(nombreinicial);
     }
     clasecita(){
         
     }
     void setName(string name){
         nombre=name;
     }
};
 // estoy probando lo de git 
//Esto lo estoy escribiendo en la pagina de github, luego he usado git pull
// estoy cambiando la rama main
// acabo de crear una branch con git branch y el nombre
// luego las he juntado con git merge + nombre de la rama

int x=1;
int main(){
 int a;
 int b;
 int sum;
 cout << "Primer numero: \n";
 cin >> a;
 cout << "segundo numero: \n";
 cin >> b;
 cout << "Total: "<< a+b << endl; 
 clasecita objeto;
 objeto.setName("hola");
 cout << objeto.getName() << endl;
 while(x<5){
     cout << ++x << endl;
 }
 return 0;
}

