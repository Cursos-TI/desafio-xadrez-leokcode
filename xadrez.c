#include <stdio.h>

// Área para definição da função recursiva do movimento da Torre.
void recursivoTorre(int movimentosTorre)
{   
    if (movimentosTorre > 0) // Condição: enquanto a variável movimentosTorre for maior que 0.
    {
    recursivoTorre(movimentosTorre - 1); 
    printf("→Direita→\n");               
    }
}

// Área para definição da função recursiva do movimento do Bispo.
void recursivoBispo (int movimentosBispo) 
{   
    int i = 2; // Sempre que o loop reinicia chamando a função recursivoBispo a variável i volta e ter o valor 2;
    while (i > 1 && movimentosBispo > 0)
    {
        printf("↑Cima↑\n");
        i--; // Decremento do valor de i, assim o while tem condição falsa, e o while de baixo tem condição verdadeira.
        while (i > 0)
        {
            printf("→Direita→\n");
            i--; // Decremento do valor de i, fazendo com que o segundo while também tenha a condição falsa.
            recursivoBispo(movimentosBispo - 1);  // Chama a função dentro da função e diminui
        }                                         // 1 unidade da variável movimentosBispo e reinicia o loop da função
    }
}

// Área para definição da função recursiva do movimento da Rainha.
void recursivoRainha(int movimentosRainha)
{   
    if (movimentosRainha > 0) 
    {
    recursivoRainha(movimentosRainha - 1);
    printf("←Esquerda←\n");
    }
}

// Área para definição dos loops aninhados do movimento do Cavalo.
void recursivoCavalo(int movimentosCavalo)
{   
    
    for (int i = 0 ; i < 2 || movimentosCavalo >= 1; i++, movimentosCavalo--) // A variável i é o contador, a cada loop imprime "↑Cima↑"
{                                                                             // e é incrementado, quando chega a 2 ou quando a variável
        printf("↑Cima↑\n");                                                   // movimentosCavalo chega ao valor 0, o loop para.
        while (i == 1)      // Quando a variável i chega ao valor 1, o while imprime "→Direita→" e
        {                  // o break interrompe o loop para não ficar um loop infinito.
            printf("→Direita→\n");
            break;
        }
    }
    
}

int main() {
    // Área para declaração de variáveis e seus respectivos valores.
    int movimentosTorre = 5;            // Variável com o número de movimentos que a Torre irá fazer.
    int movimentosBispo = 5;            // Variável com o número de movimentos que o Bispo irá fazer.
    int movimentosRainha = 8;           // Variável com o número de movimentos que a Rainha irá fazer.
    int movimentosCavalo = 1;           // Variável com o número de movimentos que o Cavalo irá fazer.
   
    
    // Área de exibição do movimento da Torre.
    // A Torre se move em linha reta, seja horizontal ou vertical.
    // Moveremos cinco casas para a direita usando a função recursiva da Torre.
    printf("=-=-= TORRE =-=-=\n");
    printf("Movendo...\n");
    recursivoTorre(movimentosTorre); // Chama a função recursivoTorre com a variável movimentosTorre dentro.
    printf("\n"); // Cria uma linha vazia para separar a exibição dos movimentos de cada peça.


    // Área de exibição do movimento do Bispo.
    // O Bispo se move na diagonal.
    // Moveremos cinco casas para a direita superior usando a função recursiva do Bispo.
    printf("=-=-= BISPO =-=-=\n");
    printf("Movendo...\n");
    recursivoBispo(movimentosBispo);
    printf("\n"); // Cria uma linha vazia para separar a exibição dos movimentos de cada peça.


    // Área de exibição do movimento da Rainha.
    // A Rainha move-se em todas as direções.
    // Moveremos oito casas para a esquerda usando a função recursiva da Rainha.
    printf("=-=-= RAINHA =-=-=\n");
    printf("Movendo...\n");
    recursivoRainha(movimentosRainha);
    printf("\n"); // Cria uma linha vazia para separar a exibição dos movimentos de cada peça.


    // Área da lógica para simular o movimento do Cavalo.
    // O Cavalo se move duas casas em uma direção (horizontal ou vertical) e depois uma casa perpendicularmente, formando um "L".
    // Moveremos em L, duas casas para baixo e uma casa a esquerda usando a função recursiva do Cavalo.
    printf("=-=-= CAVALO =-=-=\n");
    printf("Movendo...\n");
    recursivoCavalo(movimentosCavalo);
    printf("\n");

    printf(" =-=-= FIM DA SIMULAÇÃO =-=-=");

    return 0;

}
