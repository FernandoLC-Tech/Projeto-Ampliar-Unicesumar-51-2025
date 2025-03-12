/*
    Escreva um programa que leia a idade de uma pessoa e informe 
    se ela é maior ou igual à 18 anos ou menor de 18 anos.
*/

#include <stdio.h>
int main(){
    int idade;
printf("Digite a idade: ");
scanf("%d", &idade);
if (idade >=18){
    printf("Voce tem mais de 18 anos");
}
else{
    printf("voce tem menos de 18 anos");
}
    return 0;
}