#include <stdio.h>
#include <stdlib.h>

#define BUFFERSIZE 50

float convCelToFahr(float x);
float convArrayToFloat(char y[]);

int main() {
    char buf[BUFFERSIZE];
    
    printf("Enter your celsius temperature here: \n");
    while(fgets(buf, BUFFERSIZE, stdin) != NULL){
        printf("%.2f", convCelToFahr(convArrayToFloat(buf)));
    }
    
    return 0;
}

float convCelToFahr(float cel){
    return ((cel*(9.0/5.0))+32.0);
}

float convArrayToFloat(char numArray[]){
    float numFloat;
    numFloat = (float)atof(numArray);
    return numFloat;
}