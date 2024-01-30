#include <stdio.h>

int main () {
    int clientes;
    int parcelamento;
    int camisas;
    int totalClientes;
    int quantidadeParcelas;
    float media;
    float maior = 0;
    float menor;
    int quantosParcelaram = 0;
    float valorTotal;
    float valorCamisa;
    float valorCadaCliente;
    float valorParcelas;

    printf("------------------------------------------------------\n");
    printf("-------------------Camisaria Store--------------------\n");
    printf("------------------------------------------------------\n");
    printf("Digite a quantidade de clientes atendidos e pressione enter: ");
    scanf("%i", &clientes);
    printf("Total de clientes atendidos: %i \n\n", clientes);
    printf("Abaixo, digite a quantidade e os valores das camisas compradas por cada cliente.\n\n");
    for (totalClientes = 1; totalClientes <= clientes; totalClientes++) {
        printf("Informe a quantidade de camisas compradas pelo cliente %i e pressione enter: ", totalClientes);
        scanf("%i", &camisas);
        printf("\nTotal de camisas compradas pelo cliente %i: %i\n\n", totalClientes, camisas);
        while (camisas > 0) {
            printf("Digite o valor de cada camisa (uma de cada vez) e pressione enter: ");
            scanf("%f", &valorCamisa);
            valorCadaCliente += valorCamisa;
            valorTotal+= valorCamisa;
            camisas--;
        }
        if (valorCadaCliente > 1000) {
            printf("O valor total gasto por este cliente foi de RS %.2f\n\n", valorCadaCliente);
            printf("\nO valor gasto foi superior a 1000 reais. Parcelamento em ate 3 vezes disponivel. O cliente realizou o parcelamento?\n\n");
            printf("Pressione 1 para sim e 0 para nao: ");
            scanf("%i", &parcelamento);
            if (parcelamento == 1) {
                quantosParcelaram++;
                printf("\nDigite a quantidade de parcelas (ate 3) e pressione enter: ");
                scanf("%i", &quantidadeParcelas);
                printf("\nParcelamento realizado em %i vezes.\n\n", quantidadeParcelas);
                valorParcelas = valorCadaCliente/quantidadeParcelas;
                printf("Valores de cada parcela: R$ %.2f .\n\n", valorParcelas);
        }

    }
        printf("O valor total gasto por este cliente foi de RS %.2f\n\n", valorCadaCliente);


        if (valorCadaCliente > maior) {
            maior = valorCadaCliente;
        }

        if (totalClientes == 1 || valorCadaCliente < menor) {
        menor = valorCadaCliente;
       }


        valorCadaCliente =0;
        if (totalClientes < clientes){
        printf("Ir para o proximo cliente\n");
        }
        else {
            printf("Finalizar o programa e ver os resultados\n");
        }
        system("pause");
        system("cls");
        printf("------------------------------------------------------\n");
        printf("-------------------Camisaria Store--------------------\n");
        printf("------------------------------------------------------\n");
    }
    media = valorTotal/clientes;
    printf("O valor total de compras de %i cliente(s) foi de R$ %.2f \n", clientes, valorTotal);
    printf("A media das compras realizadas foi de: R$ %.2f \n", media);
    printf("O maior valor dentre as compras foi de: RS %.2f \n", maior);
    printf("O menor valor dentre as compras foi de: RS  %.2f \n", menor);
    printf("O total de clientes que aceitaram o parcelamento foi de: %i cliente(s)", quantosParcelaram);

return 0;

}
