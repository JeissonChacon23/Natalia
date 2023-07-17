#include<stdio.h>
#include <math.h>
#include<stdbool.h>
int main() {
    int codigo = 437952;
    int cif1 = codigo / 100000;
    int mod1 = codigo % 100000;
    int cif2 = mod1 / 10000;
    int mod2 = mod1 % 10000;
    int cif3 = mod2 / 1000;
    int mod3 = mod2 % 1000;
    int cif4 = mod3 / 100;
    int mod4 = mod3 % 100;
    int cif5 = mod4 / 10;
    int cif6 = mod4 % 10;

    if (cif1 + cif6 > cif5){
        //print("Voleta Valida")
        if (cif2 >= 1 && cif2 <= 5){
            //print("Tipo de Entrada: Gramilla")
        }else{
            //print("Tipo de Entrada: General")
        }
        
        if (((cif3 * 100) + cif4) % 2 == 0){
            //print("Puerta: 1 \nHora: 19:00")
        }else{
            //print("Puerta: 2 \nHora: 20:00")
        }
        
    }else{
        //print("Voleta Invalida")
    }
}
