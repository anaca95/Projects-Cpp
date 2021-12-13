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

            if(strlen(nome)<=8 && nome!=NULL)
        {
            if(strlen(senha)<=8 && senha!=NULL){
            printf("\n >> Cadastro realizado com sucesso!");}
            else
            printf("\n >> CADASTRO DE SENHA INVALIDO!");
        }
        else 
            printf("Cadastro falhou! Verifique o usuario.");
return(0);
}