#include <stdio.h> 

int main(){

    int carteira, preco, quantidade, produto, saldo, custo;

    printf("Conveniencia Online\n");

    printf("\nDigite o valor do deposito.\n");

    scanf("%i", &carteira);

    printf("Seu saldo eh: %i\n", carteira);

    printf("Qual produto deseja adicionar ao carrinho? Selecione apenas um numero por vez.\n");

    printf("Temos:\n 1- Refrigerante = R$ 8,00 \n 2- Energetico  = R$ 10,00\n 3- Cerveja = R$ 5,00\n 4- Agua = R$ 1,00\n");

    scanf("%i", &produto);

    if(produto == 1 || produto == 2 || produto == 3 || produto == 4){

        printf("Escolha a quantidade:\n");

        scanf("%i", &quantidade);

        }

    else{

        printf("Desculpe, o produto nao esta disponivel no momento.\n");

        return 0;}

    if(produto == 1){

        custo= 8*quantidade;

    }

    else{

        if(produto== 2){

            custo = 10*quantidade;

        }

        else{

          if(produto== 3){

            custo = 5*quantidade;

}

            if(produto== 4){

                custo = 1*quantidade;

    }        }

}

    if (custo > carteira)

    {

    printf("\nVoce nao tem saldo suficiente para realizar a compra.");

    return 0;}

    if (quantidade <= 0)

    {

    printf("\nPor favor, insira um valor maior que zero.");

    return 0;}

    printf("\nCompra realizada com sucesso!");

    printf("\nCusto total:%i", custo);

    saldo = carteira - custo;

    printf("\nSaldo restante:%i", saldo);

return 0;}