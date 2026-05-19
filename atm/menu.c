#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

void exibirMenu(){
    printf("==============================\n");
    printf(" CAIXA ELETRONICO \n");
    printf("==============================\n");
    printf(" 1 - Consultar Saldo \n");
    printf(" 2 - Realizar Saque \n");
    printf(" 3 - Realizar Deposito \n");
    printf(" 0 - Sair \n");
    printf("==============================\n");
    printf(" Escolha uma opcao \n");
}

void limparTela(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void limparBuffer(){
    while(getchar() != '\n');
}

void pausarSistema(){
    printf("\nPressione ENTER para continuar... ");
    getchar();
}