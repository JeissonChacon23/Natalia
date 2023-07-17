#include<stdio.h>
#include <math.h>
#include<stdbool.h>
    int main() {
        int area = 10000000;
        int pino = 0;
        int oyamel = 0;
        int cedro = 0;
        if (area > 1000000){
            pino += ((area * 0.70) / 10) / 8;      //70%
            oyamel += ((area * 0.20) / 15) / 15;   //20%
            cedro += ((area * 0.10) / 18) / 10;    //10%
        }else{
            pino += ((area * 0.50) / 10) / 8;      //50%
            oyamel += ((area * 0.30) / 15) / 15;   //30%
            cedro += ((area * 0.20) / 18) / 10;    //20%
        }
}
