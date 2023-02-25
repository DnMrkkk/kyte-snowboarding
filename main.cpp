/*! 
    \file main.cpp
    \author Danilo Marcucci
    \brief esercizio per calcolare la distanza di un kyte-snowboarder
    \version 1.0
    \date 21/02/2023

*/


#include <iostream>
#include <ctime>
#include <fstream>
#include <math.h>
#define FILE_NAME "dati.txt"

using namespace std;


/*!
    \struct s_info
    \brief per l'implementazine software delle caratteristiche del kyte-snowboarder
*/
struct s_info{
    public:
        int matricola;
        string cognome;
        int x[30];
        int y[30];
        int tot_dist = 0;
}partecipanti[20];
int n_part = 0;


/*!
    \fn inserimento
    \brief funzione per l'inserimento dei partecipanti
*/
void inserimento(){

    cout << "Quanti partecipanti vuoi inserire?(max 20): ";
    cin >> n_part;
    for(int i = 1; i <= n_part; i++){
        cout << "Inserisci cognome del " << i << " partecipante: ";
        string c;
        cin >> c;
        partecipanti[i-1].cognome = c;
        partecipanti[i-1].matricola = i;
    }
}

/*!
    \fn avvia_gara
    \brief funzione per la rilevazione del percorso dei partecipanti
*/
void avvia_gara(){
    for(int i = 0; i < n_part; i++ ){
        for(int c = 0; c < rand()%16+15; c++){
            partecipanti[i].x[c] = rand()%101;
            partecipanti[i].y[c] = rand()%101;
            partecipanti[i].tot_dist += sqrt(pow(partecipanti[i].x[c], 2) + pow(partecipanti[i].y[c] = rand()%101, 2));
        }
    }


    
}



/*!
    \fn menu
    \brief menu'
*/
short menu(){
    int scelta;
    while(true){
        cout << "1-Inserisci cognome partecipante(max 20)\n2-Avvia gara\n3-Visualizza classifica\n4-Esci\n>> ";
        cin >> scelta;
        switch(scelta){
            case 1:
                inserimento();
                break;
            case 2:
                avvia_gara();
                break;
            case 3:

                break;
            case 4:
                return 0;
        }
    }
}

/*!
    \fn main
    \brief dove tutto ebbe inizio
*/
int main(){
    menu();
    return 0;
}