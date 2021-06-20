#include "Circuitos.h"

float resistenciaEquivalente(tCircuito c, bool serieOuParalelo)
{
    float resultado;

    if (serieOuParalelo) {
        resultado = (c.r1 + c.r2);
    } else {
        resultado = (c.r1 * c.r2) / (c.r1 + c.r2);
    } 
    
    return resultado;
}

float correnteTotal(tCircuito c, bool serieOuParalelo)
{
    return c.v / resistenciaEquivalente(c,serieOuParalelo);
}

float potenciaTotal(tCircuito c, bool serieOuParalelo)
{
    return c.v * correnteTotal(c,serieOuParalelo);
}
