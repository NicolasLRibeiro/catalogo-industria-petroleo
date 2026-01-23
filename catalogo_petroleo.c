/*
NOME: NICOLAS_LOURENCO_RIBEIRO
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char nome [50];
    int primeiroAcesso, senha,confirmaSenha,tentativaSenha;
    int opcaoProduto, continuarCompra;
    float totalCompra = 0;
    int formaPagamento;
    
    printf("=========================================================================\n");
    printf("=========================================================================\n");
    printf("=========================================================================\n");
    printf("                          BEM VINDO A PETRONICAS                         \n");
    printf("              Sua Fonte Confiavel em soluções petroquimicas              \n");
    printf("=========================================================================\n");        
    printf("=========================================================================\n");
    printf("=========================================================================\n");
    printf("\nOlá! Somos especialistas em soluçoes petroquimicas que transformam o mundo.\n");
    printf("Explore nossos produtos e aproveite os melhores preços do mercado!\n\n");
    
    printf("informe seu nome:");
    scanf("%s", nome);
    
    printf("primeiro Acesso, %s? [1]Sim [2]Não: ", nome);
    scanf("%d", &primeiroAcesso);
    
    if(primeiroAcesso ==1) {
        do {
            printf("Cadastre uma senha que tenha 8 numeros: ");
            scanf("%d", &senha);
            printf("confirme a senha: ");
            scanf("%d", &confirmaSenha);
            
            if (senha !=confirmaSenha) {
                printf("Senha nao confirmada. tente novamente.\n");
            }
        } while (senha !=confirmaSenha);
    } else { 
        do {
            printf("Digite sua senha: ");
            scanf("%d", &tentativaSenha);
            
            if(tentativaSenha != senha) {
                printf("Senha incorreta. Tente novamente.\n");
            }
        } while (tentativaSenha != senha);
    }
    
    do {
        printf("\n=============Lista de Produtos==================\n");
        printf("[1] Combustivel Refinado -----------------R$500.00\n");
        printf("[2] Lubrificante industrial --------------R$300.00\n");                             
        printf("[3] Componentes Quimicos -----------------R$1000.00\n");
        printf("[4] Equipamentos de segurança ------------R$1500.00\n");
        printf("Total da compra: R$%2f\n", totalCompra);
        scanf("%d", &opcaoProduto);
        
        switch(opcaoProduto) {
            case 1:
                totalCompra +=500.0;
                printf("Produto escolhido: Combustivel Refinado no valor de de R$500.00\n");
                break;
            case 2:
                totalCompra +=300.0;
                printf("Produto escolhido: Lubrificante industrial no valor de R$300.00\n");
                break;
            case 3:
                totalCompra +=1000.0;
                printf("Produto escolhido: Compomentes Quimicos no valor de R$1000.00\n");
            case 4:
                totalCompra +=1500.0;
                printf("Produto escolhido: Equipamentos de segurança no valor de R$1500.00\n");
                break;
            default:
                printf("Opcao invalida.\n");
                break;
        }
        
        printf("Quer comprar outro produto? [1]sim [2]nao ");
        scanf("%d", &continuarCompra);
        
    } while (continuarCompra ==1);
    
    printf("\n================== Forma de Pagamento ==================\n");
    printf("Total da compra: R$%.2f\n", totalCompra);
    printf("[1] A vista com 10%% de desconto\n");
    printf("[2] Parcelado em até 15x sem juros\n");
    printf("[3] Parcelado em até 37x com juros (20%%)\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &formaPagamento);
    
    switch(formaPagamento) {
        case 1:
        totalCompra *=0.90;
        printf("Pagamento a vista com desconto de 10%%. Total: R$%.2f\n", totalCompra);
        break;
    case 2:
        printf("Pagamento parcelado em 15x de R$%.2f\n", totalCompra / 15);
        break;
    case 3:
        totalCompra *1.20;
        printf("Pagamento parcelado em 37x de R$%2.f (com juros). Total: R$%.2f\n", totalCompra / 37, totalCompra);
        break;
    default:
        printf("Opcao invalida.\n");
        break;
    }
    
    printf("\nobrigado por usar nossos serviços, %s!\n", nome);
    
    return 0;
    }
    
    
    
    
    
    
    
    
        
        
        
