int main(){
int idade = 0,identifica,identificaP,identificaL, menu = 0, velho = 0, novo = 100000000;
int idademaispesado, idademaisleve, idadetotal =0, bois = 0;
double arroba = 0, peso = 0, pesototal = 0, pesomaisvelho = 0, pesomaisnovo = 0;
double pesado = 0, leve = 10000000, kilo =0;

printf("Caro usurario Digite o preco da Arroba do boi hoje e':\n");
scanf("%lf", &arroba);

while (menu < 4){
printf ("1 - Inserir os dados de um animal\n2 - Finalizar o lancamento\n3 - Reset \n4 - Sair\n");
scanf("%d", &menu);
if(menu == 1){
    printf("Insira a IDENTIFICACAO do animal: \n");
    scanf("%d", &identifica);
    printf("Insira a IDADE em meses do animal: \n");
    scanf("%d", &idade);
    printf("Insira o PESO em KG do animal: \n");
    scanf("%lf", &peso);
pesototal = peso + pesototal;       
idadetotal = idade +idadetotal;
bois++;
if(peso > pesado){
pesado = peso;
idademaispesado = idade;
identificaP = identifica;
}
if(peso < leve){
leve = peso;
idademaisleve = idade;
identificaL = identifica;
}
if(idade > velho){
velho = idade;
pesomaisvelho = peso;
}
if(idade < novo){
novo = idade;
pesomaisnovo = peso;
}
}else {
if (menu == 2){
kilo = pesototal / 15;
printf("O peso total e': %g\n", pesototal);
printf("A identificacao:%d ,o peso e a idade do animal mais pesado: %g, %d\n", identificaP,pesado,idademaispesado);
printf("A identificacao:%d ,o peso e a idade do animal mais leve: %g, %d\n", identificaL, leve, idademaisleve);
printf("A idade e peso do animal mais velho: %d , %g\n",velho,pesomaisvelho);
printf("A idade e peso do animal mais novo: %d , %g\n",novo,pesomaisnovo);
printf("A media de peso dos animais: %g\n", pesototal / bois);
printf("A media de idade dos animais: %d\n",idadetotal / bois);
printf("O preco total do lote e': %g\n",  arroba * kilo);
}

if(menu == 3){
    idade = 0, peso =0, identificaP =0,identificaL = 0, pesado = 0,idademaispesado =0, velho = 0, pesomaisvelho =0;
    pesomaisnovo = 0, idadetotal = 0, pesototal =0, bois = 0, leve = 0, idademaisleve = 0, novo =0;

}
if (menu == 4)
break; }

}
    return 0;
}