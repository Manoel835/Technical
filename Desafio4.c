#include <stdio.h>

int main(){
    float SP = 67836.43;
    float RJ = 36678.66;
    float MG = 29229.88;
    float ES = 27165.48;
    float OUTROS = 19849.53;

    float TOTAL = SP + RJ + MG + ES + OUTROS;

    float PERCENT_SP = (SP / TOTAL) * 100;
    float PERCENT_RJ = (RJ / TOTAL) * 100;
    float PERCENT_MG = (MG / TOTAL) * 100;
    float PERCENT_ES = (ES / TOTAL) * 100;
    float PERCENT_OUTROS = (OUTROS / TOTAL) * 100;


    printf("SP: %.2f%%\n", PERCENT_SP);
    printf("RJ: %.2f%%\n", PERCENT_RJ);
    printf("MG: %.2f%%\n", PERCENT_MG);
    printf("ES: %.2f%%\n", PERCENT_ES);
    printf("Outros: %.2f%%\n", PERCENT_OUTROS);

    return 0;


}