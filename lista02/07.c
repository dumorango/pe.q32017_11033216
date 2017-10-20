#include <stdio.h>
#include <math.h>

double converte_temperatura(int unidade_de_entrada, int unidade_de_saida, double valor_de_entrada);
int converte_base_numerica(int unidade_de_entrada, int unidade_de_saida, int valor_de_entrada);
int decimal_to_binario(int decimal);
int binario_to_decimal(int decimal);
double celcius_to_fahrenheit(double temperatura);
double celcius_to_kelvin(double temperatura);
double fahrenheit_to_celcius(double temperatura);
double fahrenheit_to_kelvin(double temperatura);
double kelvin_to_celcius(double temperatura);
double kelvin_to_fahrenheit(double temperatura);

int main() {
    int tipo_de_conversao, unidade_de_entrada, unidade_de_saida;      
    double valor_de_entrada, valor_de_saida;
    int valor_de_entrada_int, valor_de_saida_int;
    
    scanf("%d", &tipo_de_conversao);
    scanf("%d", &unidade_de_entrada);
    scanf("%d", &unidade_de_saida);    

    switch(tipo_de_conversao) {
        case 1:            
            scanf("%lf", &valor_de_entrada); 
            valor_de_saida = converte_temperatura(unidade_de_entrada, unidade_de_saida, valor_de_entrada);
            printf("%f", valor_de_saida);
            break;
        case 2:                 
            scanf("%d", &valor_de_entrada_int); 
            valor_de_saida_int = converte_base_numerica(unidade_de_entrada, unidade_de_saida, valor_de_entrada_int);
            printf("%d", valor_de_saida_int);
            break;
    }
    return 0;       
}

int decimal_to_binario(int decimal)
{
    int binario = 0, i = 1;
    while (decimal != 0) {        
        binario += decimal % 2 * i;
        decimal = decimal / 2;
        i*=10;
    }
    return binario;
}

int binario_to_decimal(int decimal)
{
    return 0;
}

double converte_temperatura(int unidade_de_entrada, int unidade_de_saida, double valor_de_entrada) 
{
    double valor_de_saida = 0.0;
    switch(unidade_de_entrada) {
        case 1:
            switch(unidade_de_saida) {
                case 2: valor_de_saida = celcius_to_fahrenheit(valor_de_entrada); break;
                case 3: valor_de_saida =  celcius_to_kelvin(valor_de_entrada); break;
            }            
        case 2:
            switch(unidade_de_saida) {
                case 1: valor_de_saida = fahrenheit_to_celcius(valor_de_entrada); break;
                case 3: valor_de_saida = fahrenheit_to_kelvin(valor_de_entrada); break;
            }            
        case 3:
            switch(unidade_de_saida) {
                case 1: valor_de_saida = kelvin_to_celcius(valor_de_entrada); break;
                case 2: valor_de_saida = kelvin_to_fahrenheit(valor_de_entrada); break;
            }                       
    }
    return valor_de_saida;
}

double celcius_to_fahrenheit(double celcius) 
{
    return celcius * (9.0/5.0) + 32;
}

double celcius_to_kelvin(double celcius) 
{
    return celcius + 273.0;
}

double fahrenheit_to_celcius(double farenheit) 
{
    return (farenheit - 32) * (5.0/9.0);
}

double fahrenheit_to_kelvin(double farenheit)
{
    double celcius = fahrenheit_to_celcius(farenheit);
    return celcius_to_kelvin(celcius);
}

double kelvin_to_celcius(double kelvin)
{
    return kelvin - 273.0;
}

double kelvin_to_fahrenheit(double kelvin)
{
    double celcius = kelvin_to_celcius(kelvin);
    return celcius_to_fahrenheit(celcius);
}

int converte_base_numerica(int unidade_de_entrada, int unidade_de_saida, int valor_de_entrada)
{
    return valor_de_entrada;
}