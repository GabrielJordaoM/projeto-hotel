#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUARTOS 10
#define MAX_NOME_HOSPEDE 50

typedef struct {
    int numero;
    int reservado;
    int checkin;
    char nomeHospede[MAX_NOME_HOSPEDE];
} Quarto;

void inicializarHotel(Quarto* hotel, int numQuartos) {
    for (int i = 0; i < numQuartos; ++i) {
        hotel[i].numero = i + 1;
        hotel[i].reservado = 0;
        hotel[i].checkin = 0;
        strcpy(hotel[i].nomeHospede, "");
    }
}

void visualizarQuartos(Quarto* hotel, int numQuartos) {
    printf("\nQuartos disponíveis:\n");
    for (int i = 0; i < numQuartos; ++i) {
        if (!hotel[i].reservado) {
            printf("Quarto %d: Disponível\n", hotel[i].numero);
        }
    }

    printf("\nQuartos ocupados:\n");
    for (int i = 0; i < numQuartos; ++i) {
        if (hotel[i].reservado) {
            printf("Quarto %d: ", hotel[i].numero);
            if (hotel[i].checkin) {
                printf("Ocupado pelo(a) %s\n", hotel[i].nomeHospede);
            } else {
                printf("Reservado para %s, aguardando check-in\n", hotel[i].nomeHospede);
            }
        }
    }
    printf("\n");
}

void reservarQuarto(Quarto* hotel, int numQuartos, int numeroQuarto, const char* nomeHospede) {
    if (numeroQuarto < 1 || numeroQuarto > numQuartos) {
        printf("Número de quarto inválido.\n");
        return;
    }

    if (hotel[numeroQuarto - 1].reservado) {
        printf("Quarto já reservado.\n");
    } else {
        hotel[numeroQuarto - 1].reservado = 1;
        strcpy(hotel[numeroQuarto - 1].nomeHospede, nomeHospede);
        printf("Quarto %d reservado com sucesso para %s.\n", numeroQuarto, nomeHospede);
    }
}

void realizarCheckin(Quarto* hotel, int numQuartos, int numeroQuarto) {
    if (numeroQuarto < 1 || numeroQuarto > numQuartos) {
        printf("Número de quarto inválido.\n");
        return;
    }

    if (hotel[numeroQuarto - 1].reservado) {
        if (!hotel[numeroQuarto - 1].checkin) {
            hotel[numeroQuarto - 1].checkin = 1;
            printf("Check-in realizado com sucesso para o Quarto %d.\n", numeroQuarto);
        } else {
            printf("Check-in já foi realizado para o Quarto %d.\n", numeroQuarto);
        }
    } else {
        printf("Quarto não está reservado.\n");
    }
}

void realizarCheckout(Quarto* hotel, int numQuartos, int numeroQuarto) {
    if (numeroQuarto < 1 || numeroQuarto > numQuartos) {
        printf("Número de quarto inválido.\n");
        return;
    }

    if (hotel[numeroQuarto - 1].reservado) {
        if (hotel[numeroQuarto - 1].checkin) {
            hotel[numeroQuarto - 1].reservado = 0;
            hotel[numeroQuarto - 1].checkin = 0;
            strcpy(hotel[numeroQuarto - 1].nomeHospede, "");
            printf("Check-out realizado com sucesso para o Quarto %d.\n", numeroQuarto);
        } else {
            printf("Check-in não foi realizado para o Quarto %d.\n", numeroQuarto);
        }
    } else {
        printf("Quarto não está reservado.\n");
    }
}

int main() {
    Quarto hotel[MAX_QUARTOS];
    inicializarHotel(hotel, MAX_QUARTOS);

    int opcao, numeroQuarto;
    char nomeHospede[MAX_NOME_HOSPEDE];

    do {
        printf("\n=== Sistema de Hotel ===\n");
        printf("1. Visualizar Quartos\n");
        printf("2. Reservar Quarto\n");
        printf("3. Realizar Check-in\n");
        printf("4. Realizar Check-out\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                visualizarQuartos(hotel, MAX_QUARTOS);
                break;
            case 2:
                printf("Digite o número do quarto que deseja reservar: ");
                scanf("%d", &numeroQuarto);
                printf("Digite o nome do hóspede: ");
                scanf("%s", nomeHospede);
                reservarQuarto(hotel, MAX_QUARTOS, numeroQuarto, nomeHospede);
                break;
            case 3:
                printf("Digite o número do quarto para realizar o check-in: ");
                scanf("%d", &numeroQuarto);
                realizarCheckin(hotel, MAX_QUARTOS, numeroQuarto);
                break;
            case 4:
                printf("Digite o número do quarto para realizar o check-out: ");
                scanf("%d", &numeroQuarto);
                realizarCheckout(hotel, MAX_QUARTOS, numeroQuarto);
                break;
            case 0:
                printf("Saindo do sistema.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}