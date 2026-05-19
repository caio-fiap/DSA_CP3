#include <stdio.h>
#include "menu.h"
#include "operacoes.h"

void consultarSaldo(float saldo){
    limparTela();

    printf("--------------------\n");
    printf("SALDO ATUAL \n");
    printf("--------------------\n");
    printf("R$ %.2f\n", saldo);

    pausarSistema();
}

float realizarDeposito(float saldo){
    float valor;
    
    limparTela();

    printf("--------------------\n");
    printf("DEPOSITO \n");
    printf("--------------------\n");

    printf("Digite o valor a ser depositado: R$ ");
    scanf("%f", &valor);

    limparBuffer();

    if (valor > 0){
        saldo += valor;
        printf("Deposito realizado com sucesso!\n");
    } else  {
        printf("Valor invalido!");
    }

    pausarSistema();

    return saldo;
}

float realizarSaque(float saldo){
    float valor;

    printf("--------------------\n");
    printf("SAQUE \n");
    printf("--------------------\n");

    printf("Digite o valor a ser sacado: R$ ");
    scanf("%f", &valor);

    limparBuffer();

    if (valor > 5000){
        printf("Limite diario excedido\n");
    } else if(valor <= 0 || valor > saldo) {
        printf("Saldo insuficiente ou valor invalido\n");
    } else {
        saldo -= valor;
        printf("Saque realizado com sucesso!\n");
    }

    pausarSistema();

    return saldo;
}