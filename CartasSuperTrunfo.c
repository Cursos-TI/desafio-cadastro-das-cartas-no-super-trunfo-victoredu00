#include <stdio.h>

//DEFININDO A ESTRUTURA PARA ARMAZENAR INFORMAÇÕES DA CIDADE
  typedef struct { 
     char estado[30];
     int codigo;
     char nome[50];
     int populacao;
     double pib;
     double area;
     int pontos_turisticos;
  } carta;

 // FUNÇÃO PARA CALCULAR A DENSIDADE POPULACIONAL
  double calcularDensidadePopulacional(carta c) {
    return c.populacao / c.area;
  }

  //FUNÇÃO PARA CALCULAR O PIB PER CAPITA 
  double calcularPIBPerCapta(carta c) {
    return c.populacao / c.area;
  }

  //FUNÇÃO PARA IMPRIMIR OS DADOS DA CARTA
  void imprimirCarta(carta c) {
    printf("Estado: %s\n", c.estado);
    printf("Código: %d\n", c.codigo);
    printf("Nome: %s\n", c.nome);
    printf("População: %d\n");
    printf("PIB: %.2f\n", c.pib);
    printf("Área: %.2f km²\n", c.area);
    printf("Pontos Turísticos: %d\n", c.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n");
    printf("PIB Per Capita: 2.2f\n", calcularPIBPerCapta(c));
  }

  int main() {
carta cidade;

//COLETA DE DADOS DO USUÁRIO VIA TERMINAL
   printf("insira o estado: ");
   scanf("%s", cidade.estado);

   printf("Insira o código: ");
   scanf("%d", &cidade.codigo);

   printf("Insira o nome da cidade: ");
   scanf("%s", cidade.nome),

   printf("Insira a população: " ); 
   scanf("%d", &cidade.populacao);

   printf("Insira o PIB: ");
   scanf("%lf", &cidade.pib);

   printf("Insira a área (km²): ");
   scanf("%lf", &cidade.area);
   
   printf("Insira o número de pontos turísticos: ");
   scanf("%d", &cidade.pontos_turisticos);

   imprimirCarta(cidade);
        return 0;

  }