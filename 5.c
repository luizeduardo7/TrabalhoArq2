#include <immintrin.h>
#include <stdio.h>

int main(){

    __m256i a = _mm256_setr_epi8(7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7);
    __m256i a2 = _mm256_setr_epi8(6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6);
    __m256i A  = _mm256_add_epi8(a, a2);
    
    __m256i b = _mm256_setr_epi16(-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3);
    __m256i b2 = _mm256_setr_epi16(32767, 32767, 32767, 32767, 32767, 32767, 32767, 32767, 32767, 32767, 32767, 32767, 32767, 32767, 32767, 32767);
    __m256i B =  _mm256_subs_epi16(b, b2);

    __m256i C  = _mm256_add_epi8(B, A);
    
    
    printf("%s\n", "Vetor A. Composto por valores de representados por 4 bits: ");
    char* res = (char*)&A;
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d \n\n", res[0], res[1], res[2], res[3], res[4], res[5], res[6], res[7], res[8], res[9], res[10], res[11], res[12], res[13], res[14], res[15], res[16], res[17], res[18], res[19], res[20], res[21], res[22], res[23], res[24], res[25], res[26], res[27], res[28], res[29], res[30], res[31]);

    printf("%s", "Funcao _mm256_subs_epi16 aplicada ao Vetor B. Com Saturacao de 16 bits, logo os valores de B estarao dentro do intervalo de -32768 a 32767 de acordo com a Saturacao:\n");
     printf("%s\n", "Por exemplo: Normalmente (-3 - 32767 = -32770). Com a saturacao de 16 bits(-32768 a 32767) o valor -32770 nao pertence ao intervalo, logo retorna -32768.");
    short* resb = (short*)&B;
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n\n", resb[0], resb[1], resb[2], resb[3], resb[4], resb[5], resb[6], resb[7], resb[8], resb[9], resb[10], resb[11], resb[12], resb[13], resb[14], resb[15]);

    printf("%s\n", "Soma dos Vetores A e B. Valores sem saturacao, pois 4 bits apenas representam o Vetor A:");
    char* resc = (char*)&C;
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", resc[0], resc[1], resc[2], resc[3], resc[4], resc[5], resc[6], resc[7], resc[8], resc[9], resc[10], resc[11], resc[12], resc[13], resc[14], resc[15], resc[16], resc[17], resc[18], resc[19], resc[20], resc[21], resc[22], resc[23], resc[24], resc[25], resc[26], resc[27], resc[28], resc[29], resc[30], resc[31]);



    return 0;
}