#include <stdio.h>

int main() {
    // variaveis
    int opicao;
    char estado[20];
    
    // menu interativo
    printf ("#### Super trunfo Paises #### \n");
    printf ("1. jogar \n");
    printf ("2. regras \n");
    printf ("3. sair \n");
    printf ("Digite uma das opições a cima: ");
    scanf ("&d", opicao);

    switch (opicao)
    {
    case 1:
            /* code */
        break;
    case 2:
        printf ("#### Regras #### \n");
        printf ("O jogador declara uma carta com todas as informações pedidas. \n");
        printf ("O jogo pega as informações e compara com as informações da maquina \n");
        printf ("declarando um vencedor. \n");
        break;
    case 3:
        printf ("Saindo... \n");
        break;
    default:
        printf ("Opição invalida! \n")
    }
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
