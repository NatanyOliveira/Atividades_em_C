/*

   Problema:
 * Dado um estacionamento com C vagas e N operações, 
   simular a entrada (C) e saída (S) de veículos que ocupam vagas consecutivas.
 * Cada veículo tem uma placa e um comprimento (quantidade de vagas necessárias).
 * Cada entrada bem-sucedida rende R$10 ao estacionamento.
 * Se não houver espaço suficiente, o veículo não entra.
 * Ao final de cada caso de teste, o programa imprime o total arrecadado.


Simula um estacionamento linear com N operações
 Cada veículo tem uma placa e ocupa um certo número de vagas seguidas
 'C' = chegada: se houver espaço contínuo, ocupa e paga R$10
 'S' = saída: libera as vagas ocupadas pela placa informada
 No final de cada caso, imprime o total arrecadado com as entradas
*/




#include <stdio.h>
#include <string.h>

#define MAX_C 1000
#define MAX_N 10000

typedef struct {
    int placa;
    int inicio;
    int comprimento;
} Veiculo;

int estacionamento[MAX_C];
Veiculo veiculos[MAX_N];
int total_veiculos;

int encontrar_vaga(int comprimento, int C) {
    int cont = 0, inicio = 0;
    for (int i = 0; i < C; i++) {
        if (estacionamento[i] == 0) {
            if (cont == 0) inicio = i;
            cont++;
            if (cont == comprimento)
                return inicio;
        } else {
            cont = 0;
        }
    }
    return -1;
}

void liberar_vaga(int placa, int C) {
    for (int i = 0; i < total_veiculos; i++) {
        if (veiculos[i].placa == placa) {
            int ini = veiculos[i].inicio;
            int tam = veiculos[i].comprimento;
            for (int j = ini; j < ini + tam; j++) {
                estacionamento[j] = 0;
            }
          
            veiculos[i].placa = -1;
            return;
        }
    }
}

int main() {
    int C, N;
    while (scanf("%d %d", &C, &N) != EOF) {
        memset(estacionamento, 0, sizeof(estacionamento));
        total_veiculos = 0;
        int faturamento = 0;

        for (int i = 0; i < N; i++) {
            char op;
            int placa, comprimento;
            scanf(" %c", &op);

            if (op == 'C') {
                scanf("%d %d", &placa, &comprimento);
                int pos = encontrar_vaga(comprimento, C);
                if (pos != -1) {
                    for (int j = pos; j < pos + comprimento; j++) {
                        estacionamento[j] = placa;
                    }
                    veiculos[total_veiculos++] = (Veiculo){placa, pos, comprimento};
                    faturamento += 10;
                }
            } else if (op == 'S') {
                scanf("%d", &placa);
                liberar_vaga(placa, C);
            }
        }
        printf("%d\n", faturamento);
    }
    return 0;
}


 