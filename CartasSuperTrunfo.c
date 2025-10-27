#include <stdio.h>
int main (){

// criação das variaveis para armazenar as informações fornecidas.
// variaveis carta 01
    char estado1;
    char cidade1[10], codcarta1[6];
    int  populacao1, pontos1;
    float area1, pib1;

// variaveis carta 02
    char estado2, codcarta2[6], cidade2[10];
    int populacao2, pontos2;
    float area2, pib2;
//inicio do jogo.
    printf("Jogo Super Trunfo.\n");
    printf("Cadastre as cartas do jogo...\n");

// cadastro da carta 01.
    printf("Cadastro da carta 01.\n");
    printf("insira uma letra de A a H para representar o Estado:\n");
    scanf("%c", &estado1);
    printf("insira um codigo de 01 a 04 para essa carta:\n");
    scanf("%s", &codcarta1);
    printf("insira o nome da cidade:\n");
    scanf("%s", &cidade1);
 #include <stdio.h>
int main (){

// criação das variaveis para armazenar as informações fornecidas.
// variaveis carta 01
    char estado1;
    char cidade1[10], codcarta1[6];
    int  populacao1, pontos1;
    float area1, pib1;
    float densidade1, pibpc1;
// variaveis carta 02
    char estado2, codcarta2[6], cidade2[10];
    int populacao2, pontos2;
    float area2, pib2;
    float densidade2, pibpc2;
//inicio do jogo.
    printf("Jogo Super Trunfo.\n");
    printf("Cadastre as cartas do jogo...\n");

// cadastro da carta 01.
    printf("Cadastro da carta 01.\n");
    printf("insira uma letra de A a H para representar o Estado:\n");
    scanf("%c", &estado1);
    printf("insira um codigo de 01 a 04 para essa carta:\n");
    scanf("%s", &codcarta1);
    printf("insira o nome da cidade:\n");
    scanf("%s", &cidade1);
    printf("insira a população:\n");
    scanf("%d", &populacao1);
    printf("insira a Área:\n");
    scanf("%f", &area1);
    printf("insira o PIB:\n");
    scanf("%f", &pib1);
    printf("insira o numero de pontos turisticos:\n\n");
    scanf("%d", &pontos1);
    //calculando densidade pupulacional1:
    densidade1 = populacao1/area1;
    //calculando pibpercatita1:
    pibpc1 = pib1/populacao1;
    
    printf("Cadastro da carta 01 finalizado! vamos para a proxima carta...\n");

// cadastro da carta 02.

    printf("Cadastro da carta 02.\n");
    printf("insira uma letra de A a H para representar o Estado:\n");
    scanf("%s", &estado2);
    printf("insira um codigo de 01 a 04 para essa carta:\n");
    scanf("%s", &codcarta2);
    printf("insira o nome da cidade:\n");
    scanf("%s", &cidade2);
    printf("insira a população:\n");
    scanf("%d", &populacao2);
    printf("insira a Área:\n");
    scanf("%f", &area2);
    printf("insira o PIB:\n");
    scanf("%f", &pib2);
    printf("insira o numero de pontos turisticos:\n");
    scanf("%d", &pontos2);
    //calculando densidade pupulacional2:
    densidade1 = populacao2/area2;
    //calculando pibpercatita1:
    pibpc1 = pib2/populacao2;

        printf("Cadastro da carta 02 finalizado!\n\n");

//inicio das opções que vão ser escritas na tela após o cadastro ds cartas.


//descritivo carta 01
    printf("Carta 1:\n");
    printf("Estado:%c\n", estado1);
    printf("Código:%c%s\n", estado1, codcarta1);
    printf("Nome da Cidade:%s\n", cidade1);
    printf("População:%d\n", populacao1);
    printf("Área:%f KM²\n",area1);
    printf("PIB:%f bilhões de reais\n", pib1);
    printf("Número de pontos Turísticos: %d\n", pontos1);
    printf("densidade Populacional: %f \n", densidade1);
    printf("Pibpercapita: %f \n\n", pibpc1);
 

//descritivo carta 02
    printf("Carta 2:\n");
    printf("Estado:%c\n", estado2);
    printf("Código:%c%s\n", estado2, codcarta2);
    printf("Nome da Cidade:%s\n", cidade2);
    printf("População:%d\n", populacao2);
    printf("Área:%f KM²\n",area2);
    printf("PIB:%f bilhões de reais\n",pib2);
    printf("Número de pontos Turísticos: %d\n", pontos2);
    printf("densidade Populacional: %f \n", densidade2);
    printf("Pibpercapita: %f \n\n", pibpc2);


// escolha do item para comparação:
printf("Item escolhido para comparação: Pontos Turisticos.\n");
if(pontos1>pontos2){
    printf("carta 1 vencedora!!!");
}else{
    printf("Carta 2 vencedora!!!");
}
    



//mensagem do final do programa
printf("FIM DO PROGRAMA!!!");





} 
