int fatorial(int numero)
{   
    int resultado = 1;
    for (int contador = numero; contador >= 1; contador--)
    {
        resultado = resultado * contador;
    }

    return resultado;
}