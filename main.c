#include <stdio.h>
#include <math.h>

//funkce na prevod ze stupnu do radianu
float degToRad(float stupen){
    float radian = M_PI / 180*stupen;
    return radian;
}

//funkce na prevod z radianu do stupnu
float radToDeg(float radian){
    return (radian*180 / M_PI);
}

int main() {
  printf("uhel [st] | uhel [rad]\t | sin\t\t | cos\n");
    for(int i = 0; i<=360; i+= 30){
        printf("%d\t  | %f\t | %f\t | %f\n", i, degToRad(i), sin(degToRad(i)), cos(degToRad(i)));
    }
    return 0;
}