#include <fstream>
#include <iostream>

using namespace std;
ifstream inFile;


int main(){
    
    /* creo todas mis constantes*/
    int n = 20; 
    float x;
    float y;
    int ix=0;
    int iy=0;
    float imprimir;
    
    
    
    float *valoresx = new float[n];
    float *valoresy= new float[n];
    
    /*Abrir los archivos de texto*/
    
    ifstream abrirx;
    abrirx.open("valores_x.txt");
    ifstream abriry;
    abriry.open("valores_y.txt");
    
    
    
    while (abrirx >> x) {
    valoresx [ix] = x;
    ix += 1;
}
    abrirx.close();   
    
    
    while (abriry >> y) {
    valoresy [iy] = y;
    iy += 1;
}
    abriry.close();
    
    
   
    /*Imprimimos todo en la consola para posteriormente guardarlo en un .dat*/
    cout<<""<<endl; 
    cout<<"la multiplicacion de los dos arreglos es"<<endl;  
    cout<<""<<endl; 
    for(int i=0; i<n; i++){
        imprimir = valoresx [i]*valoresx [i];
        
        cout << imprimir << endl;
        cout<<""<<endl; 
    }
    
    
    
    
    
    return 0;
}
