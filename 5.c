#include <immintrin.h>
#include <stdio.h>

int main(){

    __m256i a = _mm256_setr_epi8(6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6);
    __m256i a2 = _mm256_setr_epi8(6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,6, 6, 6, 6, 6, 6, 6, 6);
    __m256i b = _mm256_setr_epi16(6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6);
    __m256i b2 = _mm256_setr_epi16(6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6);
    __m256i A  = _mm256_add_epi8(a, a2);
    __m256i B =  _mm256_subs_epi16(b, b2);
    
    int* res = (int*)&A;
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d \n", res[0], res[1], res[2], res[3], res[4], res[5], res[6], res[7], res[8], res[9], res[10], res[11], res[12], res[13], res[14], res[15], res[16], res[17], res[18], res[19], res[20], res[21], res[22], res[23], res[24], res[25], res[26], res[27], res[28], res[29], res[30], res[31]);



    return 0;
}