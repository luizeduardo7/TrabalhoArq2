#include <immintrin.h>
#include <stdio.h>

int main(){
    
    __m256d Al1 = _mm256_setr_pd(6.0, 6.0, 6.0, 6.0);
    __m256d Al2 = _mm256_setr_pd(6.0, 6.0, 6.0, 6.0);
    __m256d Al3 = _mm256_setr_pd(6.0, 6.0, 6.0, 6.0);
    __m256d Al4 = _mm256_setr_pd(6.0, 6.0, 6.0, 6.0);

    __m256d Bl1 = _mm256_setr_pd(6.0, 6.0, 6.0, 6.0);
    __m256d Bl2 = _mm256_setr_pd(6.0, 6.0, 6.0, 6.0);
    __m256d Bl3 = _mm256_setr_pd(6.0, 6.0, 6.0, 6.0);
    __m256d Bl4 = _mm256_setr_pd(6.0, 6.0, 6.0, 6.0);



    return 0;
}