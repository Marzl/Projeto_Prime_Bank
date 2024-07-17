#include <stdio.h>
#include <locale.h>
#include <string.h>

int escolha = 0;

void login(){ //lOGIN
    char lg[15] = "ADS";
    char lg1[15];
    char sn[15] = "2S";
    char sn1[15];        


    printf("Digite o Login: ");
    scanf("%s", lg1);

    printf("Digite a Senha: ");
    scanf("%s", sn1);

    if (strcmp(lg, lg1) == 0 && strcmp(sn, sn1) == 0)

        printf("\nConectado com Sucesso!\n");
        

    else
{
        printf("\nDados Incorretos!\n"); 
        login();
        
}
} 

void menu(){ //MENU

    printf("-- - -- - -- - -- - -- - --\n");
    printf("Bem Vindo ao seu Prime Bank\n");
    printf("-- - -- - -- - -- - -- - --\n\n");

    printf("1> Boleto\n");
    printf("2> Emprestimo\n");
    printf("3> Investimento\n");    
    printf("4> Troca de Credenciais\n");
    printf("5> Tranferencia\n");
    printf("0> Sair\n\n");
    printf("Por favor digite uma opcao: ");
    scanf("%d", &escolha);

    getchar();    

}

  void  boleto (){ //BOLETO
    int boleto,n1;
    float saldo,saldo_res,boleto_p;
    saldo_res=saldo=boleto_p=0;

    printf("Tela de pagamento de boletos\n");

    printf("Digite seu saldo:\n");
    scanf("%f",&saldo);

    int i;
    srand(time(NULL));

      for(i = 0; i< 1; i++){


    n1 = 19887 * rand() % 8964284685;
      }
    printf("Digite o numero do codigo de barras:\n%d\n", n1);


    printf("Digite o valor do boleto\n");
    scanf("%f",&boleto_p);

   saldo_res= saldo - boleto_p;

   if (saldo >= boleto_p){;


       printf("Pagamento do boleto concluido! \nValor do boleto: R$%.2f\n",boleto_p);



   }
   else
   {
        printf("Saldo insuficiente!\n");
 
}
    system("pause");
    printf("");
}

void emprestimo (void){  //EMPRESTIMO
    float extrato, emprestimo, taxa, d; 

    printf("a taxa cobrada sobre o valor do emprestimo e no valor porcento de 5 ao mes! \n"); 

    printf("Digite seu extrato atual: ");
    scanf("%f", &extrato);

    printf("Digite o valor do emprestimo: ");
    scanf("%f", &emprestimo);


    taxa = emprestimo * 5/100; 

    if (emprestimo <= extrato*3) 
    {  
        printf ("emprestimo concedido com sucesso! \n");
        printf ("a taxa cobrada ao mes sera no valor de R$%0.2f \n", taxa );
    }
    else 
    { 

        printf ("emprestimo negado\n");
    }
    system("pause");
} 

void investimento(){ //INVESTIMENTO

printf("Bem-vindo a tela de investimento");
getch();

 int i;
 float n1,n2,valor;

    srand(time(NULL));

      for(i = 0; i< 4; i++)
      {



      n1 = rand() % 10000;
      }
       printf("\nO valor atual do seu investimento: R$%.f", n1);
       getchar();
       
       printf("\nQual o valor deseja adicionar ao seu investimento?\n");
       scanf("%f" , &n2);
       
       valor = n1 + n2;
       
       printf("Valor total a partir de agora: R$%.f\n" , valor);



system("pause");
}

void recuperacao(){ //TROCA DE CREDENCIAIS

    char pw1[999],pw2[999];
    printf("Tela Troca de Credenciais");
    getchar();

    printf("Insira seu Email para Recuperacao de Senha:\n");
    scanf("%s",&pw1);

    printf("Confirme o Email Informado:\n");
    scanf("%s",&pw2);

    if(strcmp(pw1,pw2) == 0)
    {
    printf("Email Enviado, cheque sua Caixa de Entrada\n");
    }
    else
    {
    printf("Email nao encontrado\n");
    }
    system("pause");
    return 0;
    }

void transferencia(){//TRANSFERENCIA BANCARIA

    float saldo, saldo_res, transferencia, cpf;

    printf ("Bem Vindo a Tela de Transferencia \n");
    getchar();


    printf ("Digite o Saldo atual: \n");
    scanf ("%f",& saldo);

    printf ("Digite o CPF do Usuario: \n");
    scanf ("%f",& cpf);

    printf ("\nNOME: Salame\n");
    printf ("BANCO: Prime Bank\n\n");

    printf ("Quanto deseja transferir ?\n");
    scanf ("%f",& transferencia);

    saldo_res = saldo - transferencia;

    if(saldo>=transferencia){

    printf ("Transferencia Concluida, no Valor de: R$ %.2f \n", transferencia);
    printf ("Saldo Restante de: R$ %.2f \n" ,saldo_res);
    }
    else
    {
    printf ("Transferencia Negada, Saldo Insuficiente!");
    }
    system("pause");
    return (0);
    }

int main(){

    setlocale(LC_ALL, "");

    login();

    do{
        menu();
        system("cls");

    switch (escolha){

    case 1:

    system("cls");
    boleto();
    system("cls");

    break;

    case 2:

    system("cls");
    emprestimo();
    system("cls");

    break;

    case 3:

    system("cls");
    investimento();
    system("cls");

    break;

    case 4:

    system("cls");
    recuperacao();
    system("cls");

    break;

    case 5:

    system("cls");
    transferencia();
    system("cls");

    break;

    case 0:

    system("cls");
    login();
    

    break;

    default:

    printf("Opcao Invalida!");

    break;    
}
    }while(0 != menu);
    getchar();
    return 0;
}