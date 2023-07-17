#include<stdio.h>
#include <math.h>
#include<stdbool.h>
int main() {
    int valorNeto = 0;
    int sueldoBasico = 1780000;
    int tipoTrabajador = 1 ;// 1.) Contratista 2.) Planta

    if (tipoTrabajador == 2 && sueldoBasico >= 437000){
        sueldoBasico -= (sueldoBasico * 7.8) / 100;
    }else if (tipoTrabajador == 2 && sueldoBasico < 437000){
        sueldoBasico += 40000;
    }else if (tipoTrabajador == 2 && sueldoBasico < 1750000){
        sueldoBasico -= sueldoBasico * 0.1;
    }

    if (tipoTrabajador == 1 && sueldoBasico > 1500000){
        sueldoBasico -= sueldoBasico * 0.10;
    }
}
