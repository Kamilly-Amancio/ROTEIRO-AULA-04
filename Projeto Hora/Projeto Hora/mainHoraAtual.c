/*
NOME: KAMILLY AMANCIO BATISTA - MATRICULA: 202202570397
NOME: VICTOR LUCAS DA ROCHA MAIA - MATRICULA: 202202579981
NOME: RUBENS FERREIRA BARBOZA - MATRICULA: 202202640948
*/

#include <graphics.h> //BIBLIOTECA GRAPHICS 
#include <stdio.h> // BIBILOTECA BÁSICA DE ENTRADA E SAÍDA 
#include <time.h> // BIBLIOTECA 

int main() {
    initwindow(400, 400); //JANELA DO WINDOWS DIMENSÕES 

    settextjustify(CENTER_TEXT, CENTER_TEXT); //JUSTIFICAÇÃO DO TECTO PARA O CENTRO DA JANELA
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 3); //DEFINI O ESTILO E A APARECENCIA DO TEXTO

    char time_str[9]; // VARIAVEL DO CRONOMETRO
    time_t start_time, current_time; //VARIAVEIS DA BIBLIOTECA TIME.H 
    int time_to_run = 60; // TEMPO EM QUE A TELA DE DEVE FICAR SENDO EXECUTADA
    setcolor(CYAN); //MUDAR ACOR DO TEXTO
    start_time = time(NULL); //HORARIO ATUAL 
    while (difftime(time(NULL), start_time) < time_to_run) { //VERIFICAÇÃO ENTRE MOMENTO ATUAL E O VALOR ARMAZENADO NA start_time
        current_time = time(NULL); //HORARIO ATUAL 
        strftime(time_str, sizeof(time_str), "%H:%M:%S", localtime(&current_time)); //EXIBIÇÃO DO HORARIO ATUAL
        outtextxy(getmaxx() / 2, getmaxy() / 2, time_str); // EXIBE O TEXTO NA TELA
        delay(1000); //PAUSA A EXECUÇÃO DO PROGRAMA
        cleardevice(); //LIMPA A TELA
    }

    getch(); //SEGURA A TELA
    closegraph(); //FECHA O GRAPHIC
    return 0;
    
}
