#include <iostream>
#include "Circuitos.h"

using namespace std;

int main()
{

    tCircuito meuCircuito;

    cout << "Entre R1 (ohms)" << endl;
    cin >> meuCircuito.r1;
    cout << "Entre R2 (ohms)" << endl;
    cin >> meuCircuito.r2;
    cout << "Entre V (volts)" << endl;
    cin >> meuCircuito.v;

    cout << "\nCálculos (configuração Série):" << endl;

    cout << "Resistência Equivalente: " << resistenciaEquivalente(meuCircuito, true) << endl;
    cout << "Corrente Total: " << correnteTotal(meuCircuito, true) << endl;
    cout << "Potência Total: " << potenciaTotal(meuCircuito, true) << endl;

    cout << "\nCálculos (configuração Paralelo):" << endl;

    cout << "Resistência Equivalente: " << resistenciaEquivalente(meuCircuito, false) << endl;
    cout << "Corrente Total: " << correnteTotal(meuCircuito, false) << endl;
    cout << "Potência Total: " << potenciaTotal(meuCircuito, false) << endl;

    return 0;
}
