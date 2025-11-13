#include <stdio.h>
typedef struct{
    int id; //Identificador do cliente
    char tipo[2]; // 'F' para Fisica e 'J' para Juridica
    char nome[100]; //nome
    char endereco[200]; // Endereco completo
    char telefone[20]; // Telefone de contato
    char email[100]; // E-mail para contato
} Cliente;