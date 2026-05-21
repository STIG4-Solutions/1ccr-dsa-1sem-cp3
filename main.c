#include<stdio.h>
#include<stdlib.h>

void exibirMenu()
{
    printf("\n========================\n");
    printf(" CAIXA ELETRONICO \n");
    printf("========================\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Realizar Saque\n");
    printf("3 - Realizar Deposito\n");
    printf("0 - Sair\n");
    printf("========================\n");
    printf("Escolha uma opcao: ");
}

void main()
{
    int opcao;
    do
    {
        system("cls"); // Limpa a tela
        exibirMenu();
        scanf("%d", &opcao);
        while (getchar() != '\n')
            ;
        if (opcao < 0 || opcao > 3)
        {
            printf("Opcao Invalida!\n");
        }
    } while (opcao != 0);
    printf("Obrigado por usar nosso ATM!");
}
