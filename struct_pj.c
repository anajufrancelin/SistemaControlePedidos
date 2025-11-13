#include <stdio.h>
#include "struct_cliente.c" //Inclui a definicao de cliente
typedef struct {
    Cliente dados; // Inclui os dados basicos do cliente
    char cnpj[20]; // CNPJ da empresa
    char nomeContato[100]; // Nome do responsavel ou contato
} PessoaJuridica;