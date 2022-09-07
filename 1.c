#include <immintrin.h>
#include <stdio.h>

int main(){

    __m256d veca = _mm256_setr_pd(6.0, 6.0, 6.0, 6.0);
    __m256 vecb = _mm256_setr_ps(2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0);
    __m256i vecc = _mm256_setr_epi32(7, 7, 7, 7, 7, 7, 7, 7);

    
    __m256 avec = _mm256_castpd_ps(veca);
    double* a = (double*)&avec;
    printf("A(0)= %lf  A(1)= %lf  A(2)= %lf A(3)= %lf A(4)= %lf A(5)= %lf A(6)= %lf A(7)= %lf \n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
    printf("\n");

    float* b = (float*)&vecb;
    printf("B(0)= %lf  B(1)= %lf  B(2)= %lf B(3)= %lf B(4)= %lf B(5)= %lf B(6)= %lf B(7)= %lf \n", b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7]);
    printf("\n");

    __m256 cvec = _mm256_castsi256_ps(vecc);
    int* c = (int*)&vecc;
    printf("C(0)= %ld  C(1)= %ld  C(2)= %ld C(3)= %ld C(4)= %ld C(5)= %ld C(6)= %ld C(7)= %ld \n", c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7]);
    printf("\n");
    
    


    __m256 result = _mm256_fmaddsub_ps(avec, vecb, cvec);
    int* res = (int*)&result;
    printf("R(0)= %ld R(1)= %ld R(2)= %ld R(3)= %ld R(4)= %ld R(5)= %ld R(6)= %ld R(7)= %ld \n", res[0], res[1], res[2], res[3], res[4], res[5], res[6], res[7]);

    return 0;
    
}