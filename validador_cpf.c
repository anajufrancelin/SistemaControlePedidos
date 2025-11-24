#include <stdio.h>
#include <string.h>
#include <ctype.h>
int validarCPF(char cpf[]) {
    char numeros[12];
    int j = 0;
    //remove caracteres nao numericos
    for(int i=0; i<strlen(cpf); i++){
        if(isdigit(cpf[i])){
            numeros[j] = cpf[i];
            j++;
        }
    }
    numeros[j] = '/0';
    //verifica se tem 11 digitos
    if(strlen(numeros) != 11)
    return 0;
    //verifica se todos os digitos sao iguais (invalido)
    int iguais =1;
    for(int i=1; i<11;i++){
        if(numeros[i] != numeros[0]){
            iguais =0;
            break;
        }
    }
    if(iguais)
    return 0;
    //calculo dos digitos verificadores
    int soma =0, resto, digito1, digito2;
    //calculo do primeiro digito
    for(int i=0, peso =10; i<9; i++, peso--){
        soma +=(numeros[i]-'0') * peso;
    }
    resto = soma % 11;
    digito1 = (resto <2) ? 0 : 11 - resto;
    //calculo do segundo digito
    soma =0;
    for(int i=0, peso=11; i<10; i++, peso--){
        soma += (numeros[i] - '0') * peso;
    }
    resto = soma % 11;
    digito2 = (resto <2) ? 0 : 11 - resto;

    //verifica se os digitos calculados batem com o cpf informado
    if(digito1 == (numeros[9] - '0') && digito2 == (numeros[10] - '0'))
    return 1; //CPF invalido
    return 0; // CPF valido
}