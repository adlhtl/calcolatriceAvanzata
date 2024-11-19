#include <iostream>
using namespace std;

/* Stampa i saluti iniziali */
void benvenuti() {
    cout << "Benvenuti nella Calcolatrice Avanzata della 3CI" << endl;
}

void crediti() {
    cout << "Al programma hanno contribuito i seguenti programmatori:" << endl;
    cout << "Riccardo Rosso" << endl;
}

/* Stampa le regole */
void regole_menu() {
    cout << "La calcolatrice lavora con input interi" << endl;
    cout << "Le modalità accessibili sono le seguenti:" << endl;
    cout << "Modalità espressione unaria di base [digitare 1]" << endl;
    cout << "Modalità espressione unaria avanzata [digitare 2]" << endl;
    cout << "Modalità espressione binaria di base [digitare 3]" << endl;
    cout << "Modalità espressione binaria manuale [digitare 4]" << endl;
    cout << "Modalità espressione unaria avanzata [digitare 5]" << endl;
    cout << "Stampa i crediti [digitare 0]" << endl;
}

/* Scelta utente dal menu */
int scelta_menu() {
    int scelta = 0;
    
    cout << "Inserisci la scelta: ";
    cin >> scelta;
    return scelta;
}

void gestisci_errore() {
    cout << "Errore nella scelta" << endl;
}

/* Funzione principale */
int main() {
    int scelta = 0;
    
    benvenuti();
    regole_menu();
    scelta = scelta_menu();
    
    return 0;
}
