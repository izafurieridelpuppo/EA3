struct tCircuito
{
    float r1;
    float r2;
    float v;
};

float resistenciaEquivalente(tCircuito c, bool serieOuParalelo);

float correnteTotal(tCircuito c, bool serieOuParalelo);

float potenciaTotal(tCircuito c, bool serieOuParalelo);

