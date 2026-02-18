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
    char nome[20], email[30];
    endereco ender;
    contato cont;
    aniversario aniver;
    char obs[40];
} pessoa;

void imprimir(pessoa p) {
    printf("Nome: %s\n", p.nome);
    printf("E-mail: %s\n", p.email);
    printf("Telefone: (%s) %s\n", p.cont.ddd, p.cont.telefone);
    printf("Aniversário: %d/%d/%d\n\n", p.aniver.dia, p.aniver.mes, p.aniver.ano);
}

int main () {
    pessoa agenda[100];
    int opcao, opcao2, total = 0;
    int bdia, bmes;
    char bnome[20];

    while (1) {
        printf(" --- AGENDA --- \n");
        printf("1. Buscar\n2. Inserir\n3. Excluir\n4. Listar\n5. Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
            printf("1. Buscar por primeiro nome.\n");
            printf("2. Buscar por mês de aniversário.\n");
            printf("3. Buscar por dia e mês de aniversário.\n");
            scanf("%d", &opcao2);

            switch (opcao2) {
                case 1:
                    printf("Digite o nome: ");
                    scanf("%s", bnome);
                    
                    for (int i = 0; i < total; i++) {
                        if (strcmp(agenda[i].nome, bnome) == 0) {
                            imprimir(agenda[i]);
                        }
                    }
                    break;

                case 2:
                    printf("Digite o mês: ");
                    scanf("%d", &bmes);

                    for (int i = 0; i < total; i++) {
                        if (agenda[i].aniver.mes == bmes) {
                            imprimir(agenda[i]);
                        }
                    }
                    break;

                case 3:
                    printf("Digite o dia e o mês: ");
                    scanf("%d/%d", &bdia, &bmes);

                    for (int i = 0; i < total; i++) {
                        if (agenda[i].aniver.dia == bdia && 
                            agenda[i].aniver.mes == bmes) {
                            imprimir(agenda[i]);
                        }
                    }
                    
                    break;
            }

            break;

            case 2: 
                if (total >= 100) {
                    printf("Agenda cheia.\n");
                    break;
                }

                printf("Nome: ");
                scanf("%s", agenda[total].nome);

                printf("Email: ");
                scanf("%s", agenda[total].email);

                printf("DDD: ");
                scanf("%s", agenda[total].cont.ddd);

                printf("Telefone: ");
                scanf("%s", agenda[total].cont.telefone);

                printf("Rua: ");
                scanf("%s", agenda[total].ender.rua);

                printf("Numero: ");
                scanf("%d", &agenda[total].ender.numero);

                printf("Bairro: ");
                scanf("%s", agenda[total].ender.bairro);

                printf("Cidade: ");
                scanf("%s", agenda[total].ender.cidade);

                printf("Estado: ");
                scanf("%s", agenda[total].ender.estado);

                printf("Pais: ");
                scanf("%s", agenda[total].ender.pais);

                printf("CEP: ");
                scanf("%8s", agenda[total].ender.cep);

                printf("Dia aniversario: ");
                scanf("%d", &agenda[total].aniver.dia);

                printf("Mes aniversario: ");
                scanf("%d", &agenda[total].aniver.mes);

                printf("Ano aniversario: ");
                scanf("%d", &agenda[total].aniver.ano);

                printf("Observacao: ");
                scanf("%s", agenda[total].obs);
                
                printf("Pessoa inserida com sucesso!\n");
                total++;
                break;
            
            case 3: {
                char enome[20];
                int encontrado = 0;

                printf("Digite o nome para excluir: ");
                scanf("%s", enome);

                for (int i = 0; i < total; i++) {
                    if (strcmp(agenda[i].nome, enome) == 0) {
                        // deslocamento dos próximos
                        for (int j = i; j < total - 1; j++)
                            agenda[j] = agenda[j + 1];

                        total--;
                        encontrado = 1;
                        printf("Pessoa excluida com sucesso!\n");
                        break;
                    }
                }

                if (!encontrado)
                    printf("Pessoa nao encontrada.\n");

                break;
            }

            case 4:
                for (int i = 0; i < total; i++) {
                    imprimir(agenda[i]);
                }
                
                break;

            case 5:
                return 0;
        }
    }

    return 0;
}
