#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char rua[30], complemento[20], bairro[20];
    char cep[9], cidade[20], estado[20], pais[20];
    int numero;
} endereco;

typedef struct {
    char ddd[4], telefone[10];
} contato;

typedef struct {
    int dia, mes, ano;
} aniversario;

typedef struct {
    char nome[30], email[30];
    endereco ender;
    contato cont;
    aniversario aniver;
    char obs[40];
} pessoa;

int main () {
    pessoa agenda[101]; //precisa ser 101 ou pode ser 100?
    
    // busca por primeiro nome
    int char nomeBusca[10];
    scanf

    scanf
    
    return 0;
}
