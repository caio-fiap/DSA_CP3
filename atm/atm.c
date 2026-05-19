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

float consultarSaldo(float saldo){
    printf("\n --- SALDO ATUAL ---  \n");
    printf("R$ %.2f\n", saldo);
    printf("--------------------\n");
    system("pause");
}

int main(){
    float saldo;
    int opcao;
    do{
        system("cls");
        menu();
        scanf("%d", &opcao);

        while (getchar() != '\n');

        if (opcao < 0 || opcao > 3){
            printf("Opcao Invalida");
            
        }

        switch(opcao){
            case 1:
            consultarSaldo(saldo);
            break;
            /* case 2:
            saldo = realizarSaque(saldo);
            break;
            case 3:
            dep = realizarDeposito(saldo);
            break;
            case 0:
            printf("Saindo... \n");
            break; */
            default:
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}