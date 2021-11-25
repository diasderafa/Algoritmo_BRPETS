#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// declaração de variáveis globais
int menuPrincipal, op, opcao, opBox, opBoxCao, categoriaCaoFilhotes, categoriaCaoAdultos, categoriaCaoIdosos, tamanhoBoxCaoFilhotes1, tamanhoBoxCaoFilhotes2, tamanhoBoxCaoFilhotes3, tamanhoBoxCaoAdultos1, tamanhoBoxCaoAdultos2, tamanhoBoxCaoAdultos3, tamanhoBoxCaoIdosos1, tamanhoBoxCaoIdosos2, tamanhoBoxCaoIdosos3, prodCod[59],prodQtd[59], i, carrinhoCaoFilhotes1, carrinhoCaoFilhotes2, carrinhoCaoFilhotes3, carrinhoCaoFilhotes4, carrinhoCaoFilhotes5, carrinhoCaoFilhotes6, carrinhoCaoFilhotes7, carrinhoCaoFilhotes8, carrinhoCaoFilhotes9,carrinhoCaoFilhotes10, carrinhoCaoFilhotes11, carrinhoCaoFilhotes12, carrinhoCaoFilhotes13, carrinhoCaoFilhotes14, carrinhoCaoFilhotes15, carrinhoCaoFilhotes16, carrinhoCaoFilhotes17, carrinhoCaoFilhotes18, carrinhoCaoFilhotes19, carrinhoCaoFilhotes20, carrinhoCaoFilhotes21, carrinhoCaoFilhotes22, carrinhoCaoFilhotes23, carrinhoCaoFilhotes24, carrinhoCaoFilhotes25, carrinhoCaoFilhotes26, carrinhoCaoFilhotes27;
float prodPreco[59];
int menuCliente();
int clubepet();

int main()
{
// Define o valor das páginas de código UTF8 e default do Windows
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
// Define codificação como sendo UTF-8
  SetConsoleOutputCP(CPAGE_UTF8);
// entrada de dados
//Menu principal 
printf("---------------------------------------------------------------------------------------------------------\n\n");
printf("|                                                  BRPETS                                               |\n\n");
printf("---------------------------------------------------------------------------------------------------------\n\n");
printf("1 - Proprietário\n");
printf("2 - Cliente\n");
printf("0 - Sair do site\n");
printf("\nOpção: ");
scanf("%d", &menuPrincipal);

switch (menuPrincipal)

{
case 1:
    
    printf("---------------------------------------------------------------------------------------------------------\n");
    printf("|                                             Legenda de produtos                                       |\n");
    printf("---------------------------------------------------------------------------------------------------------\n");
    printf("|PetBox para cachorros |\n");
    printf("-----------------------\n");
    printf("Código 1: PetBox Filhotes standard - P\n");
    printf("Código 2: PetBox Filhotes standard - M\n");
    printf("Código 3: PetBox Filhotes standard - G\n");
    printf("Código 4: PetBox Filhotes Premium - P\n");
    printf("Código 5: PetBox Filhotes Premium - M\n");
    printf("Código 6: PetBox Filhotes Premium - G\n");
    printf("Código 7: PetBox Filhotes super premium - P\n");
    printf("Código 8: PetBox Filhotes super premium - M\n");
    printf("Código 9: PetBox Filhotes super premium - G\n");

    printf("Código 10: PetBox Adultos standard - P\n");
    printf("Código 11: PetBox Adultos standard - M\n");
    printf("Código 12: PetBox Adultos standard - G\n");
    printf("Código 13: PetBox Adultos Premium - P\n");
    printf("Código 14: PetBox Adultos Premium - M\n");
    printf("Código 15: PetBox Adultos Premium - G\n");
    printf("Código 16: PetBox Adultos super premium - P\n");
    printf("Código 17: PetBox Adultos super premium - M\n");
    printf("Código 18: PetBox Adultos super premium - G\n");

    printf("Código 19: PetBox Idosos standard - P\n");
    printf("Código 20: PetBox Idosos standard - M\n");
    printf("Código 21: PetBox Idosos standard - G\n");
    printf("Código 22: PetBox Idosos Premium - P\n");
    printf("Código 23: PetBox Idosos Premium - M\n");
    printf("Código 24: PetBox Idosos Premium - G\n");
    printf("Código 25: PetBox Idosos super premium - P\n");
    printf("Código 26: PetBox Idosos super premium - M\n");
    printf("Código 27: PetBox Idosos super premium - G\n");

    printf("---------------------------\n");
    printf("|PetBox escolha cachorros |\n");
    printf("---------------------------\n");
    printf("Código 19: Ração standard 1 kg\n");
    printf("Código 20: Ração standard 2 kg\n");
    printf("Código 21: Ração standard 3 kg\n");
    printf("Código 22: Ração standard 5 kg\n");
    printf("Código 23: Ração standard 8 kg\n");
    printf("Código 24: Ração standard 12 kg\n");
    printf("Código 25: Ração premium 1 kg\n");
    printf("Código 26: Ração premium 2 kg\n");
    printf("Código 27: Ração premium 3 kg\n");
    printf("Código 28: Ração premium 5 kg\n");
    printf("Código 29: Ração premium 8 kg\n");
    printf("Código 30: Ração premium 12 kg\n");
    printf("Código 31: Ração super premium 1 kg\n");
    printf("Código 32: Ração super premium 2 kg\n");
    printf("Código 33: Ração super premium 3 kg\n");
    printf("Código 34: Ração super premium 5 kg\n");
    printf("Código 35: Ração super premium 8 kg\n");
    printf("Código 36: Ração super premium 12 kg\n");
    printf("Código 37: petiscos\n");
    printf("Código 38: Tapete higiênico 10 uni\n");
    printf("Código 39: Tapete higiênico 15 uni\n");
    printf("Código 40: Brinquedo\n");
    printf("Código 41: sabonete\n");
    printf("Código 42: Kit de Shampoo, Colônia e Condicionador\n");
    printf("Código 43: Kit dental: escova + creme dental\n");
   

    
	
  	// entrada de dados
    printf("---------------------------------------------------------------------------------------------------------\n");
    printf("|                                             Cadastro de produtos                                       |\n");
    printf("---------------------------------------------------------------------------------------------------------\n");
  	for (i=0; i< 3; i++)
  	{
  		printf("Código: ");
  		scanf("%d", &prodCod[i]);
  		printf("Quantidade em estoquerr: ");
  		scanf("%d", &prodQtd[i]);
  		printf("Preço: ");
  		scanf("%f", &prodPreco[i]);
  		printf("\n--------------------------------------------------------------------------------------------------------\n");
  	
  	}
    // Relatório com todos produtos cadastrados
  	printf("|                                     Relatório do estoque                                             |");
    printf("\n--------------------------------------------------------------------------------------------------------\n");
  	printf("Código\t\tEstoque\t\tPreço\n");
  	
	  for (i=0; i<3;i++)
  	{
  	printf("%d\t\t%d\t\t%.2f\n",prodCod[i],prodQtd[i],prodPreco[i]);
  	}
	    
   
    system("pause");
    system("cls");
    main();
    break;



case 2:
   menuCliente();//chama a função menuCliente
       
case 0:
exit(0);
default:
printf("Digite uma opção valida: \n");
system("pause");
system("cls");
main();
}
            
 

return 0;
// Retorna codificação padrão do Windows
  SetConsoleOutputCP(CPAGE_DEFAULT);
 }
 //função menuCliente
int menuCliente()
{
    printf("---------------------------------------------------------------------------------------------------------\n\n");
    printf("|                                            Bem-vindo a BRPETS                                         |\n\n");
    printf("---------------------------------------------------------------------------------------------------------\n\n");

    printf("1 - Conheça a BRPets\n");
    printf("2 - Clube Pet\n");
    printf("3 - Loja\n");
    printf("4 - Ofertas\n");
    printf("5 - Busca\n");
    printf("6 - Carinho\n");
    printf("0 - Sair do site\n");
    printf("\nOpção: ");
    scanf("%d", &op);


    switch(op){
        case 1:
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
        case 2:
    		clubepet(); //chama função clubepet 
             break;
      
        case 3:
           printf("Em contrução \n");

           system("pause");
           system("cls");
           menuCliente();

            break;
        case 4:
            printf("Em contrução \n");

           system("pause");
           system("cls");
           menuCliente();

            break;
        case 5:
           printf("Em contrução \n");

           system("pause");
           system("cls");
           menuCliente();

            break;
        case 6:
        printf("---------------------------------------------------------------------------------------------------------\n");
        printf("|                                            Corrinho de compras                                        |\n");
        printf("---------------------------------------------------------------------------------------------------------\n");
        printf("Iten (s)");
        if (carrinhoCaoFilhotes1==1)
        {
        printf("\nPetBox Standard - Tamanho P - Para cães filhotes\n");
        printf("Plano mensal: %.2f\n\n", prodPreco[0]);
        } 
        if (carrinhoCaoFilhotes2==1)
        {
        printf("\nPetBox Standard - Tamanho M - Para cães filhotes\n");
        printf("Plano mensal: %.2f\n\n", prodPreco[1]);
        }
        if (carrinhoCaoFilhotes3==1)
        {
        printf("\nPetBox Standard - Tamanho G - Para cães filhotes\n");
        printf("Plano mensal: %.2f\n\n", prodPreco[2]);
        }
       
        system("pause");
        system("cls");
        menuCliente();
        break;


        case 0:
            exit(0);
        default:
        printf("Digite uma opção valida: \n");
        system("pause");
        system("cls");
        menuCliente();
        

    }

    
}

//função clubepet 
int clubepet()
{
	        printf("\n---------------------------------------------------------------------------------------------------------\n");
            printf("|                                                BRPETS                                                 |\n");
            printf("---------------------------------------------------------------------------------------------------------\n");
            printf("| Clube Pet |                                                                                            \n");
            printf("-------------                                                                                            \n");
            printf("1 - Como funciona a PetBox                                                                               \n");
            printf("2 - Escolha a PetBOX ideal para o seu Pet                                                                \n");
            printf("3 - Voltar ao menu                                                                                       \n");
            printf("\nOpção: ");
            scanf("%d", &opcao);
                if (opcao==1)
                {
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
                clubepet();             
                }
                else if (opcao==2)
                    {
                    printf("\n--------------------------------------------------------------------------------------------------------\n");
                    printf("| Escolha a PetBOX ideal para o seu Pet                                                                |\n");
                    printf("--------------------------------------------------------------------------------------------------------\n");
                    printf("1 - PetBox Fixa                                                                                         \n");
                    printf("2 - PetBox Escolha                                                                                      \n");
                    printf("\nOpção: ");
                    scanf("%d", &opBox);              
                    }             
                 else if (opcao==3)
                 	{
                 	system("cls");
                 	menuCliente();
                 	}
                 else
                    {
                    printf("\nNúmero inválido\n");
                    printf("--------------------------------------------------------------------------------------------------------\n\n");
                    system("pause");
                    system("cls");
                    clubepet();
                    }          
                if (opBox==1)
                {
                printf("\n--------------------------------------------------------------------------------------------------------\n");
                printf("| PetBox Fixa                                                                                          |\n");
                printf("--------------------------------------------------------------------------------------------------------\n");
                printf("\n1 - PetBox para filhotes                                                                              \n");
                printf("\nIdeal para seu Pet entre 40 dias e 1 ano vida!                                                       \n");
                printf("\n2 - PetBox para adultos                                                                               \n");
                printf("\nIdeal para seu Pet entre 1 a 7 anos de vida!                                                            \n");
                printf("\n3 - PetBox para idosos                                                                                \n");
                printf("\nIdeal para seu Pet com mais de 7 (grande porte) e 12 (pequeno porte) anos de vida!                    \n");
                printf("\nOpção: ");
                scanf("%d", &opBoxCao); 
                }
                else if (opBox==2)
                {
                printf("\n--------------------------------------------------------------------------------------------------------\n");
                printf("| PetBox Escolha                                                                                      |\n");
                printf("--------------------------------------------------------------------------------------------------------\n");
                printf("EM CONSTRUÇÃO                                                                                          \n");
                
                }

                else 
                {
                printf("\nNúmero inválido\n");
                printf("--------------------------------------------------------------------------------------------------------\n\n");
                system("pause");
                system("cls");
                clubepet();  
                }         
                                   
                if (opBoxCao==1)
                {
                printf("\n----------------------------------------------------------------------------------------------------------\n");
                printf("| PetBox para filhotes                                                                                   |\n");
                printf("----------------------------------------------------------------------------------------------------------\n");
                printf("\n1 -- Standard --                                                                                       \n");
                printf("\nAcompanha ração balanceada com proteínas de boa qualidade preparadas por empresas de renome no mercado \n");
                printf("\nNa composição da ração você encontrar farinha de carne, gordura animal, glúten  e outros ingredientes  \n");
                printf("\n2 -- Premium --                                                                                        \n");
                printf("\nAcompanha rações de primeira qualidade ricas em proteínas de alta digestibilidade, as quais            \n");         
                printf("\nproporcionaram um melhor funcionamento do organismo do seu Pet.                                        \n");
                printf("\n3 -- Super Premium  --                                                                                 \n");
                printf("\nAcompanha rações 100 de origem animal. Além disso, todos os conservantes utilizados são de origem      \n");
                printf("\nnatural. O seu cão com o melhor do mundo Pet!                                                          \n");
                printf("\nOpção: ");
                scanf("%d", &categoriaCaoFilhotes); 
                
                }
                    else if (opBoxCao==2)
                    {
                    printf("\n----------------------------------------------------------------------------------------------------------\n");
                    printf("| PetBox para Adultos                                                                                    |\n");
                    printf("----------------------------------------------------------------------------------------------------------\n");
                    printf("\n1 -- Standard --                                                                                       \n");
                    printf("\nAcompanha ração balanceada com proteínas de boa qualidade preparadas por empresas de renome no mercado \n");
                    printf("\nNa composição da ração você encontrar farinha de carne, gordura animal, glúten  e outros ingredientes  \n");
                    printf("\n2 -- Premium --                                                                                        \n");
                    printf("\nAcompanha rações de primeira qualidade ricas em proteínas de alta digestibilidade, as quais            \n");         
                    printf("\nproporcionaram um melhor funcionamento do organismo do seu Pet.                                        \n");
                    printf("\n3 -- Super Premium  --                                                                                 \n");
                    printf("\nAcompanha rações 100 de origem animal. Além disso, todos os conservantes utilizados são de origem      \n");
                    printf("\nnatural. O seu cão com o melhor do mundo Pet!                                                          \n");
                    printf("\nOpção: ");
                     scanf("%d", &categoriaCaoAdultos);
                    }   
                        else if (opBoxCao==3)    
                        {
                        printf("\n----------------------------------------------------------------------------------------------------------\n");
                        printf("| PetBox para Idosos                                                                                     |\n");
                        printf("----------------------------------------------------------------------------------------------------------\n");
                        printf("\n1 -- Standard --                                                                                       \n");
                        printf("\nAcompanha ração balanceada com proteínas de boa qualidade preparadas por empresas de renome no mercado \n");
                        printf("\nNa composição da ração você encontrar farinha de carne, gordura animal, glúten  e outros ingredientes  \n");
                        printf("\n2 -- Premium --                                                                                        \n");
                        printf("\nAcompanha rações de primeira qualidade ricas em proteínas de alta digestibilidade, as quais            \n");         
                        printf("\nproporcionaram um melhor funcionamento do organismo do seu Pet.                                        \n");
                        printf("\n3 -- Super Premium  --                                                                                 \n");
                        printf("\nAcompanha rações 100 de origem animal. Além disso, todos os conservantes utilizados são de origem      \n");
                        printf("\nnatural. O seu cão com o melhor do mundo Pet!                                                          \n");
                        printf("\nOpção: ");
                        scanf("%d", &categoriaCaoIdosos);
                        }  
                            else 
                             {
                             printf("\nNúmero inválido\n");
                             printf("--------------------------------------------------------------------------------------------------------\n\n");
                             system("pause");
                             system("cls");
                             clubepet();  
                             } 
                if (categoriaCaoFilhotes==1)
                {
                printf("\n--------------------------------------------------------------------------------------------------------\n");
                printf("| PetBox para filhotes                                                                                   |\n");
                printf("----------------------------------------------------------------------------------------------------------\n");
                printf("| 1 - Standard |                                                                                        \n");
                printf("----------------                                                                                        \n");
		        printf("\nAcompanha ração balanceada com proteínas de boa qualidade preparadas por empresas de renome no mercado\n");
                printf("\nNa composição da ração você encontrar farinha de carne, gordura animal, glúten  e outros ingredientes \n");
                printf("\n--------------------------------------------TAMANHOS ---------------------------------------------------\n\n");
                printf("--------------------------------------------------------------------------------------------------------\n");
                printf("|     PetBOX: Pequeno      |--------|      PetBOX: Médio      |--------|     PetBOX: Grande      |------\n");
                printf("|      Plano mensal        |--------|      Plano mensal       |--------|      Plano mensal       |------\n");
                printf("|      R$ 69,90/mês        |--------|      R$ 99,90/mês       |--------|     R$ 119,90/mês       |------\n");
                printf("--------------------------------------------------------------------------------------------------------\n");
                printf("|Itens:                    |--------|Itens:                   |--------|Itens:                   |------\n");
                printf("|-Ração standard (1 kg)    |--------|-Ração standard (2 kg)   |--------|-Ração standard (3 kg)   |------\n");
                printf("|-Petiscos (2 un)          |--------|-Petiscos (3 un)         |--------|-Petiscos (4 un)         |------\n");
                printf("|-Brinquedo (1 un)         |--------|-Brinquedo (1 un)        |--------|-Brinquedo (1 un)        |------\n");
                printf("|-Tapete higiênico (10 un) |--------|-Tapete higiênico (15 un)|--------|-Tapete higiênico (15 un)|------\n");
                printf("|-Sabonete (2 un)          |--------|-Sabonete (2 un)         |--------|-Sabonete (2 un)         |------\n");
                printf("|                          |--------|-Kit de Shampoo, Colônia |--------|-Kit de Shampoo, Colônia |------\n");
                printf("|                          |--------|  e Condicionador (1 un) |--------| e Condicionador (1 un)  |------\n");
                printf("|                          |--------|                         |--------|-Kit dental (1 un)       |------\n");
                printf("--------------------------------------------------------------------------------------------------------\n");
                printf("\n\nEscolha o tamanho da sua PetBox                                                                     \n");
                printf("1 - Pequeno                                                                                             \n");
                printf("2 - Médio                                                                                               \n");
                printf("3 - Grande                                                                                              \n");
                printf("Opção: ");
                scanf("%d", &tamanhoBoxCaoFilhotes1);
                              

                }
                    else if (categoriaCaoFilhotes==2)
                    {
                    printf("----------------------------------------------------------------------------------------------------------\n");
                    printf("| PetBox para filhotes                                                                                   |\n");
                    printf("----------------------------------------------------------------------------------------------------------\n");
                    printf("| 2 - Premium  |                                                                                        \n");
                    printf("----------------                                                                                        \n");
                    printf("\n    Acompanha rações de primeira qualidade ricas em proteínas de alta digestibilidade, as quais       \n");         
                    printf("\n               proporcionaram um melhor funcionamento do organismo do seu Pet.                         \n");
                    printf("\n--------------------------------------------TAMANHOS ---------------------------------------------------\n\n");
                    printf("--------------------------------------------------------------------------------------------------------\n");
                    printf("|     PetBOX: Pequeno      |--------|      PetBOX: Médio      |--------|     PetBOX: Grande      |------\n");
                    printf("|      Plano mensal        |--------|      Plano mensal       |--------|      Plano mensal       |------\n");
                    printf("|      R$ 89,90/mês        |--------|      R$ 119,90/mês      |--------|     R$ 149,90/mês       |------\n");
                    printf("--------------------------------------------------------------------------------------------------------\n");
                    printf("|Itens:                    |--------|Itens:                   |--------|Itens:                   |------\n");
                    printf("|-Ração premium  (1 kg)    |--------|-Ração premium  (2 kg)   |--------|-Ração premium  (3  kg)  |------\n");
                    printf("|-Petiscos (2 un)          |--------|-Petiscos (3 un)         |--------|-Petiscos (4 un)         |------\n");
                    printf("|-Brinquedo (1 un)         |--------|-Brinquedo (1 un)        |--------|-Brinquedo (1 un)        |------\n");
                    printf("|-Tapete higiênico (10 un) |--------|-Tapete higiênico (15 un)|--------|-Tapete higiênico (15 un)|------\n");
                    printf("|-Sabonete (2 un)          |--------|-Sabonete (2 un)         |--------|-Sabonete (2 un)         |------\n");
                    printf("|                          |--------|-Kit de Shampoo, Colônia |--------|-Kit de Shampoo, Colônia |------\n");
                    printf("|                          |--------|  e Condicionador (1 un) |--------| e Condicionador (1 un)  |------\n");
                    printf("|                          |--------|                         |--------|-Kit dental (1 un)       |------\n");
                    printf("--------------------------------------------------------------------------------------------------------\n");
                    printf("\n\nEscolha o tamanho da sua PetBox                                                                     \n");
                    printf("1 - Pequeno                                                                                             \n");
                    printf("3 - Médio                                                                                               \n");
                    printf("3 - Grande                                                                                              \n");
                    printf("\nOpção: ");
                    scanf("%d", &tamanhoBoxCaoFilhotes2);
                    }
                        else if (categoriaCaoFilhotes==3)
                        {
                        printf("----------------------------------------------------------------------------------------------------------\n");
                        printf("| PetBox para filhotes                                                                                   |\n");
                        printf("----------------------------------------------------------------------------------------------------------\n");
                        printf("| 3 - Super Premium  |                                                                                  \n");
                        printf("----------------------                                                                                  \n");
                        printf("\n  Acompanha rações 100 de origem animal. Além disso, todos os conservantes utilizados são de origem   \n");
                        printf("\n                     natural. O seu cão com o melhor do mundo Pet!                                    \n");
                        printf("\n--------------------------------------------TAMANHOS ----------------------------------------------------\n\n");
                        printf("---------------------------------------------------------------------------------------------------------\n");
                        printf("|     PetBOX: Pequeno      |--------|      PetBOX: Médio       |--------|     PetBOX: Grande        |----\n");
                        printf("|      Plano mensal        |--------|      Plano mensal        |--------|      Plano mensal         |----\n");
                        printf("|      R$ 99,90/mês        |--------|      R$ 129,90/mês       |--------|     R$ 169,90/mês         |----\n");
                        printf("--------------------------------------------------------------------------------------------------------\n");
                        printf("|Itens:                    |--------|Itens:                    |--------|Itens:                     |----\n");
                        printf("|-Ração super premium(5 kg)|--------|-Ração super premium(8 kg)|--------|-Ração super premium(12 kg)|----\n");
                        printf("|-Petiscos (2 un)          |--------|-Petiscos (3 un)          |--------|-Petiscos (4 un)           |----\n");
                        printf("|-Brinquedo (1 un)         |--------|-Brinquedo (1 un)         |--------|-Brinquedo (1 un)          |----\n");
                        printf("|-Tapete higiênico (10 un) |--------|-Tapete higiênico (15 un) |--------|-Tapete higiênico (15 un)  |----\n");
                        printf("|-Sabonete (2 un)          |--------|-Sabonete (2 un)          |--------|-Sabonete (2 un)           |----\n");
                        printf("|                          |--------|-Kit de Shampoo, Colônia  |--------|-Kit de Shampoo, Colônia   |----\n");
                        printf("|                          |--------|  e Condicionador (1 un)  |--------| e Condicionador (1 un)    |----\n");
                        printf("|                          |--------|                          |--------|-Kit dental (1 un)         |----\n");
                        printf("---------------------------------------------------------------------------------------------------------\n");
                        printf("\n\nEscolha o tamanho da sua PetBox                                                                     \n");
                        printf("1 - Pequeno                                                                                             \n");
                        printf("2 - Médio                                                                                               \n");
                        printf("3 - Grande                                                                                              \n");
                        printf("\nOpção: ");
                        scanf("%d", &tamanhoBoxCaoFilhotes3);
                        }
                            

                else if (categoriaCaoAdultos==1)
                {
                printf("----------------------------------------------------------------------------------------------------------\n");
                printf("| PetBox para Adultos                                                                                    |\n");
                printf("----------------------------------------------------------------------------------------------------------\n");
                printf("| 1 - Standard |                                                                                        \n");
                printf("----------------                                                                                        \n");
		        printf("\nAcompanha ração balanceada com proteínas de boa qualidade preparadas por empresas de renome no mercado\n");
                printf("\nNa composição da ração você encontrar farinha de carne, gordura animal, glúten  e outros ingredientes \n");
                printf("\n--------------------------------------------TAMANHOS ---------------------------------------------------\n\n");
                printf("--------------------------------------------------------------------------------------------------------\n");
                printf("|     PetBOX: Pequeno      |--------|      PetBOX: Médio      |--------|     PetBOX: Grande      |------\n");
                printf("|      Plano mensal        |--------|      Plano mensal       |--------|      Plano mensal       |------\n");
                printf("|      R$ 89,90/mês        |--------|      R$ 129,90/mês      |--------|     R$ 159,90/mês       |------\n");
                printf("--------------------------------------------------------------------------------------------------------\n");
                printf("|Itens:                    |--------|Itens:                   |--------|Itens:                   |------\n");
                printf("|-Ração standard (5 kg)    |--------|-Ração standard (8 kg)   |--------|-Ração standard (12 kg)  |------\n");
                printf("|-Petiscos (2 un)          |--------|-Petiscos (3 un)         |--------|-Petiscos (4 un)         |------\n");
                printf("|-Brinquedo (1 un)         |--------|-Brinquedo (1 un)        |--------|-Brinquedo (1 un)        |------\n");
                printf("|-Tapete higiênico (10 un) |--------|-Tapete higiênico (15 un)|--------|-Tapete higiênico (15 un)|------\n");
                printf("|-Sabonete (2 un)          |--------|-Sabonete (2 un)         |--------|-Sabonete (2 un)         |------\n");
                printf("|                          |--------|-Kit de Shampoo, Colônia |--------|-Kit de Shampoo, Colônia |------\n");
                printf("|                          |--------|  e Condicionador (1 un) |--------| e Condicionador (1 un)  |------\n");
                printf("|                          |--------|                         |--------|-Kit dental (1 un)       |------\n");
                printf("--------------------------------------------------------------------------------------------------------\n");
                printf("\n\nEscolha o tamanho da sua PetBox                                                                     \n");
                printf("1 - Pequeno                                                                                             \n");
                printf("2 - Médio                                                                                               \n");
                printf("3 - Grande                                                                                              \n");
                printf("Opção: ");
                scanf("%d", &tamanhoBoxCaoAdultos1);
               

                }
                    else if (categoriaCaoAdultos==2)
                    {
                    printf("----------------------------------------------------------------------------------------------------------\n");
                    printf("| PetBox para Adultos                                                                                    |\n");
                    printf("----------------------------------------------------------------------------------------------------------\n");
                    printf("| 2 - Premium  |                                                                                        \n");
                    printf("----------------                                                                                        \n");
                    printf("\n    Acompanha rações de primeira qualidade ricas em proteínas de alta digestibilidade, as quais       \n");         
                    printf("\n               proporcionaram um melhor funcionamento do organismo do seu Pet.                         \n");
                    printf("\n--------------------------------------------TAMANHOS ---------------------------------------------------\n\n");
                    printf("--------------------------------------------------------------------------------------------------------\n");
                    printf("|     PetBOX: Pequeno      |--------|      PetBOX: Médio      |--------|     PetBOX: Grande      |------\n");
                    printf("|      Plano mensal        |--------|      Plano mensal       |--------|      Plano mensal       |------\n");
                    printf("|      R$ 99,90/mês        |--------|      R$ 149,90/mês      |--------|     R$ 179,90/mês       |------\n");
                    printf("--------------------------------------------------------------------------------------------------------\n");
                    printf("|Itens:                    |--------|Itens:                   |--------|Itens:                   |------\n");
                    printf("|-Ração premium  (5 kg)    |--------|-Ração premium  (8 kg)   |--------|-Ração premium  (12 kg)  |------\n");
                    printf("|-Petiscos (2 un)          |--------|-Petiscos (3 un)         |--------|-Petiscos (4 un)         |------\n");
                    printf("|-Brinquedo (1 un)         |--------|-Brinquedo (1 un)        |--------|-Brinquedo (1 un)        |------\n");
                    printf("|-Tapete higiênico (10 un) |--------|-Tapete higiênico (15 un)|--------|-Tapete higiênico (15 un)|------\n");
                    printf("|-Sabonete (2 un)          |--------|-Sabonete (2 un)         |--------|-Sabonete (2 un)         |------\n");
                    printf("|                          |--------|-Kit de Shampoo, Colônia |--------|-Kit de Shampoo, Colônia |------\n");
                    printf("|                          |--------|  e Condicionador (1 un) |--------| e Condicionador (1 un)  |------\n");
                    printf("|                          |--------|                         |--------|-Kit dental (1 un)       |------\n");
                    printf("--------------------------------------------------------------------------------------------------------\n");
                    printf("\n\nEscolha o tamanho da sua PetBox                                                                     \n");
                    printf("1 - Pequeno                                                                                             \n");
                    printf("3 - Médio                                                                                               \n");
                    printf("3 - Grande                                                                                              \n");
                    printf("\nOpção: ");
                    scanf("%d", &tamanhoBoxCaoAdultos2);
                    }
                        else if (categoriaCaoAdultos==3)
                        {
                        printf("----------------------------------------------------------------------------------------------------------\n");
                        printf("| PetBox para Adultos                                                                                    |\n");
                        printf("----------------------------------------------------------------------------------------------------------\n");
                        printf("| 3 - Super Premium  |                                                                                  \n");
                        printf("----------------------                                                                                  \n");
                        printf("\n  Acompanha rações 100 de origem animal. Além disso, todos os conservantes utilizados são de origem   \n");
                        printf("\n                     natural. O seu cão com o melhor do mundo Pet!                                    \n");
                        printf("\n----------------------------------------------TAMANHOS ---------------------------------------------------\n\n");
                        printf("----------------------------------------------------------------------------------------------------------\n");
                        printf("|     PetBOX: Pequeno      |--------|      PetBOX: Médio        |--------|     PetBOX: Grande         |---\n");
                        printf("|      Plano mensal        |--------|      Plano mensal         |--------|      Plano mensal          |---\n");
                        printf("|      R$ 109,90/mês       |--------|      R$ 169,90/mês        |--------|     R$ 199,90/mês          |---\n");
                        printf("----------------------------------------------------------------------------------------------------------\n");
                        printf("|Itens:                    |--------|Itens:                     |--------|Itens:                      |---\n");
                        printf("|-Ração super premium(5 kg)|--------|-Ração super premium (8 kg)|--------|-Ração super premium (12 kg)|---\n");
                        printf("|-Petiscos (2 un)          |--------|-Petiscos (3 un)           |--------|-Petiscos (4 un)            |---\n");
                        printf("|-Brinquedo (1 un)         |--------|-Brinquedo (1 un)          |--------|-Brinquedo (1 un)           |---\n");
                        printf("|-Tapete higiênico (10 un) |--------|-Tapete higiênico (15 un)  |--------|-Tapete higiênico (15 un)   |---\n");
                        printf("|-Sabonete (2 un)          |--------|-Sabonete (2 un)           |--------|-Sabonete (2 un)            |---\n");
                        printf("|                          |--------|-Kit de Shampoo, Colônia   |--------|-Kit de Shampoo, Colônia    |---\n");
                        printf("|                          |--------|  e Condicionador (1 un)   |--------| e Condicionador (1 un)     |---\n");
                        printf("|                          |--------|                           |--------|-Kit dental (1 un)          |---\n");
                        printf("----------------------------------------------------------------------------------------------------------\n");
                        printf("\n\nEscolha o tamanho da sua PetBox                                                                     \n");
                        printf("1 - Pequeno                                                                                             \n");
                        printf("2 - Médio                                                                                               \n");
                        printf("3 - Grande                                                                                              \n");
                        printf("\nOpção: ");
                        scanf("%d", &tamanhoBoxCaoAdultos3);
                        }
                else if (categoriaCaoIdosos==1)
                {
                printf("----------------------------------------------------------------------------------------------------------\n");
                printf("| PetBox para Idosos                                                                                     |\n");
                printf("----------------------------------------------------------------------------------------------------------\n");
                printf("| 1 - Standard |                                                                                        \n");
                printf("----------------                                                                                        \n");
		        printf("\nAcompanha ração balanceada com proteínas de boa qualidade preparadas por empresas de renome no mercado\n");
                printf("\nNa composição da ração você encontrar farinha de carne, gordura animal, glúten  e outros ingredientes \n");
                printf("\n--------------------------------------------TAMANHOS ---------------------------------------------------\n\n");
                printf("--------------------------------------------------------------------------------------------------------\n");
                printf("|     PetBOX: Pequeno      |--------|      PetBOX: Médio      |--------|     PetBOX: Grande      |------\n");
                printf("|      Plano mensal        |--------|      Plano mensal       |--------|      Plano mensal       |------\n");
                printf("|      R$ 89,90/mês        |--------|      R$ 129,90/mês      |--------|     R$ 159,90/mês       |------\n");
                printf("--------------------------------------------------------------------------------------------------------\n");
                printf("|Itens:                    |--------|Itens:                   |--------|Itens:                   |------\n");
                printf("|-Ração standard (5 kg)    |--------|-Ração standard (8 kg)   |--------|-Ração standard (12 kg)  |------\n");
                printf("|-Petiscos (2 un)          |--------|-Petiscos (3 un)         |--------|-Petiscos (4 un)         |------\n");
                printf("|-Brinquedo (1 un)         |--------|-Brinquedo (1 un)        |--------|-Brinquedo (1 un)        |------\n");
                printf("|-Tapete higiênico (10 un) |--------|-Tapete higiênico (15 un)|--------|-Tapete higiênico (15 un)|------\n");
                printf("|-Sabonete (2 un)          |--------|-Sabonete (2 un)         |--------|-Sabonete (2 un)         |------\n");
                printf("|                          |--------|-Kit de Shampoo, Colônia |--------|-Kit de Shampoo, Colônia |------\n");
                printf("|                          |--------|  e Condicionador (1 un) |--------| e Condicionador (1 un)  |------\n");
                printf("|                          |--------|                         |--------|-Kit dental (1 un)       |------\n");
                printf("--------------------------------------------------------------------------------------------------------\n");
                printf("\n\nEscolha o tamanho da sua PetBox                                                                     \n");
                printf("1 - Pequeno                                                                                             \n");
                printf("2 - Médio                                                                                               \n");
                printf("3 - Grande                                                                                              \n");
                printf("Opção: ");
                scanf("%d", &tamanhoBoxCaoIdosos1);
               
                }
                    else if (categoriaCaoIdosos==2)
                    {
                    printf("\n--------------------------------------------------------------------------------------------------------\n");
                    printf("| PetBox para Idosos                                                                                     |\n");
                    printf("----------------------------------------------------------------------------------------------------------\n");
                    printf("| 2 - Premium  |                                                                                        \n");
                    printf("----------------                                                                                        \n");
                    printf("\n    Acompanha rações de primeira qualidade ricas em proteínas de alta digestibilidade, as quais       \n");         
                    printf("\n               proporcionaram um melhor funcionamento do organismo do seu Pet.                         \n");
                    printf("\n--------------------------------------------TAMANHOS ---------------------------------------------------\n\n");
                    printf("--------------------------------------------------------------------------------------------------------\n");
                    printf("|     PetBOX: Pequeno      |--------|      PetBOX: Médio      |--------|     PetBOX: Grande      |------\n");
                    printf("|      Plano mensal        |--------|      Plano mensal       |--------|      Plano mensal       |------\n");
                    printf("|      R$ 99,90/mês        |--------|      R$ 149,90/mês      |--------|     R$ 179,90/mês       |------\n");
                    printf("--------------------------------------------------------------------------------------------------------\n");
                    printf("|Itens:                    |--------|Itens:                   |--------|Itens:                   |------\n");
                    printf("|-Ração premium  (1 kg)    |--------|-Ração premium  (2 kg)   |--------|-Ração premium  (3  kg)  |------\n");
                    printf("|-Petiscos (2 un)          |--------|-Petiscos (3 un)         |--------|-Petiscos (4 un)         |------\n");
                    printf("|-Brinquedo (1 un)         |--------|-Brinquedo (1 un)        |--------|-Brinquedo (1 un)        |------\n");
                    printf("|-Tapete higiênico (10 un) |--------|-Tapete higiênico (15 un)|--------|-Tapete higiênico (15 un)|------\n");
                    printf("|-Sabonete (2 un)          |--------|-Sabonete (2 un)         |--------|-Sabonete (2 un)         |------\n");
                    printf("|                          |--------|-Kit de Shampoo, Colônia |--------|-Kit de Shampoo, Colônia |------\n");
                    printf("|                          |--------|  e Condicionador (1 un) |--------| e Condicionador (1 un)  |------\n");
                    printf("|                          |--------|                         |--------|-Kit dental (1 un)       |------\n");
                    printf("--------------------------------------------------------------------------------------------------------\n");
                    printf("\n\nEscolha o tamanho da sua PetBox                                                                     \n");
                    printf("1 - Pequeno                                                                                             \n");
                    printf("3 - Médio                                                                                               \n");
                    printf("3 - Grande                                                                                              \n");
                    printf("\nOpção: ");
                    scanf("%d", &tamanhoBoxCaoIdosos2);
                    }
                        else if (categoriaCaoIdosos==3)
                        {
                        printf("\n--------------------------------------------------------------------------------------------------------\n");
                        printf("| PetBox para Idosos                                                                                     |\n");
                        printf("----------------------------------------------------------------------------------------------------------\n");
                        printf("| 3 - Super Premium  |                                                                                  \n");
                        printf("----------------------                                                                                  \n");
                        printf("\n  Acompanha rações 100 de origem animal. Além disso, todos os conservantes utilizados são de origem   \n");
                        printf("\n                     natural. O seu cão com o melhor do mundo Pet!                                    \n");
                        printf("\n--------------------------------------------TAMANHOS ----------------------------------------------------\n\n");
                        printf("---------------------------------------------------------------------------------------------------------\n");
                        printf("|     PetBOX: Pequeno      |--------|      PetBOX: Médio       |--------|     PetBOX: Grande        |----\n");
                        printf("|      Plano mensal        |--------|      Plano mensal        |--------|      Plano mensal         |----\n");
                        printf("|      R$ 109,90/mês       |--------|      R$ 169,90/mês       |--------|     R$ 199,90/mês         |----\n");
                        printf("---------------------------------------------------------------------------------------------------------\n");
                        printf("|Itens:                    |--------|Itens:                    |--------|Itens:                     |----\n");
                        printf("|-Ração super premium(5 kg)|--------|-Ração super premium(8 kg)|--------|-Ração super premium(12 kg)|----\n");
                        printf("|-Petiscos (2 un)          |--------|-Petiscos (3 un)          |--------|-Petiscos (4 un)           |----\n");
                        printf("|-Brinquedo (1 un)         |--------|-Brinquedo (1 un)         |--------|-Brinquedo (1 un)          |----\n");
                        printf("|-Tapete higiênico (10 un) |--------|-Tapete higiênico (15 un) |--------|-Tapete higiênico (15 un)  |----\n");
                        printf("|-Sabonete (2 un)          |--------|-Sabonete (2 un)          |--------|-Sabonete (2 un)           |----\n");
                        printf("|                          |--------|-Kit de Shampoo, Colônia  |--------|-Kit de Shampoo, Colônia   |----\n");
                        printf("|                          |--------|  e Condicionador (1 un)  |--------| e Condicionador (1 un)    |----\n");
                        printf("|                          |--------|                          |--------|-Kit dental (1 un)         |----\n");
                        printf("---------------------------------------------------------------------------------------------------------\n");
                        printf("\n\nEscolha o tamanho da sua PetBox                                                                     \n");
                        printf("1 - Pequeno                                                                                             \n");
                        printf("2 - Médio                                                                                               \n");
                        printf("3 - Grande                                                                                              \n");
                        printf("\nOpção: ");
                        scanf("%d", &tamanhoBoxCaoIdosos3);
                        }
                            else 
                             {
                             printf("Número inválido\n");
                             printf("--------------------------------------------------------------------------------------------------------\n\n");
                             system("pause");
                             system("cls");
                             clubepet();  
                             }  
            if (tamanhoBoxCaoFilhotes1==1)
            {
                printf("--------------------------------------------------------------------------------------------------------\n\n");
                printf("Você escolheu: PetBox Standard - Tamanho P - Para cães filhotes\n\n");
                printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[0], prodPreco[0]); 
                printf("Deseja adicionar ao carinho de compras?\n");
                printf("1 - Sim                                                                                                 \n");
                printf("2 - Não                                                                                                 \n");
                printf("\nOpção: ");
                scanf("%d", &carrinhoCaoFilhotes1);        
            }
                else if (tamanhoBoxCaoFilhotes1==2)
            {
                printf("--------------------------------------------------------------------------------------------------------\n\n");
                printf("Você escolheu: PetBox Standard - Tamanho M - Para cães filhotes\n\n");
                printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[1], prodPreco[1]); 
                printf("Deseja adicionar ao carinho de compras?\n");
                printf("1 - Sim                                                                                                 \n");
                printf("2 - Não                                                                                                 \n");
                printf("\nOpção: ");
                scanf("%d", &carrinhoCaoFilhotes2);        
            }
                    else if (tamanhoBoxCaoFilhotes1==3)
                     {
                     printf("--------------------------------------------------------------------------------------------------------\n\n");
                     printf("Você escolheu: PetBox Standard - Tamanho G - Para cães filhotes\n\n");
                     printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[2], prodPreco[2]); 
                     printf("Deseja adicionar ao carinho de compras?\n");
                     printf("1 - Sim                                                                                                 \n");
                     printf("2 - Não                                                                                                 \n");
                     printf("\nOpção: ");
                     scanf("%d", &carrinhoCaoFilhotes3);        
            }



            else if (tamanhoBoxCaoFilhotes2==1)
            {
                printf("--------------------------------------------------------------------------------------------------------\n\n");
                printf("Você escolheu: PetBox Premium - Tamanho P - Para cães filhotes\n\n");
                printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[3], prodPreco[3]); 
                printf("Deseja adicionar ao carinho de compras?\n");
                printf("1 - Sim                                                                                                 \n");
                printf("2 - Não                                                                                                 \n");
                printf("\nOpção: ");
                scanf("%d", &carrinhoCaoFilhotes4);        
            }
                else if (tamanhoBoxCaoFilhotes2==2)
            {
                printf("--------------------------------------------------------------------------------------------------------\n\n");
                printf("Você escolheu: PetBox Premium - Tamanho M - Para cães filhotes\n\n");
                printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[4], prodPreco[4]); 
                printf("Deseja adicionar ao carinho de compras?\n");
                printf("1 - Sim                                                                                                 \n");
                printf("2 - Não                                                                                                 \n");
                printf("\nOpção: ");
                scanf("%d", &carrinhoCaoFilhotes5);        
            }
                    else if (tamanhoBoxCaoFilhotes2==3)
                     {
                     printf("--------------------------------------------------------------------------------------------------------\n\n");
                     printf("Você escolheu: PetBox Premium - Tamanho G - Para cães filhotes\n\n");
                     printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[5], prodPreco[5]); 
                     printf("Deseja adicionar ao carinho de compras?\n");
                     printf("1 - Sim                                                                                                 \n");
                     printf("2 - Não                                                                                                 \n");
                     printf("\nOpção: ");
                     scanf("%d", &carrinhoCaoFilhotes6); 
                     }
       
        else if (tamanhoBoxCaoFilhotes3==1)
            {
                printf("--------------------------------------------------------------------------------------------------------\n\n");
                printf("Você escolheu: PetBox Super Premium - Tamanho P - Para cães filhotes\n\n");
                printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[6], prodPreco[6]); 
                printf("Deseja adicionar ao carinho de compras?\n");
                printf("1 - Sim                                                                                                 \n");
                printf("2 - Não                                                                                                 \n");
                printf("\nOpção: ");
                scanf("%d", &carrinhoCaoFilhotes7);        
            }
                else if (tamanhoBoxCaoFilhotes3==2)
            {
                printf("--------------------------------------------------------------------------------------------------------\n\n");
                printf("Você escolheu: PetBox Super Premium - Tamanho M - Para cães filhotes\n\n");
                printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[7], prodPreco[7]); 
                printf("Deseja adicionar ao carinho de compras?\n");
                printf("1 - Sim                                                                                                 \n");
                printf("2 - Não                                                                                                 \n");
                printf("\nOpção: ");
                scanf("%d", &carrinhoCaoFilhotes8);        
            }
                    else if (tamanhoBoxCaoFilhotes3==3)
                     {
                     printf("--------------------------------------------------------------------------------------------------------\n\n");
                     printf("Você escolheu: PetBox Super Premium - Tamanho G - Para cães filhotes\n\n");
                     printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[8], prodPreco[8]); 
                     printf("Deseja adicionar ao carinho de compras?\n");
                     printf("1 - Sim                                                                                                 \n");
                     printf("2 - Não                                                                                                 \n");
                     printf("\nOpção: ");
                     scanf("%d", &carrinhoCaoFilhotes9); 
                     }

 






        else if (tamanhoBoxCaoAdultos1==1)
            {
                printf("--------------------------------------------------------------------------------------------------------\n\n");
                printf("Você escolheu: PetBox Standard - Tamanho P - Para cães Adultos\n\n");
                printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[9], prodPreco[9]); 
                printf("Deseja adicionar ao carinho de compras?\n");
                printf("1 - Sim                                                                                                 \n");
                printf("2 - Não                                                                                                 \n");
                printf("\nOpção: ");
                scanf("%d", &carrinhoCaoFilhotes10);        
            }
                else if (tamanhoBoxCaoAdultos1==2)
            {
                printf("--------------------------------------------------------------------------------------------------------\n\n");
                printf("Você escolheu: PetBox Standard - Tamanho M - Para cães Adultos\n\n");
                printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[10], prodPreco[10]); 
                printf("Deseja adicionar ao carinho de compras?\n");
                printf("1 - Sim                                                                                                 \n");
                printf("2 - Não                                                                                                 \n");
                printf("\nOpção: ");
                scanf("%d", &carrinhoCaoFilhotes11);        
            }
                    else if (tamanhoBoxCaoAdultos1==3)
                     {
                     printf("--------------------------------------------------------------------------------------------------------\n\n");
                     printf("Você escolheu: PetBox Standard - Tamanho G - Para cães Adultos\n\n");
                     printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[11], prodPreco[11]); 
                     printf("Deseja adicionar ao carinho de compras?\n");
                     printf("1 - Sim                                                                                                 \n");
                     printf("2 - Não                                                                                                 \n");
                     printf("\nOpção: ");
                     scanf("%d", &carrinhoCaoFilhotes12);        
            }



        else if (tamanhoBoxCaoAdultos2==1)
            {
                printf("--------------------------------------------------------------------------------------------------------\n\n");
                printf("Você escolheu: PetBox Premium - Tamanho P - Para cães Adultos\n\n");
                printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[12], prodPreco[12]); 
                printf("Deseja adicionar ao carinho de compras?\n");
                printf("1 - Sim                                                                                                 \n");
                printf("2 - Não                                                                                                 \n");
                printf("\nOpção: ");
                scanf("%d", &carrinhoCaoFilhotes13);        
            }
                else if (tamanhoBoxCaoAdultos2==2)
            {
                printf("--------------------------------------------------------------------------------------------------------\n\n");
                printf("Você escolheu: PetBox Premium - Tamanho M - Para cães Adultos\n\n");
                printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[13], prodPreco[13]); 
                printf("Deseja adicionar ao carinho de compras?\n");
                printf("1 - Sim                                                                                                 \n");
                printf("2 - Não                                                                                                 \n");
                printf("\nOpção: ");
                scanf("%d", &carrinhoCaoFilhotes14);        
            }
                    else if (tamanhoBoxCaoAdultos2==3)
                     {
                     printf("--------------------------------------------------------------------------------------------------------\n\n");
                     printf("Você escolheu: PetBox Premium - Tamanho G - Para cães Adultoss\n\n");
                     printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[14], prodPreco[14]); 
                     printf("Deseja adicionar ao carinho de compras?\n");
                     printf("1 - Sim                                                                                                 \n");
                     printf("2 - Não                                                                                                 \n");
                     printf("\nOpção: ");
                     scanf("%d", &carrinhoCaoFilhotes15); 
                     }



        else if (tamanhoBoxCaoAdultos3==1)
            {
                printf("--------------------------------------------------------------------------------------------------------\n\n");
                printf("Você escolheu: PetBox Super Premium - Tamanho P - Para cães Adultos\n\n");
                printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[15], prodPreco[15]); 
                printf("Deseja adicionar ao carinho de compras?\n");
                printf("1 - Sim                                                                                                 \n");
                printf("2 - Não                                                                                                 \n");
                printf("\nOpção: ");
                scanf("%d", &carrinhoCaoFilhotes16);        
            }
                else if (tamanhoBoxCaoAdultos3==2)
            {
                printf("--------------------------------------------------------------------------------------------------------\n\n");
                printf("Você escolheu: PetBox Super Premium - Tamanho M - Para cães Adultos\n\n");
                printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[16], prodPreco[16]); 
                printf("Deseja adicionar ao carinho de compras?\n");
                printf("1 - Sim                                                                                                 \n");
                printf("2 - Não                                                                                                 \n");
                printf("\nOpção: ");
                scanf("%d", &carrinhoCaoFilhotes17);        
            }
                    else if (tamanhoBoxCaoAdultos3==3)
                     {
                     printf("--------------------------------------------------------------------------------------------------------\n\n");
                     printf("Você escolheu: PetBox Super Premium - Tamanho G - Para cães Adultos\n\n");
                     printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[17], prodPreco[17]); 
                     printf("Deseja adicionar ao carinho de compras?\n");
                     printf("1 - Sim                                                                                                 \n");
                     printf("2 - Não                                                                                                 \n");
                     printf("\nOpção: ");
                     scanf("%d", &carrinhoCaoFilhotes18); 
                     }




        else if (tamanhoBoxCaoIdosos1==1)
            {
                printf("--------------------------------------------------------------------------------------------------------\n\n");
                printf("Você escolheu: PetBox Standard - Tamanho P - Para cães Idosos\n\n");
                printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[18], prodPreco[18]); 
                printf("Deseja adicionar ao carinho de compras?\n");
                printf("1 - Sim                                                                                                 \n");
                printf("2 - Não                                                                                                 \n");
                printf("\nOpção: ");
                scanf("%d", &carrinhoCaoFilhotes19);        
            }
                else if (tamanhoBoxCaoIdosos1==2)
            {
                printf("--------------------------------------------------------------------------------------------------------\n\n");
                printf("Você escolheu: PetBox Standard - Tamanho M - Para cães Idosos\n\n");
                printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[19], prodPreco[19]); 
                printf("Deseja adicionar ao carinho de compras?\n");
                printf("1 - Sim                                                                                                 \n");
                printf("2 - Não                                                                                                 \n");
                printf("\nOpção: ");
                scanf("%d", &carrinhoCaoFilhotes20);        
            }
                    else if (tamanhoBoxCaoIdosos1==3)
                     {
                     printf("--------------------------------------------------------------------------------------------------------\n\n");
                     printf("Você escolheu: PetBox Standard - Tamanho G - Para cães Idosos\n\n");
                     printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[20], prodPreco[20]); 
                     printf("Deseja adicionar ao carinho de compras?\n");
                     printf("1 - Sim                                                                                                 \n");
                     printf("2 - Não                                                                                                 \n");
                     printf("\nOpção: ");
                     scanf("%d", &carrinhoCaoFilhotes21);        
            }
        






        else if (tamanhoBoxCaoIdosos2==1)
            {
                printf("--------------------------------------------------------------------------------------------------------\n\n");
                printf("Você escolheu: PetBox Premium - Tamanho P - Para cães Idosos\n\n");
                printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[21], prodPreco[21]); 
                printf("Deseja adicionar ao carinho de compras?\n");
                printf("1 - Sim                                                                                                 \n");
                printf("2 - Não                                                                                                 \n");
                printf("\nOpção: ");
                scanf("%d", &carrinhoCaoFilhotes22);        
            }
                else if (tamanhoBoxCaoIdosos2==2)
            {
                printf("--------------------------------------------------------------------------------------------------------\n\n");
                printf("Você escolheu: PetBox Premium - Tamanho M - Para cães Adultos\n\n");
                printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[22], prodPreco[22]); 
                printf("Deseja adicionar ao carinho de compras?\n");
                printf("1 - Sim                                                                                                 \n");
                printf("2 - Não                                                                                                 \n");
                printf("\nOpção: ");
                scanf("%d", &carrinhoCaoFilhotes23);        
            }
                    else if (tamanhoBoxCaoIdosos2==3)
                     {
                     printf("--------------------------------------------------------------------------------------------------------\n\n");
                     printf("Você escolheu: PetBox Premium - Tamanho G - Para cães Idosos\n\n");
                     printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[23], prodPreco[23]); 
                     printf("Deseja adicionar ao carinho de compras?\n");
                     printf("1 - Sim                                                                                                 \n");
                     printf("2 - Não                                                                                                 \n");
                     printf("\nOpção: ");
                     scanf("%d", &carrinhoCaoFilhotes24); 
                     }






         else if (tamanhoBoxCaoIdosos3==1)
            {
                printf("--------------------------------------------------------------------------------------------------------\n\n");
                printf("Você escolheu: PetBox Super Premium - Tamanho P - Para cães Idosos\n\n");
                printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[24], prodPreco[24]); 
                printf("Deseja adicionar ao carinho de compras?\n");
                printf("1 - Sim                                                                                                 \n");
                printf("2 - Não                                                                                                 \n");
                printf("\nOpção: ");
                scanf("%d", &carrinhoCaoFilhotes25);        
            }
                else if (tamanhoBoxCaoIdosos3==2)
            {
                printf("--------------------------------------------------------------------------------------------------------\n\n");
                printf("Você escolheu: PetBox Super Premium - Tamanho M - Para cães Idosos\n\n");
                printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[25], prodPreco[25]); 
                printf("Deseja adicionar ao carinho de compras?\n");
                printf("1 - Sim                                                                                                 \n");
                printf("2 - Não                                                                                                 \n");
                printf("\nOpção: ");
                scanf("%d", &carrinhoCaoFilhotes26);        
            }
                    else if (tamanhoBoxCaoIdosos3==3)
                     {
                     printf("--------------------------------------------------------------------------------------------------------\n\n");
                     printf("Você escolheu: PetBox Super Premium - Tamanho G - Para cães Idosos\n\n");
                     printf("Quantidade em estoque: %d\nPlano mensal:R$%.2f\n\n", prodQtd[26], prodPreco[26]); 
                     printf("Deseja adicionar ao carinho de compras?\n");
                     printf("1 - Sim                                                                                                 \n");
                     printf("2 - Não                                                                                                 \n");
                     printf("\nOpção: ");
                     scanf("%d", &carrinhoCaoFilhotes27); 
                     }

                    
                    
                     else 
                             {
                             printf("Número inválido\n");
                             printf("--------------------------------------------------------------------------------------------------------\n\n");
                             system("pause");
                             system("cls");
                             clubepet(); 
                             }


        
if (carrinhoCaoFilhotes1==1)
{
    printf("\nAcesse o seu carrinho de compras\n");
    printf("--------------------------------------------------------------------------------------------------------\n\n");
    system("pause");
    system("cls");
    menuCliente();
}
    else if (carrinhoCaoFilhotes2==1)
    {
    printf("\nAcesse o seu carrinho de compras\n");
    printf("--------------------------------------------------------------------------------------------------------\n\n");
    system("pause");
    system("cls");
    menuCliente();
    }
    else if (carrinhoCaoFilhotes3==1)
    {
    printf("\nAcesse o seu carrinho de compras\n");
    printf("--------------------------------------------------------------------------------------------------------\n\n");
    system("pause");
    system("cls");
    menuCliente();
    }                
    else if (carrinhoCaoFilhotes4==1)
    {
    printf("\nAcesse o seu carrinho de compras\n");
    printf("--------------------------------------------------------------------------------------------------------\n\n");
    system("pause");
    system("cls");
    menuCliente();
    }                 
    else if (carrinhoCaoFilhotes5==1)
    {
    printf("\nAcesse o seu carrinho de compras\n");
    printf("--------------------------------------------------------------------------------------------------------\n\n");
    system("pause");
    system("cls");
    menuCliente();
    } 
    else if (carrinhoCaoFilhotes6==1)
    {
    printf("\nAcesse o seu carrinho de compras\n");
    printf("--------------------------------------------------------------------------------------------------------\n\n");
    system("pause");
    system("cls");
    main ();
    }  
    else if (carrinhoCaoFilhotes7==1)
    {
    printf("\nAcesse o seu carrinho de compras\n");
    printf("--------------------------------------------------------------------------------------------------------\n\n");
    system("pause");
    system("cls");
    main ();
    } 
    else if (carrinhoCaoFilhotes8==1)
    {
    printf("\nAcesse o seu carrinho de compras\n");
    printf("--------------------------------------------------------------------------------------------------------\n\n");
    system("pause");
    system("cls");
    main ();
    } 
    else if (carrinhoCaoFilhotes9==1)
    {
    printf("\nAcesse o seu carrinho de compras\n");
    printf("--------------------------------------------------------------------------------------------------------\n\n");
    system("pause");
    system("cls");
    main ();
    }   


    //FALTA ADICIONAR O RESTANTE DOS IFS                            
                            else 
                             {
                             printf("Número inválido\n");
                             printf("--------------------------------------------------------------------------------------------------------\n\n");
                             system("pause");
                             system("cls");
                             clubepet(); 
                             } 
  
  
    
    
            
            
            
              


} 



