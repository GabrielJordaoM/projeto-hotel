#include <stdio.h>
#include <stdlib.h>

//void fazerReserva(Reserva* reservas, int* totalReservas);
//void realizarCheckIn(Reserva* reservas, int totalReservas);
//void realizarCheckOut(Reserva* reservas, int totalReservas);
//void visualizarReservas(Reserva* reservas, int totalReservas);
// estes 4 comandos sao para criar/armazenar as funcoes que serao desonvolvidas mais abaixo no codigo.

// Definindo a estrutura para armazenar informações
//typedef
struct hospede {
    int numeroQuarto;
    char *nome;
    int ocupado; //0 para livre 1 para ocupado
    int diasReservados;
}Reserva;

int main() {
    struct hospede *hospede = (struct hospede *)malloc(sizeof(struct hospede));
    if (hospede == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf("Digite uma das opcoes:\n");
    printf("Bem vindo ao Hotel!\n");
    printf("1- Reservar quarto\n");
    printf("2- Realizar Check-in\n") ;
    printf("3- Realizar Check-Out\n");
    printf("4- Visualizar Reservas\n");
    printf("5- Sair do Programa\n");


    int opcao;
do {

        printf("Digite Uma das opçoes:");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                printf("Aqui vamos Reservar o seu quarto: \n");
                printf("Digite o seu nome: ");
                hospede->nome = (char *) malloc(50 * sizeof(char));  // Alocando memória para o nome e o resto
                scanf("%s", hospede->nome);

                printf("Digite qual quarto de Hotel que Voce quer: ");
                scanf("%d", &(hospede->numeroQuarto));
                hospede->ocupado = 1;

                printf("Digite a quantidades de dias de reserva: ");
                scanf("%d", &(hospede->diasReservados));

                break;

            case 2:
                printf("Certo! vamos Realizar o Check-in: \n");
                break;

            case 3:
                printf("Certo! vamos Realizar o Check-Out \n");
                break;

            case 4:
                printf("Visualizando Reservas \n");
                printf("\nInformacoes armazenadas:\n");
                printf("Nome: %s\n", hospede->nome);
                printf("quarto: %d\n", hospede->numeroQuarto);
                //printf("Status: %s\n", hospede->ocupado);
                //printf("Qtd de dias reservado: %s\n", hospede->diasReservados); //ambos estao quebrados, deve ser algo com o scanf deles
                break;


            default:
                printf("Escolha invalida! \n");

        }


    } while (opcao !=5);

    printf("Obrigado por usar nosso sistema, ate mais!\n");
    //exit(0);
    return 0;

}
