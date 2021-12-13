#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    char nome[8]={0};
    char senha[8]={0};
    printf("Novo Cadastro\n\n");
    printf("informe o nome usuario [max 8 caracteres/numeros]:\n");
    gets(nome);
    printf("informe a senha [max 8 caracteres/numeros]:\n");
    gets(senha);

        if(strlen(nome)<=8 && nome!=NULL && strlen(senha)<=8 && senha!=NULL)
        {
            printf("\n >> Cadastro realizado com sucesso!");
        }
        else if(strlen(nome)<=8 && nome!=NULL && strlen(senha)>8 || senha==NULL){   //trocar por switch

            printf("\n >>nome usuário valido, SENHA INVALIDA!");
        }
        else if(strlen(senha)<=8 && senha!=NULL){

            printf("\n >>senha valida, USUARIO INVALIDO!");
        }
        else 
            printf("Cadastro falhou! Verifique o usuario e senha e tente novamente!");
return(0);
}