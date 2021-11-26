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


#define TAMANHO 5
#define VERD 1
#define FALSO 0

  	char nomeCliente[100], nomeRua[100], nomeCidade[100], nomeEstado[100], telefoneCliente[20];
  	int respCliente, confirmaCad;
  	float cepCliente, cpfCliente;
 


 /* struct data{
    int dia;
    int mes;
    int ano;
  }; vetData;*/

 /* struct cliente{
  	char nomeCliente[100], endCliente[100], telefoneCliente[20];
  	struct data dataNascCliente;
  	float ;
  }; vetCliente;
*/


// S T R U C T S


//struct cadastro
  struct produtos{
  	int id; // -1 indica que a posição do elemento no vetor está vazia
    char nomeProd[100];
   // struct data dataNasc;
   // char telefone[20];
    float precoProd, estoqueProd;
  } vetCad[TAMANHO];


//struct carrinho
  struct carrinho{
  	int idCarrinho; // -1 indica que a posição do elemento no vetor está vazia
    char nomeCarrinho[100];
   // struct data dataNasc;
   // char telefone[20];
    float precoCarrinho, qtdCarrinho;
  } vetCarrinho[TAMANHO];
  

// FIM STRUCTS



 
//F U N Ç Õ E S 
  
// Função Limpar Buffer
void limpa_linha()
{
    scanf("%*[^\n]");
    scanf("%*c");
}


// Função cadastroCliente
 int cadastroCliente()
	{
				system("cls");
				printf("\n\n---------------------------------------------------------------------------------------------------------\n\n");
				printf("|                                         Cadastro do Cliente                                               |\n\n");	
				printf("---------------------------------------------------------------------------------------------------------\n\n");
				printf("Cadastro Atual..:\n");
				printf ("\n Nome do Cliente..: %s\n Telefone..: %s\n Rua..: %s\n Cidade..: %s\n Estado..: %s", nomeCliente, telefoneCliente, nomeRua, nomeCidade, nomeEstado);
				printf ("\n CEP..: %.0f", cepCliente);
				
				printf("\n\n Deseja realizar um novo cadastro (1-Sim  2-Não)..: ");
				scanf("%d", &confirmaCad);
				if (confirmaCad==1)
				{
					do 
					{
					printf("\n\n Digite seu nome completo: ");
					gets(nomeCliente);
					limpa_linha();
					printf("\n Digite o seu documento: ");
					scanf("%f", &cpfCliente);
					printf("\n Digite o seu teletone (apenas números): ");
					gets(telefoneCliente);
					limpa_linha();
					printf("\n Digite a sua rua e número: ");
					gets(nomeRua);
					limpa_linha();
					printf("\n Digite a sua cidade: ");
					gets(nomeCidade);
					limpa_linha();
					printf("\n Digite o seu estado: ");
					gets(nomeEstado);
					limpa_linha();
					printf("\n Digite o seu CEP (apenas números)..: ");
					scanf("%f", &cepCliente);
				
					printf ("\n Nome do Cliente..: %s\n Telefone..: %s\n Rua..: %s\n Cidade..: %s\n Estado..: %s", nomeCliente, telefoneCliente, nomeRua, nomeCidade, nomeEstado);
					printf ("\n CEP..: %.0f", cepCliente);
					
					printf("\n\n Cadastro de cliente completo. \n Deseja confirmar os dados e voltar ao menu inicial?\n (1-Sim  2-Não)..: ");
					scanf("%d", &respCliente);
				//	system("cls");
				//	menuCliente();
					} while (respCliente==2);
				}
				else 
				{
					printf("Voltando ao Menu Anterior.");
					system("pause");
					system("cls");
				    menuCliente();
				}
    return (0);
	}


// F U N Ç Õ E S  C A D A S T R O 

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
  //printf("\nData Nasc - DDMMAAAA  :");
  // scanf("%d %d %d", &vetAgenda[pos].dataNasc.dia, 
  //       &vetAgenda[pos].dataNasc.mes, &vetAgenda[pos].dataNasc.ano);
  // printf("\nTelefone     :");
  // scanf("%s", vetAgenda[pos].telefone);
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
  for(i=0;i<TAMANHO; i++){
    if(vetCad[i].id != -1){
      printf("\n------------------------------------------Listagem de produtos -------------------------------------------");
      printf("\nIdentificador: %d", vetCad[i].id);
      printf("\nNome         : %s", vetCad[i].nomeProd);
    //  printf("\nData Nasc.   : %02d/%02d/%04d", vetAgenda[i].dataNasc.dia, 
    //        vetAgenda[i].dataNasc.mes, vetAgenda[i].dataNasc.ano);
    //  printf("\nTelefone     : %s", vetAgenda[i].telefone);
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
  for(i=0;i<TAMANHO; i++){
    if(vetCad[i].id != -1){
      printf("\n------------------------------------------Listagem de produtos -------------------------------------------");
      printf("\nIdentificador: %d", vetCad[i].id);
      printf("\nNome         : %s", vetCad[i].nomeProd);
    //  printf("\nData Nasc.   : %02d/%02d/%04d", vetAgenda[i].dataNasc.dia, 
    //        vetAgenda[i].dataNasc.mes, vetAgenda[i].dataNasc.ano);
    //  printf("\nTelefone     : %s", vetAgenda[i].telefone);
      printf("\nPreço       : %.2f", vetCad[i].precoProd);   
	  printf("\nEstoque     : %.0f", vetCad[i].estoqueProd);               
   }
 }
 printf("\n\nVoltar ao menu inicial.");
 printf("\n\n");
 system("pause");

resp = VERD;
return resp;
}


// buscarCad()
int buscarCad(int pos){
  int resp = FALSO;
  printf("\n-------------------------------------------Busca por produtos---------------------------------------------");
  printf("\nIdentificador: %d", vetCad[pos].id);
  printf("\nNome         : %s", vetCad[pos].nomeProd);
 // printf("\nData Nasc.   : %02d/%02d/%04d", vetAgenda[pos].dataNasc.dia, 
 //            vetAgenda[pos].dataNasc.mes, vetAgenda[pos].dataNasc.ano);
 // printf("\nTelefone     : %s", vetAgenda[pos].telefone);
  printf("\nPreço       : %.2f", vetCad[pos].precoProd);   
  printf("\nEstoque     : %.0f", vetCad[pos].estoqueProd);               
           
  resp = VERD;
  return resp;
}

//incluirCad()
int incluirCad(){
  int resp = FALSO;
  int i;
  int posicao=-1;
  for(i=0;i<TAMANHO; i++){// verificar se tem espaço
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

/*
// F U N Ç Õ E S  C A R R I N H O 
// Função inicializarCad
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
   printf("\n**********Inclusão de novo produto!********");
   printf("\nIdentificador: %d", pos);
   vetCarrinho[pos].idCarrinho = pos;
   printf("\nNome        : ");
   scanf("%s", vetCarrinho[pos].nomeCarrinho); // não vai poder ter espaço no nome
  //printf("\nData Nasc - DDMMAAAA  :");
  // scanf("%d %d %d", &vetAgenda[pos].dataNasc.dia, 
  //       &vetAgenda[pos].dataNasc.mes, &vetAgenda[pos].dataNasc.ano);
  // printf("\nTelefone     :");
  // scanf("%s", vetAgenda[pos].telefone);
   printf("\nPreço       : ");
   scanf("%f", &vetCarrinho[pos].precoCarrinho);  
   printf("\nEstoque     : ");
   scanf("%f", &vetCarrinho[pos].qtdCarrinho); 
   resp = VERD;
   return resp;
}
//Função ListarCad
int listarCarrinho(){
  int i;
  for(i=0;i<TAMANHO; i++){
    if(vetCad[i].id != -1){
      printf("\n***************************************");
      printf("\nIdentificador: %d", vetCad[i].id);
      printf("\nNome         : %s", vetCad[i].nomeProd);
      printf("\nPreço       : %.2f", vetCad[i].precoProd);   
	  printf("\nEstoque     : %.0f", vetCad[i].estoqueProd);               
   }
  int resp = FALSO;
  //int i;
  for(i=0;i<TAMANHO; i++){
    if(vetCarrinho[i].idCarrinho != -1){
      printf("\n***************************************");
      printf("\nIdentificador: %d", vetCarrinho[i].idCarrinho);
      printf("\nNome         : %s", vetCarrinho[i].nomeCarrinho);
    //  printf("\nData Nasc.   : %02d/%02d/%04d", vetAgenda[i].dataNasc.dia, 
    //        vetAgenda[i].dataNasc.mes, vetAgenda[i].dataNasc.ano);
    //  printf("\nTelefone     : %s", vetAgenda[i].telefone);
      printf("\nPreço       : %.2f", vetCarrinho[i].precoCarrinho);    
	  printf("\nEstoque     : %.0f", vetCarrinho[i].qtdCarrinho);          
   }
 }
 resp = VERD;
 return resp;
}
//Função listarCliente
int listarCarrinho(){
  int i;
  for(i=0;i<TAMANHO; i++){
    if(vetCarrinho[i].id != -1){
      printf("\n***************************************");
      printf("\nIdentificador: %d", vetCarrinho[i].idCarrinho);
      printf("\nNome         : %s", vetCarrinho[i].nomeCarrinho);
    //  printf("\nData Nasc.   : %02d/%02d/%04d", vetAgenda[i].dataNasc.dia, 
    //        vetAgenda[i].dataNasc.mes, vetAgenda[i].dataNasc.ano);
    //  printf("\nTelefone     : %s", vetAgenda[i].telefone);
      printf("\nPreço       : %.2f", vetCarrinho[i].precoCarrinho);   
	  printf("\nEstoque     : %.0f", vetCarrinho[i].estoqueCarrinho);               
   }
 }
 printf("\n\nVoltar ao menu inicial.");
 printf("\n\n");
 system("pause");
 menuCliente();
}
// buscarCad()
int buscarCarrinho(int pos){
  int resp = FALSO;
  int i;
  printf("\n***************************************");
  printf("\nIdentificador: %d", vetCarrinho[pos].idCarrinho);
  printf("\nNome         : %s", vetCarrinho[pos].nomeCarrinho);
 // printf("\nData Nasc.   : %02d/%02d/%04d", vetAgenda[pos].dataNasc.dia, 
 //            vetAgenda[pos].dataNasc.mes, vetAgenda[pos].dataNasc.ano);
 // printf("\nTelefone     : %s", vetAgenda[pos].telefone);
  printf("\nPreço       : %.2f", vetCarrinho[pos].precoCarrinho);   
  printf("\nEstoque     : %.0f", vetCarrinho[pos].qtdCarrinho);               
           
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
  int pos=-1;
  char confirma;
  listarCarrinho();
  printf("\n**************ALTERAÇÃO*********************");
  printf("\nQual é o identificador do Produto?");
  scanf("%d", &pos);
  fflush(stdin);// limpeza do buffer do teclado para nãopular leituras
  if(buscarCarrinho(pos)){
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
int excluirCarrinho(){
  int resp = FALSO;
  int pos=-1;
  char confirma;
  listarCarrinho();
  printf("\n**************EXCLUSÃO*********************");
  printf("\nQual é o identificador do Registro do Produto?");
  scanf("%d", &pos);
  fflush(stdin);// limpeza do buffer do teclado para nãopular leituras
  if(buscarCarrinho(pos)){
  printf("\nConfirma a EXCLUSÃO do Registro do Produto [s/n]?");
  scanf("%c", &confirma);
    if(confirma=='s' || confirma == 'S'){
    vetCarrinho[pos].idCarrinho = -1;
    resp = VERD;
    }
  }
  return resp;
}
// F I M  F U N Ç Õ E S  C A R R I N H O 
*/
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
      menuPetbox();
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

//Função Menu Pet Box
int menuPetbox()
{
  int opmenuPetbox;
  printf("\n--------------------------------------------------------------------------------------------------------\n");
  printf("| Escolha a PetBOX ideal para o seu Pet                                                                |\n");
  printf("--------------------------------------------------------------------------------------------------------\n");
  printf("1 - PetBox Fixa\n");
  printf("2 - PetBox Escolha\n");
  printf("3 - Retornar ao Menu Principal\n");
  printf("\n Digite a Opção Desejada [1, 2, 3]: ");
    scanf("%d",&opmenuPetbox);

   
  switch (opmenuPetbox)
  {
    case 1: //petbox fixa
    {
    system("cls");
    petboxFixa();
    break;
    }
   
    case 2: //petbox escolha
    {
    system("cls");
    //petboxEscolha();
    break;
    }

    case 3: //retornar menu cliente
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
  return(0);
}

//Função Petbox Fixa
int petboxFixa()
{
  int opFixa;
  system("cls");
  printf("\n--------------------------------------------------------------------------------------------------------\n");
  printf("| PetBox Fixa                                                                                          |\n");
  printf("--------------------------------------------------------------------------------------------------------\n");
  printf("\n---------------------------------------PetBox para filhotes---------------------------------------------\n");
  printf("\nIdeal para seu Pet entre 40 dias e 1 ano vida!                                                       \n");
  printf("\n----------------------------------------PetBox para adultos---------------------------------------------\n");
  printf("\nIdeal para seu Pet entre 1 a 7 anos de vida!                                                            \n");
  printf("\n--------------------------------------------PetBox para idosos-------------------------------------------\n");
  printf("\nIdeal para seu Pet com mais de 7 (grande porte) e 12 (pequeno porte) anos de vida!                    \n\n");
  printf("Deseja conhecer as opções?\n");
  printf("1 - Sim                                                                                                 \n");
  printf("2 - Não                                                                                                  \n");
  scanf("%d", &opFixa);
  printf("\nOpção: ");





switch (opFixa)
  {
    case 1:
    {
    system("cls");
    printf("\n------------------------------------------------OPÇÕES--------------------------------------------------\n\n");

    listarCliente();




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

    
    
  




  
      



/*
        if (opValor==1)
        {
            printf("--------------------------------------------------------------------------------------------------------\n\n");
            printf("Você escolheu: PetBox Standard - Tamanho P - Para cães filhotes\n\n");
            printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[0], prodPreco[0]); 
            printf("Deseja adicionar ao carinho de compras?\n");
            printf("1 - Sim                                                                                                 \n");
            printf("2 - Não                                                                                                 \n");
            printf("\nOpção: ");
            scanf("%d", &carrinhoCaoFilhotes1);  



  */
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
  printf("\n\n---------------------------------------------------------------------------------------------------------\n\n");
  printf("|                                         Gerenciamento de Carrinho                                               |\n\n");	
  printf("---------------------------------------------------------------------------------------------------------\n\n");
  printf("\nListagem de Produtos.");
  printf("\n1 - Inclusão.");
  printf("\n2 - Alteração.");
  printf("\n3 - Exclusão.");
  printf("\n4 - Listar.");
  printf("\n5 - Voltar ao Menu Anterior.");
  printf("\nEscolha sua opção [1, 2, 3, 4, 5]:");
  scanf("%d", &opcao);
/*
  switch(opcao){
  case 1 : printf("***** Inclusão *****");
             if(incluirCarrinho()){
                printf("\nProduto Incluído!");
             } else {
                printf("\nERRO ao Incluir no Carrinho!");
             } 
             break;
 
  case 2 : printf("***** Alteração *****");
             if(alterarCarrinho()){
               printf("\nProduto Alterado!");
             } else {
               printf("\nERRO ao Alterar no Carrinho!");
             } 
             break;  
  case 3 : printf("***** Exclusão *****");
             if(excluirCarrinho()){
               printf("\nProduto Excluído!");
             } else {
               printf("\nERRO ao Excluir no Carrinho!");
             } 
             break;
  case 4 : printf("***** Listagem *****");
             if(listarCarrinho()){
               printf("\nListagem de Produtos!");
             } else {
               printf("\nERRO ao Listar o Produto!");
             } 
             break;
  case 5 : printf("***** Saída do Programa *****");
             continua = FALSO;
             break;
  default: printf("\nOpção inválida!!!");
  		   printf("\n\n");
     	   system("pause");
;
  }
*/
  fflush(stdin);// limpeza do buffer do teclado para não pular leituras
 }while(continua);

	
	return 0;
}

// Menu Principal
int main()
	{
    // Define o valor das páginas de código UTF8 e default do Windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    // Define codificação como sendo UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);

    //setlocale(LC_ALL, "Portuguese");
	  int continua = VERD;  // VERD é uma constante que possui o valor 1
	  if(inicializarCad()){
	  printf("\nListagem de Produtos Inicializada!");
	  } else {
	  printf("\nERRO: Listagem de Produtos NÃO Inicializada!");
	  }
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
	             continua = FALSO;
	             break;
	
	  default: printf("\nOpção inválida!!!");
 	 		   printf("\n\n");
    	 	   system("pause");	
	 	 }
	  fflush(stdin);// limpeza do buffer do teclado para não pular leituras
	 }while(continua);
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
    printf("4 - Ofertas\n");
    printf("5 - Carrinho\n");
    printf("6 - Volta ao Menu Anterior\n");
    printf("0 - Sair do Site\n");
    printf("\nEscolha a Opção Desejada [0, 1, 2, 3, 4, 5, 6]: ");

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
	 
	  case 2 : 	system("cls");//clubepet
	  			    menuClube();
	             break;  
	  
	  case 3 : 	system("cls");//loja
	  			  //menuLoja();
	             break;  	  
	 
	  case 4 : 	system("cls");//ofertas
	  			  //menuOfertas();
	            break;  	
	 
	  case 5 : 	system("cls");//carrinho
  				    clienteCarrinho();
            	break;

	  case 6 : 	system("cls");//retornar ao menu anterior
              main();
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

// Menu Cadastro Produtos
int menuSup() {
  int continua = VERD;  // VERD é uma constante que possui o valor 1
  int opcao;
  // menu principal
  do {
  printf("-------------------------------------------------------------------------------------------------------------\n");
  printf("|                                         Gerenciamento de Estoque                                           |\n");	
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
  case 1 :
             if(incluirCad()){
                printf("\nProduto Incluído!\n");
             } else {
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
             if(listarCliente()){
               printf("\nListagem de Produtos!\n");
             } else {
               printf("\nERRO ao Listar o Produto!\n");
             } 
             break;

  case 5 : 	system("cls");
  			main();
            break;

  default: printf("\nOpção inválida!!!");
  		   printf("\n\n");
     	   system("pause");
;

  }
  fflush(stdin);// limpeza do buffer do teclado para não pular leituras
 }while(continua);

	
	return (0);
}

// F I M  F U N Ç Õ E S  M E N U


// F I M   F U N Ç Õ E S 