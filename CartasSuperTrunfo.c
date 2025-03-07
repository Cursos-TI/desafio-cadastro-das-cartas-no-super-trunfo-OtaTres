#include <stdio.h>

int main() {

    int turismo01, turismo02;
    int populacao01, populacao02;
    char cod01 [50], cod02 [50];
    char cidade01 [50], cidade02 [50];
    char estado01 [50],estado02 [50];
    float area01, area02;
    float pib01, pib02;

 /////////// carta 1 ////////////

printf("Digite o nome do Estado: \n", estado01);
  scanf(" %s", &estado01);

printf("Digite o nome da Cidade: \n", cidade01);
  scanf(" %s", &cidade01);

printf("Digite o codigo da Cidade: \n", cod01);
  scanf(" %s", &cod01);

printf("Digite o numero de Habitantes: \n", populacao01);
  scanf(" %d", &populacao01);

printf("Digite o numero de Pontos Turísticos: \n", turismo01);
  scanf(" %d", &turismo01);

printf("Digite o PIB: \n", pib01);
  scanf(" %f", &pib01);

printf("Digite a Area em Km²: \n", area01);
  scanf(" %f", &area01);
  printf("\n");

printf("O nome do Estado é: %s \n"
       "O nome da Cidade é: %s \n"
       "O Codigo da Cidade é: %s \n"
       "O numero de Habitantes é: %d \n"
       "O numero de Pontos Turisticos são: %d \n"
       "O PIB dessa cidade é: %.2f \n"
       "A Area em Km² é: %.2f \n"
       
       ,estado01, cidade01, cod01, populacao01, turismo01, pib01, area01);
printf("\n");

//////////// divisoes carta 1 /////////////

float denspop01 = (float)(populacao01 / area01);
printf("A densidade populacional é: %.2f hab/km²\n", denspop01);

pib01 *= 1e9;

float capita01 = (pib01 / populacao01);
printf("O PIB per capita é: %.2f Reais\n", capita01);

//////////// carta 2 ///////////

printf("\n");
printf("Agora escolha os Atributos da 2ª carta\n");
printf("\n");

printf("Digite o nome do Estado: \n", estado02);
scanf(" %s", &estado02);

printf("Digite o nome da Cidade: \n", cidade02);
scanf(" %s", &cidade02);

printf("Digite o codigo da Cidade: \n", cod02);
scanf(" %s", &cod02);

printf("Digite o numero de Habitantes: \n", populacao02);
scanf(" %d", &populacao02);

printf("Digite o numero de Pontos Turísticos: \n", turismo02);
scanf(" %d", &turismo02);

printf("Digite o PIB: \n", pib02);
scanf(" %f", &pib02);

printf("Digite a Area em Km² \n", area02);
scanf(" %f", &area02);
printf("\n");

printf("O nome do Estado é: %s \n"
    "O nome da Cidade é: %s \n"
    "O Codigo da Cidade é: %s \n"
    "O numero de Habitantes é: %d \n"
    "O numero de Pontos Turisticos são: %d \n"
    "O PIB dessa cidade é: %f \n"
    "A Area em Km² é: %f \n"

    ,estado02, cidade02, cod02, populacao02, turismo02, pib02, area02);
printf("\n");

///////////// divisoes carta 2 /////////////

float denspop02 = (float)(populacao02 / area02);
printf("A densidade populacional é: %.2f hab/km²\n", denspop02);

pib02 *= 1e9;

float capita02 = (pib02 / populacao02);
printf("O PIB per capita é: %.2f Reais\n", capita02);

return 0;
}