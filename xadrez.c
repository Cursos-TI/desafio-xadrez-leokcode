#include <stdio.h>

int main(){
    // Área para declaração de variáveis e seus respectivos valores.
    int movimentosTorre = 5;            // Variável com o número de movimentos que a Torre irá fazer.
    int movimentosBispo = 5;            // Variável com o número de movimentos que o Bispo irá fazer.
    int movimentosRainha = 8;           // Variável com o número de movimentos que a Rainha irá fazer.
    int movimentosCavalo = 1;           // Variável com o número de movimentos que o Cavalo irá fazer.
    char cima[20] = "↑Cima↑";           // Variável que exibe o movimento para cima.
    char baixo[20] = "↓Baixo↓";         // Variável que exibe o movimento para baixo.
    char esquerda[20] = "←Esquerda←";   // Variável que exibe o movimento para esquerda.
    char direita[20] = "→Direita→";     // Variável que exibe o movimento para direita.
    int contador = 0;                   // Variável que conta quantos movimentos foram feitos.

    // Área da lógica para simular o movimento da Torre.
    // A Torre se move em linha reta, seja horizontal ou vertical.
    // Moveremos cinco casas para a direita usando o while.

    printf("=-=-= TORRE =-=-=\n");
    printf("Movendo %d casas para a direita:\n", movimentosTorre);

    while (contador < movimentosBispo)
    {
        printf("%s\n", direita);
        contador++;
    }
    contador = 0; // Zera o contador após a execução do while.
    printf("\n"); // Cria uma linha vazia para separar a exibição dos movimentos de cada peça.


    // Área da lógica para simular o movimento do Bispo.
    // O Bispo se move na diagonal.
    // Moveremos cinco casas para a direita superior usando o for.

    printf("=-=-= BISPO =-=-=\n");
    printf("Movendo %d casas na diagonal para a direita superior:\n", movimentosTorre);
    for (contador; contador < movimentosBispo; contador++) 
    {
        printf("%s \n", cima);
        printf("%s \n", direita);
    }
    contador = 0; // Zera o contador após a execução do for.
    printf("\n"); // Cria uma linha vazia para separar a exibição dos movimentos de cada peça.


    // Área da lógica para simular o movimento do Bispo.
    // A Rainha move-se em todas as direções.
    // Moveremos oito casas para a esquerda usando o do-while.
    printf("=-=-= RAINHA =-=-=\n");
    printf("Movendo %d casas para a esquerda:\n", movimentosRainha);
    do
    {
        printf("%s\n", esquerda);
        contador++;
    } while (contador < movimentosRainha);

    contador = 0; // Zera o contador após a execução do do-while.
    printf("\n"); // Cria uma linha vazia para separar a exibição dos movimentos de cada peça.


    // Área da lógica para simular o movimento do Cavalo.
    // O Cavalo se move duas casas em uma direção (horizontal ou vertical) e depois uma casa perpendicularmente, formando um "L".
    // Moveremos duas casas para  baixo e uma casa a esquerda usando o while e o for aninhados.
    printf("=-=-= CAVALO =-=-=\n");
    printf("Movendo em L (%d casas para baixo e %d casa a esquerda):\n", (movimentosCavalo + 1), movimentosCavalo);
        while (movimentosCavalo--){ // Faz o loop e decrementa até a variável movimentoCavalo chegar a 0 e para.
            for (contador; contador < 2; contador++) // Faz o loop com o contador zerado e incrementa até 
                                                     // o contador chegar a 2 e para.
            {
                printf("%s ,", baixo); // Imprime duas vezes "↓Baixo↓"
            }
            printf("%s\n", esquerda); // Imprime uma vez "←Esquerda←"
        }
    printf("\n");

    printf(" =-=-= FIM DA SIMULAÇÃO =-=-=");

    return 0;

}
