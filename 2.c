#include <immintrin.h>
#include <stdio.h>

int main(){
    int al, ac;
    printf ("\nDimencao matriz A: ");
    scanf("%d x %d", &al, &ac);
    double matrizA[al][ac];

    int bl, bc;
    printf ("\nDimencao matriz B: ");
    scanf("%d x %d", &bl, &bc);
    double matrizB[bl][bc];
    
    if (al != bc || al+bc > 8){
       printf("0 chance de dar certo.\n");
       return -1;
    }
    
    //preenchendo matriz A
    for(int i = 0; i < al; i++){
        for(int j = 0; j < ac; j++){
            printf ("\nElemento A[%d][%d] = ", i, j);
            scanf ("%lf", &matrizA[i][j]);
        }
    }

    //preenchendo matriz B
    for(int i = 0; i < bl; i++){
        for(int j = 0; j < bc; j++){
            printf ("\nElemento B[%d][%d] = ", i, j);
            scanf ("%lf", &matrizB[j][i]);
        }
    }

    //Imprimindo A
    for(int i = 0; i < al; i++){
        for(int j = 0; j < ac; j++){
            printf("%lf ", matrizA[i][j]);
        }
        printf("\n");
    }

    //Imprimindo B
    for(int i = 0; i < al; i++){
        for(int j = 0; j < ac; j++){
            printf("%lf ", matrizB[i][j]);
        }
        printf("\n");
    }

    // Calculo
    __m256d resultA, resultB;
    //__m256i mask = _mm256_setr_epi64x(-1,-1,-1,-1);
    resultA = _mm256_loadu_pd(&matrizA[0][0]);
    resultB = _mm256_loadu_pd(&matrizB[0][0]);

    double* res = (double*)&resultA;
    printf("%f %f %f %f\n", res[0], res[1], res[2], res[3]);

    double* resB = (double*)&resultB;
    printf("%f %f %f %f\n", resB[0], resB[1], resB[2], resB[3]);
    
    
    
    // for(int i = 0; i < bl; i++){
    //     for(int j = 0; j < ac; j+=ac){
    //         resultA = _mm256_loadu_pd(&matrizA[i][j]);
    //         //resultB = _mm256_maskload_pd(&matrizA[j][i], mask);
    //     }
    //     printf("\n");
    // }

    return 0;
}