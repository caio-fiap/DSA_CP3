#include <stdio.h>
#include <stdlib.h>

void menu(){
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


int main(){
    int opcao;
    do{
        system("cls");
        menu();
        scanf("%d", &opcao);

        while (getchar() != '\n');

        if (opcao < 0 || opcao > 3){
            printf("Opcao Invalida");
        }

    } while (opcao != 0);

    return 0;
}