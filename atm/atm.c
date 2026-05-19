#include <stdio.h>
#include "menu.h"
#include "operacoes.h"

int main(){
    float saldo = 0;
    int opcao;
    
    do{
        limparTela();
        exibirMenu();
        scanf("%d", &opcao);

        if(scanf("%d", &opcao) != 1){
            printf("Entrada Invalida");
            limparBuffer();
            pausarSistema();
            continue;
        }

        limparBuffer();

        switch(opcao){
            case 1:
            consultarSaldo(saldo);
            break;

            case 2:
            saldo = realizarSaque(saldo);
            break;

            case 3:
            saldo = realizarDeposito(saldo);
            break;

            case 0:
            printf("Saindo do Sistema... \n");
            break;

            default:
            printf("Opcao invalida!\n");
            pausarSistema();
        }

    } while (opcao != 0);

    return 0;
}