#include <iostream>

using namespace std;

struct Correo { 
  string remitente;
  string destinatario;
  string tipo;
  int peso;
  string modalidad;
    
};

struct Correo catalogo[5];
int pedidos = 0;

void pedir();
float suma();

int main (){
    
    
    pedir();
    
    suma();
   
    return 0;
}

void pedir(){
    if(pedidos < 5){
        cout << "Remitente: ";
        getline(cin, catalogo[pedidos].remitente);
        cout << "Destinatario: ";
        getline(cin, catalogo[pedidos].destinatario);
        cout << "Tipo: ";
        getline(cin, catalogo[pedidos].tipo);
        cout << "Peso: ";
        cin >> catalogo[pedidos].peso;
        cout << "Modalidad: ";
        getline(cin, catalogo[pedidos].modalidad);
       
        cin.ignore();
        
        pedidos++;
    }
    else cout << "ERROR! Solo puede enviar 5 pedidos\n";
}


float suma () {
    int total = 0;
    string p = "C";
    string d = "U";
    string c = "N";
    string e = "I";
    
    for (int i = 0; i < pedidos; i++){
     if(p.compare(catalogo[i].tipo) == 0){
       if(d.compare(catalogo[i].modalidad) == 0){
           
           total = 3;
       }  
        else if (c.compare(catalogo[i].modalidad) == 0){
            total+= 1;
        }else if (e.compare(catalogo[i].modalidad) == 0){
            
            total+=2;
            
        }
     }
  }
    
    cout<< total<<endl;
}

