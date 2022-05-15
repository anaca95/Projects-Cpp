#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include <iostream>
using namespace std;  //when using strings

class user {
  public:
    string name;   
    string surname;
    string sex;
    int age;
    int plz;
};

int main(){
    // Create an object of user
    user user_1;
    std::string username;
    std::string password;
    char nome[8]={0};
    char senha[8]={0};
    printf("Novo Cadastro\n\n");
    std::cout <<("informe o nome usuario [max 8 caracteres/numeros]:\n");
    std::cin >> username;
    user_1.name = username;
    
    std::cout << ("informe a senha [max 8 caracteres/numeros]:\n");
    std::cin >> password;
    user_1.name = password;
    printf(username.c_str(),'\n');
    printf(password.c_str());
    

           // if(strlen(username)<=8 && nome!=NULL)
       // {
       //     if(strlen(password)<=8 && senha!=NULL){
       //     printf("\n >> Cadastro realizado com sucesso!");}
       //     else
       //     printf("\n >> Cadastro falhou! Verifique a senha.");
       // }
        //else 
          //  printf("Cadastro falhou! Verifique o usuario.");
return(0);
}