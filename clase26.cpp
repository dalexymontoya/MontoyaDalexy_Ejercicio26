#include<cmath>
#include<iostream>
using namespace std;


float** llenar(float** valor, int f, int col);
int imprimecabezas(float** valor,int f,int col);


int main(){
   
  /*preguntar y guardar*/
  int n;
  
  int mm = n+2;
  cout<<"Escriba un numero entre el 3 y 11 "<<endl;    
  cin>>n;   
    

    
  /*llamar*/
  if(n>=3 && n<=11){
    float **matriz;            
    matriz = new float* [mm];    
    llenar(matriz, mm,n);
    imprimecabezas(matriz,mm,n);   
}
  else {
    cout<<"El numero NO esta dentro del rango"<<endl;
    cout<< "intentelo de nuevo";
    cin >> n;
      
  }

    
  return 0; 
}



float** llenar(float **valor, int f, int col){
    
  for (int i = 0; i<f; i++){      
      valor[i] = new float [col];
      
    for(int j = 0; j<col; j++){
      valor[i][j] = i+j;
        
      
    }

  }
  return valor;

}


int imprimecabezas(float **valor,int f,int col){
    float contar = 0;
    
  for(int k = 0; k<col; k++){
    cout << "primera fila= "<<*valor[k]<<endl;
      
  }
  for(int l = 0; l<f; l++){
    contar = contar + valor[0][l];
  }
    
  cout<<"la sumatoria de las filas es: "<<contar<<endl;
    
    
}
