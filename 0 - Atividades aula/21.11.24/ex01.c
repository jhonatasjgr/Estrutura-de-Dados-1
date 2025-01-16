//Banda -> nome, estilo, n integrantes, pos ranking
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int qtdBandas=0;
typedef struct{
  char nome[20];
  char estilo[20];
  int qtdIntegrante;
  int posRanking;
}Banda;

Banda *criarLista();
void addBanda(Banda *bandas);
void excluirBanda(Banda *bandas, char nome[]);
void listarBandas(Banda *bandas);

int main(){
  Banda *bandas;
  bandas = criarLista();

  addBanda(bandas);
  addBanda(bandas);
  listarBandas(bandas);

  excluirBanda(bandas,"forro topado");
  listarBandas(bandas);

  free(bandas);
  return 0;
}

Banda *criarLista(){
  return (Banda*) malloc(sizeof(Banda));
}
void addBanda(Banda *bandas){
  if(qtdBandas>0)
    bandas = (Banda*) realloc(bandas,(qtdBandas+1) * (sizeof(Banda)));
  Banda banda;
  printf("Digite o nome da Banda:");
  scanf("%s",banda.nome);
  scanf("%s");//limpar buffer
  printf("Digite o estilo da Banda:");
  scanf("%s",banda.estilo);
  printf("Digite a quantidade de integrantes:");
  scanf("%d",banda.qtdIntegrante);
  printf("Digite a posição no ranking:");
  scanf("%d",banda.posRanking);
  bandas[qtdBandas] = banda;
  qtdBandas++;
}
void excluirBanda(Banda *bandas, char nome[]){
  int econtrada=0;
  if(qtdBandas>0)
      for(int i=0;i<qtdBandas;i++)
          if(strcmp(bandas[i].nome, nome)){
            econtrada=1;
            for(int j=i-1;j<qtdBandas-1;j++)
            bandas[j]=bandas[j+1];
          }
    if(econtrada){
      printf("Banda encontrada!\n");
      qtdBandas--;
      bandas = (Banda*) realloc(bandas,(qtdBandas+1) * (sizeof(Banda)));
    } 
    else printf("Banda não encontrada!\n");
 
}
void listarBandas(Banda *bandas){
  if (bandas == NULL || qtdBandas <= 0) {
        printf("Nenhuma banda cadastrada.\n");
        return;
    }

    for (int i = 0; i < qtdBandas; i++) {
        printf("Banda %d:\n", i + 1);
        printf("Nome: %s\n", bandas[i]->nome);
        printf("Estilo: %s\n",bandas[i].estilo);
        printf("Qtd integrantes: %d\n",bandas[i].qtdIntegrante);
        printf("Pos ranking: %d\n",bandas[i].posRanking);
    }
}