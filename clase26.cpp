#include <iostream>
#include <cstdlib>
using namespace std; 

/*Para obtener el factorial se  multiplicamos con el indide del for el valor anterior y se guarda cada factorial en un arreglo*/


int main(){
    
      /*preguntar y guardar el numero que quieren para despues hacerle el factorial*/
    /* defino todas mis constantes*/
    
    int n; 
    int *puntero = new int[n];  
    int a = 1;
    int b = 1;
    
    cout<<"Escriba un numero "<<endl;    
    cin>>n; 
    
   
    /*recorro para hacer el factorial*/
    for(int i=0; i<n; i++){
        
        if(i==0){
           puntero[0]=1;
        }
        else  {
            
            a *= i;
            puntero[i] = a;
            
        }
    }
    
    /*imprimir mensaje y factorial*/
    cout<<"el facorial del numero es:"<<endl; 
    for(int j=0;j<n;j++){
        
         
         cout << puntero[j] << endl;
     }
    
return 0;
}
