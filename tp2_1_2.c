#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main(){

    double vt[N];
    double* pNum = vt;

    srand(time(NULL));
    
    for(int i = 0; i < N; i++){
        pNum[i] = 1 + rand()%100;
        printf("%.2f\n", pNum[i]);
    }

}

