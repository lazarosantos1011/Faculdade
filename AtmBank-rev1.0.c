#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

char op,i;
criar_conta();
listar_conta();
operacao_caixa();

struct conta{
    char titular[50];
    int cpf[11];
    int agencia[4];
    int operacao[4];
    int numero[13];
    //char dataCadastro; Caso queira mostrar a data de cria��o de cada conta.
    float saldo;
};
struct conta contas[3];

int main(/*usar parametros para determinar a inicializa��o por cliente ou servidor*/){
setlocale(LC_ALL, "Portuguese");

    puts("\t*******************************************");
    printf("\t***\tSistema Banc�rio AtmBank\t***");
    puts("\n\t*******************************************");

    do{puts("Ol�!\nPara cancelar a opera��o, digite 0.\nPara cadastrar uma conta, digite 1.\nPara listar todas as contas"
    "cadastradas, digite 2."
    "\nPara seguir com as opera��es padr�es de conta, digite 3.\n\nOp��o desejada: ");

    op=getche();
    if(op=='0'){
    puts("\n\nObrigado por usar AtmBank!");
    }
    else if(op=='1'){
    criar_conta();
    }
    else if(op=='2'){
    listar_conta();
    }
    else if(op=='3'){
    operacao_caixa();
    }
    }while(op!='0');

return 0;
}
int criar_conta(){

    puts("\n\nBem-vindo(a) a cria��o de conta! Para come�ar a criar uma conta, insira cada"
    "informa��o requerida a seguir em sequ�ncia por linhas: "
    "Titular da conta, Ag�ncia, Opera��o da conta, e N�mero da mesma.\nOBS.: Tenha"
    "em mente que o saldo de uma conta criada sempre come�ar� em R$0,00.");

    puts("\nIniciando cria��o de conta...");

    //for(i=0; i<=1;i++){
        puts("\nQuem ser� o TITULAR da conta? ");
        scanf("%[^\n]", &contas[i].titular); //Outra forma de ler espa�os
        fflush(stdin);
        puts("Qual � o CPF do Titular da conta? ");
        fgets(contas[i].cpf, 12, stdin);
        fflush(stdin);
        puts("De qual AG�NCIA a conta ser�? (Quatro digitos e somente n�meros)");
        fgets(contas[i].agencia, 5, stdin);
        fflush(stdin);
        puts("Qual a OPERA��O indicada para a conta? (Quatro digitos e somente"
        "n�meros)");
        fgets(contas[i].operacao, 5, stdin);
        fflush(stdin);
        puts("Qual ser� o N�MERO DA CONTA? (Treze digitos e somente n�meros)");
        fgets(contas[i].numero, 14, stdin);
        fflush(stdin);
    //}
    //for(i=0;i<=1;i++){
        printf("\nConta criada.\n\n"
        "Titular : %s\n",contas[i].titular);
        printf("CPF do Titular : %s\n",contas[i].cpf);
        printf("Ag�ncia da conta : %s\n",contas[i].agencia);
        printf("Opera��o da conta : %s\n",contas[i].operacao);
        printf("N�mero da conta : %s\n\n",contas[i].numero);
    //}

return 0;
}

int listar_conta(){

    puts("\n\nListando todas as contas:\n");

    for(i=0;i<=2;i++){
        printf("Titular : %s\n",contas[i].titular);
        printf("CPF do Titular : %s\n",contas[i].cpf);
        printf("Ag�ncia da conta : %s\n",contas[i].agencia);
        printf("Opera��o da conta : %s\n",contas[i].operacao);
        printf("N�mero da conta : %s\n\n",contas[i].numero);
    }
    main();
    //puts("Pressione 0 para voltar ao menu: ");

return 0;
}
int operacao_caixa(){

    do{
    puts("\n\n***********************************");
    printf("***\tMenu de Opera��es\t***");
    puts("\n***********************************");
    printf("\nSelecione a op��o desejada ou tecle \"0\" para cancelar.");
    printf("\n\n1 - Saldo\t\t\t5 - Saque\n2 - Extrato\t\t\t6 - Empr�stimos/Cr�dito Consignado\n3"
    "- Transfer�ncias\t\t7 - Pagamentos\n4 - Comprovante salarial\t8 - Mais Servi�os\n\n"
    "Insira a op��o desejada: ");

    op=getche();
        switch(op){
        case('0'):
        puts("\n\nOp��o escolhida: Cancelar.");
        break;
        case('1'):
        puts("\n\nOp��o escolhida: Saldo.");
        printf("R$%.2f", contas[0].saldo);
        break;
        case('2'):
        puts("\n\nOp��o escolhida: Extrato.");
        break;
        case('3'):
        puts("\n\nOp��o escolhida: Transfer�ncias.");
        break;
        case('4'):
        puts("\n\nOp��o escolhida: Comprovante salarial.");
        break;
        case('5'):
        puts("\n\nOp��o escolhida: Saque.");
        break;
        case('6'):
        puts("\n\nOp��o escolhida: Empr�stimos/Cr�dito Consignado.");
        break;
        case('7'):
        puts("\n\nOp��o escolhida: Pagamentos.");
        break;
        case('8'):
        puts("\n\nOp��o escolhida: Mais Servi�os.");
        break;
    }
    puts("\n");
    system("pause");
    puts("\n");
    }while(op!='0');
}

int escrever_dados(){

    FILE *arq;
    arq = fopen("dadosContas", "a");

    // escrever os dados das contas no arquivo
    for(i=0;i<=2;i++){
        fprintf(arq, "Titular : %s\n", contas[i].titular);
        fprintf(arq, "CPF do Titular : %s\n", contas[i].cpf);
        fprintf(arq, "Ag�ncia da conta : %s\n", contas[i].agencia);
        fprintf(arq, "Opera��o da conta : %s\n", contas[i].operacao);
        fprintf(arq, "N�mero da conta : %s\n", contas[i].numero);
        fprintf(arq, "Saldo : R$%.2f\n\n", contas[i].saldo);
    }
    fclose(arq);
}
