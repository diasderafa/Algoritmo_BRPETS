#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

int cadastroCliente();
int menuCliente();
int menuClube();
int menuSup();
int menuPetbox();
int petboxFixa();
int listarCarrinho();
int menuLoja();
int totalCarrinho();

#define TAMANHO 19
#define VERD 1
#define FALSO 0

    char nomeCliente[100], nomeRua[100], nomeCidade[100], nomeEstado[100], telefoneCliente[20], numRua[10], cepCliente[20], cpfCliente[20];
    int respCliente, confirmaCad, formPag;
 

 
// S T R U C T S

//struct cadastro
  struct produtos{
    int id; // -1 indica que a posição do elemento no vetor está vazia
    char nomeProd[100], nomeProd1[100],nomeProd2[100],nomeProd3[100],nomeProd4[100],nomeProd5[100];
    float precoProd, estoqueProd;
  } vetCad[TAMANHO];

//struct carrinho
  struct carrinho{
    int idCarrinho; // -1 indica que a posição do elemento no vetor está vazia
    char nomeCarrinho[100];
    float precoCarrinho, qtdCarrinho, totCarrinho;
  } vetCarrinho[TAMANHO];
  

// FIM STRUCTS


 
//F U N Ç Õ E S 
  
// Função Limpar Buffer
void limpa_linha()
{
    scanf("%*[^\n]");
    scanf("%*c");
}

// Função novoCad
int novoCad()
{
    printf("\nPara finalizar a compra é necessário realizar o cadastro. Deseja fazer isso agora?\n");
                printf("1 - Sim\n");
                printf("2 - Não\n");
                printf("Opção:");
				scanf("%d", &confirmaCad);
				if (confirmaCad==1)
				{
  do{
                    printf("\n---------------------------------------------------------------------------------------------------------\n");
                    printf("|                                         Cadastro do Cliente                                           |\n");  
                    printf("---------------------------------------------------------------------------------------------------------\n");
                    printf("\n Digite seu nome completo: ");
                    limpa_linha();
                    gets(nomeCliente);
                    limpa_linha();
                    printf("\n Digite o seu CPF (apenas números): ");
                    gets(cpfCliente);
                    limpa_linha();
                    printf("\n Digite o seu teletone (apenas números): ");
                    gets(telefoneCliente);
                    limpa_linha();
                    printf("\n Digite o seu CEP (apenas números): ");
                    gets(cepCliente);
                    limpa_linha();
                    printf("\n Digite o nome da sua rua: ");
                    gets(nomeRua);
                    limpa_linha();
                    printf("\n Digite o número da sua casa: ");
                    gets(numRua);
                    limpa_linha();
                    printf("\n Digite a sua cidade: ");
                    gets(nomeCidade);
                    limpa_linha();
                    printf("\n Digite o seu estado: ");
                    gets(nomeEstado);
                    limpa_linha();

                    printf("\n---------------------------------------------------------------------------------------------------------\n");
                    printf("Cadastro finalizado com sucesso!\n");
                    printf("\n********Dados cadastrados*********\n");
                    printf("\n Nome..: %s", nomeCliente);
                    printf("\n Documento..: %s", cpfCliente);
                    printf("\n Telefone..: %s", telefoneCliente);
                    printf("\n CEP..: %s", cepCliente);
                    printf("\n Rua..: %s", nomeRua);
                    printf("\n Número..: %s", numRua);
                    printf("\n Cidade..: %s", nomeCidade);
                    printf("\n Estado..: %s", nomeEstado);
                    printf("\n**********************************\n");
                    printf("\nOs dados cadastrados estão corretos?\n\n");
                    printf("1 - Sim\n");
                    printf("2 - Não\n");
                    printf("Opção:");
                    scanf("%d", &respCliente);
                    if (respCliente==1)
                    {
                        menuPag();
                    }
                        else
                        {
                            printf("\nRetornando ao menu do cliente.");
                            system("pause");
                            menuCliente();
                        }
                     
     } while (respCliente==2);

     }
				else 
				{
					printf("Voltando ao Menu Anterior\n");
					system("pause");
					system("cls");
				    menuCliente();
				}
    return 0;
}

//Função Pagamento
int menuPag()
{
                        int i, opcao, opcao1, respClientefinal;
                        int resp = FALSO; 
                        printf("\nEscolha uma forma pagamento\n\n");
                        printf("1 - Boleto bancário\n");
                        printf("2 - Cartão de crédito\n");
                        printf("2 - Pix\n");
                        printf("Opção:");
                        scanf("%d", &formPag);

                         switch(formPag)
                         {
                            case 1 : //boleto bancario
                             system("cls");
                             printf("\n***************DADOS DADOS FINAIS DA COMPRA***************\n\n\n");
                             printf("\n***************DADOS CADASTRADOS DO CLIENTE***************\n");
                             printf("\n Nome..: %s", nomeCliente);
                             printf("\n Documento..: %s", cpfCliente);
                             printf("\n Telefone..: %s", telefoneCliente);
                             printf("\n CEP..: %s", cepCliente);
                             printf("\n Rua..: %s", nomeRua);
                             printf("\n Número..: %s", numRua);
                             printf("\n Cidade..: %s", nomeCidade);
                             printf("\n Estado..: %s", nomeEstado);
                             printf("\n**********************************\n\n");
                             printf("\n******************CARRINHO DE COMPRAS*********************");
                                for(i=0;i<TAMANHO; i++)
                                {
                                  if(vetCarrinho[i].idCarrinho != -1)
                                  {
                                    printf("\n***************************************");
                                    printf("\nIdentificador : %d", vetCarrinho[i].idCarrinho);
                                    printf("\nNome          : %s", vetCarrinho[i].nomeCarrinho);
                                    printf("\nPreço unitário: %.2f", vetCad[i].precoProd);   
                                    printf("\nQtd           : %.0f", vetCarrinho[i].qtdCarrinho);               
                                  }
                                }
                            resp = VERD;
                            totalCarrinho();
                             printf("\n\n*************************MÉTODO DE PAGAMENTO*********************\n");
                             printf("\n                        Boleto Bancário                          \n\n");
                             
                             printf("\nDeseja finalizar sua compra? (1-Sim 2-Não)...: ");
                             scanf("%d", &opcao);
                             if (opcao==1)
                             {
                                printf("\n\n*************************COMPRA FINALIZADA COM SUCESSO*********************\n");
                                printf("\nDeseja retornar ao site? (1-Sim 2-Não)...: ");
                                scanf("%d", &opcao1);
                                if (opcao1==1)
                                {
                                  menuCliente();
                                }
                                else
                                {
                                  exit(0);
                                }
                             }
                             else
                             {
                                printf("\nRetornando ao menu do cliente.");
                                system("pause");
                                menuCliente();
                             }
                            break;
 
                            case 2 : //cartao crédito
                             system("cls");
                             printf("\n***************DADOS DADOS FINAIS DA COMPRA***************\n\n\n");
                             printf("\n***************DADOS CADASTRADOS DO CLIENTE***************\n");
                             printf("\n Nome..: %s", nomeCliente);
                             printf("\n Documento..: %s", cpfCliente);
                             printf("\n Telefone..: %s", telefoneCliente);
                             printf("\n CEP..: %s", cepCliente);
                             printf("\n Rua..: %s", nomeRua);
                             printf("\n Número..: %s", numRua);
                             printf("\n Cidade..: %s", nomeCidade);
                             printf("\n Estado..: %s", nomeEstado);
                             printf("\n**********************************\n\n");
                             printf("\n******************CARRINHO DE COMPRAS*********************");
  
                                for(i=0;i<TAMANHO; i++)
                                {
                                  if(vetCarrinho[i].idCarrinho != -1)
                                  {
                                    printf("\n***************************************");
                                    printf("\nIdentificador : %d", vetCarrinho[i].idCarrinho);
                                    printf("\nNome          : %s", vetCarrinho[i].nomeCarrinho);
                                    printf("\nPreço unitário: %.2f", vetCad[i].precoProd);   
                                    printf("\nQtd           : %.0f", vetCarrinho[i].qtdCarrinho);               
                                  }
                                }
                            resp = VERD;
                            totalCarrinho();
                            char nomeCartao[100], numeroCartao[100], cvvCartao[100];
                             printf("\n\n*************************MÉTODO DE PAGAMENTO*********************\n");
                             printf("\n                        Cartão de Crédito                          \n");
                             limpa_linha();
                             printf("\n\nDigite o número do cartão..: ");
                             gets(numeroCartao);
                             limpa_linha();
                             printf("\nDigite o nome correspondente do cartão..: ");
                             gets(nomeCartao);
                             limpa_linha();
                             printf("\nDigite o código CVV localizado atras do cartão..: ");
                             gets(cvvCartao);
                             limpa_linha();
                             printf("\n\n*************************DADOS DO CARTÃO*********************\n");
                             printf("\nNúmero do cartão..: %s\nNome do Cartão..: %s\nCódigo CVV..: ***", numeroCartao, nomeCartao);
                             printf("\n\n\nDeseja finalizar sua compra? (1-Sim 2-Não)...: ");
                             scanf("%d", &opcao);
                             if (opcao==1)
                             {
                                printf("\n\n*************************COMPRA FINALIZADA COM SUCESSO*********************\n");
                                printf("\nDeseja retornar ao site? (1-Sim 2-Não)...: ");
                                scanf("%d", &opcao1);
                                if (opcao1==1)
                                {
                                  menuCliente();
                                }
                                else
                                {
                                  exit(0);
                                }
                             }
                             else
                             {
                                printf("\nRetornando ao menu do cliente.");
                                system("pause");
                                menuCliente();
                             }                            
                             break;

                            case 3 : //pix
                             system("cls");
                             printf("\n***************DADOS DADOS FINAIS DA COMPRA***************\n\n\n");
                             printf("\n***************DADOS CADASTRADOS DO CLIENTE***************\n");
                             printf("\n Nome..: %s", nomeCliente);
                             printf("\n Documento..: %s", cpfCliente);
                             printf("\n Telefone..: %s", telefoneCliente);
                             printf("\n CEP..: %s", cepCliente);
                             printf("\n Rua..: %s", nomeRua);
                             printf("\n Número..: %s", numRua);
                             printf("\n Cidade..: %s", nomeCidade);
                             printf("\n Estado..: %s", nomeEstado);
                             printf("\n**********************************\n\n");
                             printf("\n******************CARRINHO DE COMPRAS*********************");
  
                                for(i=0;i<TAMANHO; i++)
                                {
                                  if(vetCarrinho[i].idCarrinho != -1)
                                  {
                                    printf("\n***************************************");
                                    printf("\nIdentificador : %d", vetCarrinho[i].idCarrinho);
                                    printf("\nNome          : %s", vetCarrinho[i].nomeCarrinho);
                                    printf("\nPreço unitário: %.2f", vetCad[i].precoProd);   
                                    printf("\nQtd           : %.0f", vetCarrinho[i].qtdCarrinho);               
                                  }
                                }
                            resp = VERD;
                            totalCarrinho();
                             printf("\n\n*************************MÉTODO DE PAGAMENTO*********************\n");
                             printf("\n                        PIX                                  \n");
                             printf("\n\n*************************DADOS DO PIX*********************\n");
                             printf("\n Código PIX..: brpetsfinanceiro@brpets.com\n");
                             printf("\n\n\nDeseja finalizar sua compra? (1-Sim 2-Não)...: ");
                             scanf("%d", &opcao);
                             if (opcao==1)
                             {
                                printf("\n\n*************************COMPRA FINALIZADA COM SUCESSO*********************\n");
                                printf("\nDeseja retornar ao site? (1-Sim 2-Não)...: ");
                                scanf("%d", &opcao1);
                                if (opcao1==1)
                                {
                                  menuCliente();
                                }
                                else
                                {
                                  exit(0);
                                }
                             }
                             else
                             {
                                printf("\nRetornando ao menu do cliente.");
                                system("pause");
                                menuCliente();
                             }                            
                             break;

                            default: 
                             printf("\nOpção inválida!\n");
                             system("pause");
                             system("cls");
                             menuCliente();
                          }
}


// Função cadastroCliente
 int cadastroCliente()
    {                    
      int i, opcao, opcao1, respClientefinal;
      int resp = FALSO;       
                printf("\n********Dados cadastrados atuais*********\n");
                printf("\n Nome..: %s", nomeCliente);
                printf("\n Documento..: %s", cpfCliente);
                printf("\n Telefone..: %s", telefoneCliente);
                printf("\n CEP..: %s", cepCliente);
                printf("\n Rua..: %s", nomeRua);
                printf("\n Número..: %s", numRua);
                printf("\n Cidade..: %s", nomeCidade);
                printf("\n Estado..: %s", nomeEstado);
                printf("\n**********************************\n");
                printf("\nOs dados cadastrados estão corretos?\n\n");
                printf("1 - Sim\n");
                printf("2 - Não\n");
                printf("Opção:");
                scanf("%d", &respClientefinal);
                if (respClientefinal==1)
                {
                  menuPag();
                }
                else
                {
                printf("\nPara finalizar a compra é necessário realizar o cadastro. Deseja fazer isso agora?\n");
                printf("1 - Sim\n");
                printf("2 - Não\n");
                printf("Opção:");
                scanf("%d", &confirmaCad);
                    if (confirmaCad==1)
                    {
                      novoCad();
                      menuPag();
                    }
                    else
                    {
                    printf("Voltando ao Menu Anterior\n");
                    system("pause");
                    system("cls");
                    menuCliente();                     
                    }
                }
 
    return (0);
    }

// F U N Ç Õ E S  C A D A S T R O   P E T B O X

 int inicializarCadPetbox(){
  int resp = FALSO;
  int i;
  for(i=0;i<6; i++){
  vetCad[i].id = -1;
  }
  resp = VERD;
  return resp;
  }


int entradaCadPetbox(int pos){ // posição livre para a inclusão
   int resp = FALSO;
   printf("\n----------------------------------------Inclusão de novo produto------------------------------------------");
   printf("\nIdentificador: %d", pos);
   vetCad[pos].id = pos;
   printf("\nNome da PETBOX        : ");
   scanf("%s", vetCad[pos].nomeProd); // não vai poder ter espaço no nome
   limpa_linha();
   printf("\nProduto 1        : ");
   scanf("%s", vetCad[pos].nomeProd1); // não vai poder ter espaço no nome
   limpa_linha();
   printf("\nProduto 2        : ");
   scanf("%s", vetCad[pos].nomeProd2); // não vai poder ter espaço no nome
   limpa_linha();
   printf("\nProduto 3        : ");
   scanf("%s", vetCad[pos].nomeProd3); // não vai poder ter espaço no nome
   limpa_linha();
   printf("\nProduto 4        : ");
   scanf("%s", vetCad[pos].nomeProd4); // não vai poder ter espaço no nome
   limpa_linha();
   printf("\nProduto 5        : ");
   scanf("%s", vetCad[pos].nomeProd5); // não vai poder ter espaço no nome
   limpa_linha();
   printf("\nPreço       : ");
   scanf("%f", &vetCad[pos].precoProd);  
   limpa_linha();
   printf("\nEstoque     : ");
   scanf("%f", &vetCad[pos].estoqueProd); 
   resp = VERD;
   return resp;
}

int listarCadPetbox(){
  int resp = FALSO;
  int i;
  for(i=0;i<6; i++){
    if(vetCad[i].id != -1){
      printf("\n------------------------------------------Listagem de produtos -------------------------------------------");
      printf("\nIdentificador: %d", vetCad[i].id);
      printf("\nNome da Petbox        : %s", vetCad[i].nomeProd);
      printf("\nProduto 1: %s\nProduto 2: %s\nProduto 3: %s\nProduto 4: %s\nProduto 5: %s", vetCad[i].nomeProd1, vetCad[i].nomeProd2, vetCad[i].nomeProd3, vetCad[i].nomeProd4, vetCad[i].nomeProd5);
      printf("\nPreço       : %.2f", vetCad[i].precoProd);    
        printf("\nEstoque     : %.0f", vetCad[i].estoqueProd);          
   }
 }
 resp = VERD;
 return resp;
}

int listarClientePetbox(){
  int resp = FALSO;
  int i;
  for(i=0;i<6; i++){
    if(vetCad[i].id != -1){
      printf("\n------------------------------------------Listagem de produtos -------------------------------------------");
      printf("\nIdentificador : %d", vetCad[i].id);
      printf("\nNome da Petbox: %s", vetCad[i].nomeProd);
      printf("\nProduto 1: %s\nProduto 2: %s\nProduto 3: %s\nProduto 4: %s\nProduto 5: %s", vetCad[i].nomeProd1, vetCad[i].nomeProd2, vetCad[i].nomeProd3, vetCad[i].nomeProd4, vetCad[i].nomeProd5);
      printf("\nPreço unitário: %.2f", vetCad[i].precoProd);    
        printf("\nQtd         : %.0f", vetCarrinho[i].qtdCarrinho);                 
   }
 }
 
resp = VERD;
return resp;
}

int buscarCadPetbox(int pos){
  int resp = FALSO;
  printf("\n-------------------------------------------Busca por produtos---------------------------------------------");
  printf("\nIdentificador: %d", vetCad[pos].id);
  printf("\nNome         : %s", vetCad[pos].nomeProd);
  printf("\nPreço       : %.2f", vetCad[pos].precoProd);   
  printf("\nEstoque     : %.0f", vetCad[pos].estoqueProd);               
           
  resp = VERD;
  return resp;
}


int incluirCadPetbox(){
  int resp = FALSO;
  int i;
  int posicao=-1;
  for(i=0;i<6; i++){// verificar se tem espaço
    if(vetCad[i].id==-1){
    posicao = i;
    break;
    }
  }
  if(posicao!=-1) {
  if(entradaCadPetbox(posicao)){
    resp = VERD;
    }
  }else {
  resp =  FALSO;
  }
  return resp;
}

int alterarCadPetbox(){
  int resp = FALSO;
  int pos=-1;
  char confirma;
  listarCadPetbox();
  printf("\n------------------------------------------Alteração de produtos ------------------------------------------");
  printf("\nQual é o identificador do Produto?");
  scanf("%d", &pos);
  fflush(stdin);// limpeza do buffer do teclado para nãopular leituras
  if(buscarCadPetbox(pos)){
  printf("\nDeseja Alterar este Registro do Produto [s/n]?");
    scanf("%c", &confirma);
    if(confirma=='s' || confirma == 'S'){
    entradaCadPetbox(pos);
    resp = VERD;
    }
  }
  return resp;
}

int excluirCadPetbox(){
  int resp = FALSO;
  int pos=-1;
  char confirma;
  listarCadPetbox();
  printf("\n------------------------------------------Exclusão de produtos--------------------------------------------");
  printf("\nQual é o identificador do Registro do Produto?");
  scanf("%d", &pos);
  fflush(stdin);// limpeza do buffer do teclado para nãopular leituras
  if(buscarCadPetbox(pos)){
  printf("\nConfirma a EXCLUSÃO do Registro do Produto [s/n]?");
  scanf("%c", &confirma);
    if(confirma=='s' || confirma == 'S'){
    vetCad[pos].id = -1;
    resp = VERD;
    }
  }
  return resp;
}




// F U N Ç Õ E S  C A D A S T R O   P R O D

// Função inicializarCad
 int inicializarCad(){
  int resp = FALSO;
  int i;
  for(i=0;i<TAMANHO; i++){
  vetCad[i].id = -1;
  }
  resp = VERD;
  return resp;
  }

//Função entradaCad()
int entradaCad(int pos){ // posição livre para a inclusão
   int resp = FALSO;
   printf("\n----------------------------------------Inclusão de novo produto------------------------------------------");
   printf("\nIdentificador: %d", pos);
   vetCad[pos].id = pos;
   printf("\nNome        : ");
   scanf("%s", vetCad[pos].nomeProd); // não vai poder ter espaço no nome
   limpa_linha();
   printf("\nPreço       : ");
   scanf("%f", &vetCad[pos].precoProd);  
   limpa_linha();
   printf("\nEstoque     : ");
   scanf("%f", &vetCad[pos].estoqueProd); 
   resp = VERD;
   return resp;
}

//FunçãoCad
int listarCad(){
  int resp = FALSO;
  int i;
  for(i=6;i<TAMANHO; i++){
    if(vetCad[i].id != -1){
      printf("\n------------------------------------------Listagem de produtos -------------------------------------------");
      printf("\nIdentificador: %d", vetCad[i].id);
      printf("\nNome         : %s", vetCad[i].nomeProd);
      printf("\nPreço       : %.2f", vetCad[i].precoProd);    
      printf("\nEstoque     : %.0f", vetCad[i].estoqueProd);          
   }
 }
 resp = VERD;
 return resp;
}

//Função listarCliente
int listarCliente(){
  int resp = FALSO;
  int i;
  for(i=6;i<TAMANHO; i++){
    if(vetCad[i].id != -1){
      printf("\n------------------------------------------Listagem de produtos -------------------------------------------");
      printf("\nIdentificador: %d", vetCad[i].id);
      printf("\nNome         : %s", vetCad[i].nomeProd);
      printf("\nPreço        : %.2f", vetCad[i].precoProd);   
      printf("\nQtd          : %.0f", vetCarrinho[i].qtdCarrinho);               
   }
 }
 
resp = VERD;
return resp;
}

// buscarCad()
int buscarCad(int pos){
  int resp = FALSO;
  printf("\n-------------------------------------------Busca por produtos---------------------------------------------");
  printf("\nIdentificador: %d", vetCad[pos].id);
  printf("\nNome         : %s", vetCad[pos].nomeProd);
  printf("\nPreço       : %.2f", vetCad[pos].precoProd);   
  printf("\nEstoque     : %.0f", vetCad[pos].estoqueProd);               
           
  resp = VERD;
  return resp;
}

//incluirCad()
int incluirCadProd(){
  int resp = FALSO;
  int i;
  int posicao=-1;
  for(i=6;i<TAMANHO; i++){// verificar se tem espaço
    if(vetCad[i].id==-1){
    posicao = i;
    break;
    }
  }
  if(posicao!=-1) {
  if(entradaCad(posicao)){
    resp = VERD;
    }
  }else {
  resp =  FALSO;
  }
  return resp;
}


// AlterarCad
int alterarCad(){
  int resp = FALSO;
  int pos=-1;
  char confirma;
  listarCad();
  printf("\n------------------------------------------Alteração de produtos ------------------------------------------");
  printf("\nQual é o identificador do Produto?");
  scanf("%d", &pos);
  fflush(stdin);// limpeza do buffer do teclado para nãopular leituras
  if(buscarCad(pos)){
  printf("\nDeseja Alterar este Registro do Produto [s/n]?");
    scanf("%c", &confirma);
    if(confirma=='s' || confirma == 'S'){
    entradaCad(pos);
    resp = VERD;
    }
  }
  return resp;
}

//excluirCad()
int excluirCad(){
  int resp = FALSO;
  int pos=-1;
  char confirma;
  listarCad();
  printf("\n------------------------------------------Exclusão de produtos--------------------------------------------");
  printf("\nQual é o identificador do Registro do Produto?");
  scanf("%d", &pos);
  fflush(stdin);// limpeza do buffer do teclado para nãopular leituras
  if(buscarCad(pos)){
  printf("\nConfirma a EXCLUSÃO do Registro do Produto [s/n]?");
  scanf("%c", &confirma);
    if(confirma=='s' || confirma == 'S'){
    vetCad[pos].id = -1;
    resp = VERD;
    }
  }
  return resp;
}

// F I M  F U N Ç Õ E S  C A D A S T R O 

// F U N Ç Õ E S  C A R R I N H O 
// Função inicializarCarrinho
 int inicializarCarrinho(){
  int resp = FALSO;
  int i;
  for(i=0;i<TAMANHO; i++){
  vetCarrinho[i].idCarrinho = -1;
  }
  resp = VERD;
  return resp;
  }
  
//Função entradaCad()
int entradaCarrinho(int pos){ // posição livre para a inclusão
   int resp = FALSO;
   printf("\nIdentificador: %d", pos);
   vetCarrinho[pos].idCarrinho = pos;
   printf("\nQtd    : ");
   scanf("%f", &vetCarrinho[pos].qtdCarrinho); 
   resp = VERD;
   return resp;
}

//Função listarCliente
int listarCarrinho(){
  int resp = FALSO;
  int i;
  for(i=0;i<TAMANHO; i++){
    if(vetCarrinho[i].idCarrinho != -1){
      printf("\n***************************************");
      printf("\nIdentificador : %d", vetCarrinho[i].idCarrinho);
      printf("\nNome          : %s", vetCarrinho[i].nomeCarrinho);
      printf("\nPreço unitário: %.2f", vetCad[i].precoProd);   
      printf("\nQtd           : %.0f", vetCarrinho[i].qtdCarrinho);               
   }
 }
 resp = VERD;
 return resp;
 printf("\n\nVoltar ao menu inicial.");
 printf("\n\n");
 system("pause");
 menuCliente();
}

// buscarCad()
int buscarCarrinho(int posicao){
  int resp = FALSO;
         
           
  resp = VERD;
  return resp;
}

//incluirCad()
int incluirCarrinho(){
  int resp = FALSO;
  int i;
  int posicao=-1;
  for(i=0;i<TAMANHO; i++){// verificar se tem espaço
    if(vetCarrinho[i].idCarrinho==-1){
    posicao = i;
    break;
    }
  }
  if(posicao!=-1) {
  if(entradaCarrinho(posicao)){
    resp = VERD;
    }
  }else {
  resp =  FALSO;
  }
  return resp;
}

// AlterarCad
int alterarCarrinho(){
  int resp = FALSO;
  int posicao=-1;
  char confirma;
  listarCarrinho();
  printf("\n**************ALTERAÇÃO*********************");
  printf("\nQual é o identificador do Produto?");
  scanf("%d", &posicao);
  fflush(stdin);// limpeza do buffer do teclado para nãopular leituras
  if(buscarCarrinho(posicao)){
  printf("\nDeseja Alterar a quantidade do Produto [s/n]?");
    scanf("%c", &confirma);
    if(confirma=='s' || confirma == 'S'){
    entradaCarrinho(posicao);
    resp = VERD;
    }
  }
  return resp;
}

//excluirCad()
int excluirCarrinho(){
  int resp = FALSO;
  int posicao=-1;
  char confirma;
  listarCarrinho();
  printf("\n**************EXCLUSÃO*********************");
  printf("\nQual é o identificador do Registro do Produto?");
  scanf("%d", &posicao);
  fflush(stdin);// limpeza do buffer do teclado para nãopular leituras
  if(buscarCarrinho(posicao)){
  printf("\nConfirma a EXCLUSÃO do Registro do Produto [s/n]?");
  scanf("%c", &confirma);
    if(confirma=='s' || confirma == 'S'){
    vetCarrinho[posicao].idCarrinho = -1;
    resp = VERD;
    }
  }
  return resp;
}







int totalCarrinho(){
  int resp = FALSO;
  int i;
  float somatorio;
  for(i=0;i<TAMANHO; i++){
    if(vetCarrinho[i].idCarrinho != -1)
    {
     somatorio = somatorio + vetCarrinho[i].totCarrinho;
    }
 }
    printf("\n***************************************");
    printf("\nTotal       : %.2f\n", somatorio); 

 resp = VERD;
 return resp;
 printf("\n\nVoltar ao menu inicial.");
 printf("\n\n");
 system("pause");
 menuCliente();
}






// F I M  F U N Ç Õ E S  C A R R I N H O 

// F U N Ç Õ E S  M E N U

//Função Menu Clube Pet
int menuClube()
{
  system("cls");
  int opcao;
  printf("\n---------------------------------------------------------------------------------------------------------\n");
  printf("|                                                BRPETS                                                 |\n");
  printf("---------------------------------------------------------------------------------------------------------\n");
  printf("| Clube Pet |\n");
  printf("-------------\n");
  printf("1 - Como funciona a PetBox\n");
  printf("2 - Escolha a PetBOX Ideal Para o Seu Pet\n");
  printf("3 - Voltar ao menu\n");
  printf("\n Digite a Opção Desejada [1, 2, 3]: ");
  scanf("%d", &opcao);

  switch (opcao)
  {
    case 1: //como funciona o clube pet
    {
      system("cls");
      printf("\n---------------------------------------------------------------------------------------------------------\n");
      printf("| Como funciona a PetBox                                                                                |\n");
      printf("---------------------------------------------------------------------------------------------------------\n");
      printf("\n         No Clube Pet você recebe, todo mês, uma PetBOX com tudo que o seu bichinho precisa!         \n\n");
      printf("\n                                 PASSOS PARA ADQUIRIR SUA PET BOX                                      \n");
      printf("\n                                        1 - Você escolhe!                                              \n");
      printf("\n         São vários clubes diferentes, e você escolhe a PetBOX que mais combina com o seu pet.         \n");
      printf("\n                                        2 - Nós selecionamos                                           \n"); 
      printf("\n  Nossos especialistas  se encarregam em selecionar os melhores produtos que farão parte de cada PetBOX\n");
      printf("\n                                        3 - Comodidade                                                 \n");
      printf("\n                Todo mês, você recebe a sua PetBOX no conforto da sua casa.                            \n");
      printf("\n                                        4 - Aproveite                                                  \n");
      printf("\n                            O seu bichinho com o melhor do mundo Pet!                                  \n");
      printf("--------------------------------------------------------------------------------------------------------\n\n");
      system("pause");
      system("cls");
      menuClube();
      break;         
    }

    case 2: //menupetbox
    {
      //system("cls"); 
      petboxFixa();
      break;

    }

    case 3: //retornar ao menu cliente
    {
      system("cls");
      menuCliente();
      break;
    }

    default: // erro de digitação
    {
      printf("\nOpção inválida!!!");
      printf("\n\n");
      system("pause");
    }
  }
return(0);
}









int petboxFixa()
{
  int opFixa;
  system("cls");
  printf("\n--------------------------------------------------------------------------------------------------------\n");
  printf("| PETBOX                                                                                               |\n");
  printf("--------------------------------------------------------------------------------------------------------\n");
  printf("\n---------------------------------------PetBox para filhotes---------------------------------------------\n");
  printf("\nIdeal para seu Pet entre 40 dias e 1 ano vida!                                                       \n");
  printf("\n----------------------------------------PetBox para adultos---------------------------------------------\n");
  printf("\nIdeal para seu Pet entre 1 a 7 anos de vida!                                                            \n");
  printf("\n--------------------------------------------PetBox para idosos-------------------------------------------\n");
  printf("\nIdeal para seu Pet com mais de 7 (grande porte) e 12 (pequeno porte) anos de vida!                    \n\n");
  printf("\n\nDeseja conhecer as opções?\n");
  printf("1 - Sim                                                                                                 \n");
  printf("2 - Não                                                                                                  \n");
  scanf("%d", &opFixa);
  printf("\nOpção: ");

switch (opFixa)
  {
    case 1:
    {
    system("cls");
    int idAddCarrinho, i, opcao ;
    float qtdAddCarrinho;
    do
      {
      printf("\n------------------------------------------------OPÇÕES--------------------------------------------------\n\n");
      listarCadPetbox();
      printf("\n--------------------------------------------------------------------------------------------------------\n\n");
      printf("\nDeseja adicionar algum produto ao carrinho..? (1-Sim 0-Não): ");
      scanf("%d", &opcao);
       if (opcao != 1)
        {
        system("cls");
        menuCliente();
        printf("\n---------------------------------------------------------------------------------------------------------\n");
        }
      printf("\nDigite o código IDENTIFICADOR do produto que deseja adicionar ao carrinho: ");
      scanf("%d", &idAddCarrinho);
      printf("\nDigite a quantidade do produto que deseja adicionar ao carrinho..: ");
      scanf("%f", &qtdAddCarrinho);
      i = idAddCarrinho;
            if (idAddCarrinho == vetCad[i].id)
            {
              if (vetCad[i].estoqueProd > qtdAddCarrinho )
              {
              vetCarrinho[i].idCarrinho = vetCad[i].id;
              strcpy (vetCarrinho[i].nomeCarrinho, vetCad[i].nomeProd);
              vetCarrinho[i].precoCarrinho = vetCarrinho[i].precoCarrinho + (vetCad[i].precoProd*qtdAddCarrinho);
              vetCarrinho[i].qtdCarrinho = vetCarrinho[i].qtdCarrinho + qtdAddCarrinho;
              vetCad[i].estoqueProd = vetCad[i].estoqueProd - qtdAddCarrinho;
              vetCarrinho[i].totCarrinho = vetCarrinho[i].totCarrinho + (vetCad[i].precoProd*qtdAddCarrinho);
              printf("---------------------------------------------------------------------------------------------------------\n");
              printf("\n\nProduto adicionado ao carrinho..: ");
              printf("\n\nId: %d\nNome: %s\nPreço unitário: %.2f\nQtd: %.0f", vetCarrinho[i].idCarrinho, vetCarrinho[i].nomeCarrinho,vetCad[i].precoProd,vetCarrinho[i].qtdCarrinho);
              printf("\n---------------------------------------------------------------------------------------------------------\n");
              printf("\nDeseja adicionar mais algum produto ao carrinho..? (1-Sim 0-Não): ");
              scanf("%d", &opcao);
                if (opcao != 1)
                {
                system("cls");
                menuCliente();
                }
              }
              else
              {
                printf("\nQuantidade ultrapassa a quantidade no estoque.");
                system("pause");
                system("cls");
                menuLoja();
              } 
            }
            else 
            {
              printf ("\nCódigo não encontrado.");
              system("pause");
              system("cls");
              menuLoja();
            }
    } while (opcao==1);
      break;
  }
   
      case 2: //retornar menu cliente
      {
      system("cls");
      menuCliente();
      break;
      }

      default: //erro de digitação
      {
      printf("\nOpção inválida!!!");
      printf("\n\n");
      system("pause");
      }
      
    }
  return 0;
}

  
//Função Carrinho
int clienteCarrinho()
{
  int continua = VERD;  // VERD é uma constante que possui o valor 1
  int opcao;
  // menu principal
  do {
  //system("cls");
  printf("---------------------------------------------------------------------------------------------------------\n");
  printf("|                                         Gerenciamento de Carrinho                                     |\n");    
  printf("---------------------------------------------------------------------------------------------------------\n");
  listarCarrinho();
  totalCarrinho();
  printf("\nComo gostaria de continuar?\n");
  printf("\n1 - Finalizar Pedido");
  printf("\n2 - Alterar quantidade de produtos do carrinho");
  printf("\n3 - Excluir produtos do carrinho");
  printf("\n4 - Incluir novo produto\n");
  printf("\nEscolha sua opção [1, 2, 3, 4]: ");
  scanf("%d", &opcao);

  switch(opcao){
  case 1 : 
             novoCad();
             
             break;
 
  case 2 : printf("***** Alteração *****");
             if(alterarCarrinho()){
               printf("\nProduto Alterado!\n");
             } else {
               printf("\nERRO ao Alterar no Carrinho!");
             } 
             break;  
  case 3 : printf("***** Exclusão *****");
             if(excluirCarrinho()){
               printf("\nProduto Excluído!\n");
             } else {
               printf("\nERRO ao Excluir no Carrinho!");
             } 
             break;
  case 4 : printf("***** Saída do Programa *****");
             continua = FALSO;
             break;
  default: printf("\nOpção inválida!!!");
           printf("\n\n");
           system("pause");
  }

  fflush(stdin);// limpeza do buffer do teclado para não pular leituras
 }while(continua);

    
    return 0;
}

// Menu Principal
int menuGlobal()
    {
      int continua = VERD;  // VERD é uma constante que possui o valor 1
      int opcao;
      do 
      {
      system("cls");
      printf("-------------------------------------------------------------------------------------------------------\n");
      printf("--------------------------******   ******  ******   ******* ***********  ******------------------------\n");
      printf("-------------------------*      * *      * *      * *            *      *      ------------------------\n");
      printf("-------------------------*      * *      * *      * *            *      *      ------------------------\n");
      printf("-------------------------*   **   *    *   ******   ******       *       ***** ------------------------\n");
      printf("-------------------------*      * *   *    *        *            *             *-----------------------\n");
      printf("-------------------------*      * *     *  *        *            *             *-----------------------\n");
      printf("--------------------------******  *      * *        *******      *       ******------------------------\n");
      printf("-------------------------------------------------------------------------------------------------------\n");
      printf("\n1 - Administrador");
      printf("\n2 - Cliente");
      printf("\n3 - Fechar Programa\n");
      printf("\nEscolha sua opção [1, 2, 3]:");

      scanf("%d", &opcao);
    
      switch(opcao)
        {
      case 1 :   system("cls");
                menuSup();
                 break;
     
      case 2 :  system("cls");
                menuCliente();
                 break;  
    
      case 3 : printf("***** Saída do Programa *****");
                 exit(0);
                 break;
    
      default: printf("\nOpção inválida!!!");
               printf("\n\n");
               system("pause"); 
         }
      fflush(stdin);// limpeza do buffer do teclado para não pular leituras
     }while(continua);
    }









// Menu Principal
int main()
    {
 // Define o valor das páginas de código UTF8 e default do Windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
 // Define codificação como sendo UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);
    int continua = VERD;  // VERD é uma constante que possui o valor 1
    if(inicializarCad()){
    printf("\nListagem de Produtos Inicializada!");
    } else {
    printf("\nERRO: Listagem de Produtos NÃO Inicializada!");
    }
    if(inicializarCarrinho()){
    printf("\nListagem de Produtos Inicializada!");
    } else {
    printf("\nERRO: Listagem de Produtos NÃO Inicializada!");
    }
   if(inicializarCadPetbox()){
    printf("\nListagem de Produtos Inicializada!");
    } else {
    printf("\nERRO: Listagem de Produtos NÃO Inicializada!");
    }
    system("cls");
    menuGlobal();
    return(0);
    }







// Menu Cliente
int menuCliente(){
      int continua = VERD;  // VERD é uma constante que possui o valor 1
      int opcao;
      do 
      {
      system("cls");
    printf("-------------------------------------------------------------------------------------------------------\n");
    printf("--------------------------******   ******  ******   ******* ***********  ******------------------------\n");
    printf("-------------------------*      * *      * *      * *            *      *      ------------------------\n");
    printf("-------------------------*      * *      * *      * *            *      *      ------------------------\n");
    printf("-------------------------*   **   *    *   ******   ******       *       ***** ------------------------\n");
    printf("-------------------------*      * *   *    *        *            *             *-----------------------\n");
    printf("-------------------------*      * *     *  *        *            *             *-----------------------\n");
    printf("--------------------------******  *      * *        *******      *       ******------------------------\n");
    printf("-------------------------------------------------------------------------------------------------------\n\n");
    printf("1 - Conheça a BRPets\n");
    printf("2 - Clube Pet\n");
    printf("3 - Loja\n");
    printf("4 - Carrinho\n");
    printf("5 - Volta ao Menu Anterior\n");
    printf("0 - Sair do Site\n");
    printf("\nEscolha a Opção Desejada [0, 1, 2, 3, 4, 5]: ");

      scanf("%d", &opcao);
    
      switch(opcao)
        {
      case 1 :  
            system("cls");
            printf("\n---------------------------------------------------------------------------------------------------------\n\n");
            printf("|                                                BRPETS                                                 |\n\n");
            printf("---------------------------------------------------------------------------------------------------------\n\n");
            printf("\n A BRPet é uma empresa que surgiu para fazer a relação entre você e seu pet ser melhor a cada dia!     \n");
            printf("\n Somos apaixonados por pets e , por isso, a nossa loja foi preparada e organizada para você encontrar  \n"); 
            printf("\n facilmente o que procura a qualquer hora e em qualquer lugar.                                         \n");
            printf("\n Os nossos principais produtos são as PetBOX, uma maneira inovadora de ter todo mês na sua casa tudo   \n");
            printf("\n que seu pet precisa.                                                                                  \n");   
            printf("\n Faça parte do nosso Clube Pet  e aproveite o que há de melhor no mundo pet!                           \n");
            printf("---------------------------------------------------------------------------------------------------------\n\n");
            system("pause");
            system("cls");
            menuCliente();
            break;
     
      case 2 :  system("cls");//clubepet
                    menuClube();
                 break;  
      
      case 3 :  system("cls");//loja
                    menuLoja();
                 break;       
     
      case 4 :  system("cls");//carrinho
                    clienteCarrinho();
                break;

      case 5 :  system("cls");//retornar ao menu anterior
              menuGlobal();
                break;  
    case 0:
            exit(0);
    
      default: printf("\nOpção inválida!!!");
                   printf("\n\n");
                 system("pause");   
         }
      fflush(stdin);// limpeza do buffer do teclado para não pular leituras
     }while(continua);
    }   

//Menu Loja

int menuLoja()
{
int idAddCarrinho, i, opcao ;
float qtdAddCarrinho;
do
{
  printf("Produtos da loja: \n");
  listarCad();
  printf("\n---------------------------------------------------------------------------------------------------------\n");
  printf("\nDeseja adicionar algum produto ao carrinho? (1-Sim 0-Não): ");
  scanf("%d", &opcao);
  if (opcao != 1)
  {
    system("cls");
    menuCliente();
  }
  
  printf("\nDigite o código IDENTIFICADOR do produto que deseja adicionar ao carrinho: ");
  scanf("%d", &idAddCarrinho);
  printf("\nDigite a quantidade do produto que deseja adicionar ao carrinho: ");
  scanf("%f", &qtdAddCarrinho);
  i = idAddCarrinho;
        if (idAddCarrinho == vetCad[i].id)
        {
          if (vetCad[i].estoqueProd > qtdAddCarrinho )
          {
          vetCarrinho[i].idCarrinho = vetCad[i].id;
          strcpy (vetCarrinho[i].nomeCarrinho, vetCad[i].nomeProd);
          vetCarrinho[i].precoCarrinho = vetCarrinho[i].precoCarrinho + (vetCad[i].precoProd*qtdAddCarrinho);
          vetCarrinho[i].qtdCarrinho = vetCarrinho[i].qtdCarrinho + qtdAddCarrinho;
          vetCad[i].estoqueProd = vetCad[i].estoqueProd - qtdAddCarrinho;
          vetCarrinho[i].totCarrinho = vetCarrinho[i].totCarrinho + (vetCad[i].precoProd*qtdAddCarrinho);
          printf("---------------------------------------------------------------------------------------------------------\n");
          printf("\n\nProduto adicionado ao carrinho..: ");
          printf("\n\nId: %d\nNome: %s\nPreço unitário: %.2f\nQtd: %.0f", vetCarrinho[i].idCarrinho, vetCarrinho[i].nomeCarrinho,vetCad[i].precoProd,vetCarrinho[i].qtdCarrinho);
          printf("\n---------------------------------------------------------------------------------------------------------\n");
          printf("\nDeseja adicionar mais algum produto ao carrinho..? (1-Sim 0-Não): ");
          scanf("%d", &opcao);
            if (opcao != 1)
            {
             system("cls");
             menuCliente();
            }
          }
          else
          {
            printf("\nQuantidade ultrapassa a quantidade no estoque.");
            system("pause");
            system("cls");
            menuLoja();
          } 
        }
        else 
        {
          printf ("\nCódigo não encontrado.");
          system("pause");
          system("cls");
          menuLoja();
        }
} while (opcao==1);
system("pause");
system("cls");
menuCliente();
return 0;
}

// Menu Cadastro Petbox
int menuCadPetbox()
{
  int continua = VERD;  // VERD é uma constante que possui o valor 1
  int opcao;
  system("cls");
  // menu principal
  do {
  printf("-------------------------------------------------------------------------------------------------------------\n");
  printf("|                                         Gerenciamento de Petbox                                           |\n");    
  printf("--------------------------------------------------------------------------------------------------------------\n");
  printf("\nListagem de Produtos\n");
  printf("\n1 - Inclusão");
  printf("\n2 - Alteração");
  printf("\n3 - Exclusão");
  printf("\n4 - Listar");
  printf("\n5 - Voltar ao Menu Anterior\n");
  printf("\nEscolha sua opção [1, 2, 3, 4, 5]:");
  scanf("%d", &opcao);

  switch(opcao){
   case 1:  
              if(incluirCadPetbox()){
                    printf("\nProduto Incluído!\n");
              }else {
                printf("\nERRO ao Incluir na Listagem!\n");
              } 
              break;
 
  case 2 : 
             if(alterarCadPetbox()){
               printf("\nProduto Alterado!\n");
             } else {
               printf("\nERRO ao Alterar na Listagem!\n");
             } 
             break;  

  case 3 : 
             if(excluirCadPetbox()){
               printf("\nProduto Excluído!\n");
             } else {
               printf("\nERRO ao Excluir na Listagem!\n");
             } 
             break;

  case 4 : 
             if(listarCadPetbox()){
               printf("\nListagem de Produtos!\n");
             } else {
               printf("\nERRO ao Listar o Produto!\n");
             } 
             break;

  case 5 :  system("cls");
            menuSup();
            break;

  default: printf("\nOpção inválida!!!");
           printf("\n\n");
           system("pause");
  }
  fflush(stdin);// limpeza do buffer do teclado para não pular leituras*/
 }while(continua);
  return (0);
}



// Menu Cadastro Prod
int menuCadProd() {
  int continua = VERD;  // VERD é uma constante que possui o valor 1
  int opcao;
  system("cls");
  // menu principal
  do {
  printf("-------------------------------------------------------------------------------------------------------------\n");
  printf("|                                         Gerenciamento de Produtos                                           |\n");  
  printf("--------------------------------------------------------------------------------------------------------------\n");
  printf("\nListagem de Produtos\n");
  printf("\n1 - Inclusão");
  printf("\n2 - Alteração");
  printf("\n3 - Exclusão");
  printf("\n4 - Listar");
  printf("\n5 - Voltar ao Menu Anterior\n");
  printf("\nEscolha sua opção [1, 2, 3, 4, 5]:");
  scanf("%d", &opcao);

  switch(opcao){
   case 1:  
              if(incluirCadProd()){
                    printf("\nProduto Incluído!\n");
              }else {
                printf("\nERRO ao Incluir na Listagem!\n");
              } 
              break;
 
  case 2 : 
             if(alterarCad()){
               printf("\nProduto Alterado!\n");
             } else {
               printf("\nERRO ao Alterar na Listagem!\n");
             } 
             break;  

  case 3 : 
             if(excluirCad()){
               printf("\nProduto Excluído!\n");
             } else {
               printf("\nERRO ao Excluir na Listagem!\n");
             } 
             break;

  case 4 : 
             if(listarCad()){
               printf("\nListagem de Produtos!\n");
             } else {
               printf("\nERRO ao Listar o Produto!\n");
             } 
             break;

  case 5 :  system("cls");
            menuSup();
            break;

  default: printf("\nOpção inválida!!!");
           printf("\n\n");
           system("pause");
           menuCadProd();
  }
  fflush(stdin);// limpeza do buffer do teclado para não pular leituras
 }while(continua);  
    return (0);
}

int menuSup()
{
  system("cls");
  int continua = VERD;  // VERD é uma constante que possui o valor 1
  int opcao;
   printf("-------------------------------------------------------------------------------------------------------------\n");
  printf("|                                         Gerenciamento de Produtos                                           |\n");  
  printf("--------------------------------------------------------------------------------------------------------------\n");
  printf("\nListagem de Produtos\n");
  printf("\n1 - Produtos");
  printf("\n2 - PetBox");
  printf("\n3 - Voltar ao Menu Anterior\n");
  printf("\nEscolha sua opção [1, 2, 3]:");
  scanf("%d", &opcao); 
switch(opcao)
  {
   case 1:  system("cls");
              menuCadProd();
              break;
 
  case 2 : system("cls");
             menuCadPetbox();
             break;  

  case 3 :  system("cls");
                menuGlobal();
            break;

  default: printf("\nOpção inválida!!!");
           printf("\n\n");
           system("pause");
           menuSup();

  }
    return (0);
}

// F I M  F U N Ç Õ E S  M E N U

// F I M   F U N Ç Õ E S 