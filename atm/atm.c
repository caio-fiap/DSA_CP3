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

void consultarSaldo(float saldo){
    system("cls");
    printf("--------------------\n");
    printf("SALDO ATUAL \n");
    printf("R$ %.2f\n", saldo);
    printf("--------------------\n");

    printf("\nPressione Enter para continuar...");
    while(getchar() != '\n');
    getchar();
}

float realizarDeposito(float saldo){
    float valor;
    printf("Digite o valor a ser depositado: R$ ");
    scanf("%f", &valor);
    if (valor > 0){
        saldo += valor;
        printf("Deposito realizado!\n");
    } else  {
        printf("Valor invalido!");
    }

    printf("\nPressione Enter para continuar...");
    while(getchar() != '\n');
    getchar();

    return saldo;
}

float realizarSaque(float saldo){
    float valor;
    printf("Valor a ser sacado: R$ ");
    scanf("%f", &valor);
    if (valor > 5000){
        printf("Limite diario excedido\n");
    } else if(valor <= 0 || valor > saldo) {
        printf("Saldo insuficiente ou valor invalido\n");
    } else {
        saldo -= valor;
        printf("Saque autorizado!\n");
    }

    printf("\nPressione Enter para continuar...");
    while(getchar() != '\n');
    getchar();

    return saldo;
}

int main(){
    float saldo = 0;
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

            case 2:
            saldo = realizarSaque(saldo);
            break;

            case 3:
            saldo = realizarDeposito(saldo);
            break;

            case 0:
            printf("Saindo... \n");
            break;

            default:
            printf("Opcao invalida!\n");
            getchar();
        }

    } while (opcao != 0);

    return 0;
}