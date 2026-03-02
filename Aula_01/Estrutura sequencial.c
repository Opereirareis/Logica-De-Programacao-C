/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()

{
    // Declaração das variáveis
 float largura, comprimento, valor_metro_quadrado;
 float area_terreno, preco_terreno;
 
 // Leitura das medidas da largura e comprimento do terreno
 
    printf("Digite a largura do terreno (em metros): ");
    scanf("%f", &largura);
    
    printf ("Digite o comprimento do terreno (em metros: ");
    scanf ("%f", &comprimento);
    
    //Leitura do valor do metro valor metro quadrado
    printf ("Digite o valor do metro quadrado do terreno: ");
    scanf("%f", &valor_metro_quadrado);
    
    //Cálculo da área do terreno
    area_terreno = largura * comprimento;
    
    //Cálculo do preço do terreno
    preco_terreno = area_terreno * valor_metro_quadrado;
    
    //Exibição dos resultados com duas casas decimais
    printf ("Área do terreno: %.2f metros quadrados\n", area_terreno);
    printf("Preço do terreno: R$ %.2f\n", preco_terreno);
    

    return 0;
}
