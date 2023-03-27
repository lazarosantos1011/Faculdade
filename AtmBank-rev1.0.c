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
    //char dataCadastro; Caso queira mostrar a data de criação de cada conta.
    float saldo;
};
struct conta contas[3];

int main(/*usar parametros para determinar a inicialização por cliente ou servidor*/){
setlocale(LC_ALL, "Portuguese");

    puts("\t*******************************************");
    printf("\t***\tSistema Bancário AtmBank\t***");
    puts("\n\t*******************************************");

    do{puts("Olá!\nPara cancelar a operação, digite 0.\nPara cadastrar uma conta, digite 1.\nPara listar todas as contas"
    "cadastradas, digite 2."
    "\nPara seguir com as operações padrões de conta, digite 3.\n\nOpção desejada: ");

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

    puts("\n\nBem-vindo(a) a criação de conta! Para começar a criar uma conta, insira cada"
    "informação requerida a seguir em sequência por linhas: "
    "Titular da conta, Agência, Operação da conta, e Número da mesma.\nOBS.: Tenha"
    "em mente que o saldo de uma conta criada sempre começará em R$0,00.");

    puts("\nIniciando criação de conta...");

    //for(i=0; i<=1;i++){
        puts("\nQuem será o TITULAR da conta? ");
        scanf("%[^\n]", &contas[i].titular); //Outra forma de ler espaços
        fflush(stdin);
        puts("Qual é o CPF do Titular da conta? ");
        fgets(contas[i].cpf, 12, stdin);
        fflush(stdin);
        puts("De qual AGÊNCIA a conta será? (Quatro digitos e somente números)");
        fgets(contas[i].agencia, 5, stdin);
        fflush(stdin);
        puts("Qual a OPERAÇÃO indicada para a conta? (Quatro digitos e somente"
        "números)");
        fgets(contas[i].operacao, 5, stdin);
        fflush(stdin);
        puts("Qual será o NÚMERO DA CONTA? (Treze digitos e somente números)");
        fgets(contas[i].numero, 14, stdin);
        fflush(stdin);
    //}
    //for(i=0;i<=1;i++){
        printf("\nConta criada.\n\n"
        "Titular : %s\n",contas[i].titular);
        printf("CPF do Titular : %s\n",contas[i].cpf);
        printf("Agência da conta : %s\n",contas[i].agencia);
        printf("Operação da conta : %s\n",contas[i].operacao);
        printf("Número da conta : %s\n\n",contas[i].numero);
    //}

return 0;
}

int listar_conta(){

    puts("\n\nListando todas as contas:\n");

    for(i=0;i<=2;i++){
        printf("Titular : %s\n",contas[i].titular);
        printf("CPF do Titular : %s\n",contas[i].cpf);
        printf("Agência da conta : %s\n",contas[i].agencia);
        printf("Operação da conta : %s\n",contas[i].operacao);
        printf("Número da conta : %s\n\n",contas[i].numero);
    }
    main();
    //puts("Pressione 0 para voltar ao menu: ");

return 0;
}
int operacao_caixa(){

    do{
    puts("\n\n***********************************");
    printf("***\tMenu de Operações\t***");
    puts("\n***********************************");
    printf("\nSelecione a opção desejada ou tecle \"0\" para cancelar.");
    printf("\n\n1 - Saldo\t\t\t5 - Saque\n2 - Extrato\t\t\t6 - Empréstimos/Crédito Consignado\n3"
    "- Transferências\t\t7 - Pagamentos\n4 - Comprovante salarial\t8 - Mais Serviços\n\n"
    "Insira a opção desejada: ");

    op=getche();
        switch(op){
        case('0'):
        puts("\n\nOpção escolhida: Cancelar.");
        break;
        case('1'):
        puts("\n\nOpção escolhida: Saldo.");
        printf("R$%.2f", contas[0].saldo);
        break;
        case('2'):
        puts("\n\nOpção escolhida: Extrato.");
        break;
        case('3'):
        puts("\n\nOpção escolhida: Transferências.");
        break;
        case('4'):
        puts("\n\nOpção escolhida: Comprovante salarial.");
        break;
        case('5'):
        puts("\n\nOpção escolhida: Saque.");
        break;
        case('6'):
        puts("\n\nOpção escolhida: Empréstimos/Crédito Consignado.");
        break;
        case('7'):
        puts("\n\nOpção escolhida: Pagamentos.");
        break;
        case('8'):
        puts("\n\nOpção escolhida: Mais Serviços.");
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
        fprintf(arq, "Agência da conta : %s\n", contas[i].agencia);
        fprintf(arq, "Operação da conta : %s\n", contas[i].operacao);
        fprintf(arq, "Número da conta : %s\n", contas[i].numero);
        fprintf(arq, "Saldo : R$%.2f\n\n", contas[i].saldo);
    }
    fclose(arq);
}
