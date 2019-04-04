#include <iostream>
#include <cstdlib>


using std::cout;
using std::endl;

float funcion(float x);
void MCMc(int N);

int main(){
    int N=1000;
    int i=0;
    float r;
    srand48(0);
    float lista = (drand48()-0,5);
    
    for (i=0;i<1000;i++){  
        float propuesta = lista + (drand48()-0,5);
        r = funcion(propuesta)/funcion(lista);
        if (r>1){
            r = 1;
        }
        if (r<1){
            r = funcion(propuesta)/funcion(lista);
        }
        float alpha = drand48();
        
        if (alpha<r){
            lista = propuesta;
            cout << i << " " << propuesta << endl;
        }
        if (alpha>r){
            cout << i << " " << lista << endl;
        }
    }
return 0;
}

float funcion(float x){
    return exp(-(x*x)/2)
}
