#include <stdio.h>

int main() {
    static const char *nome_cargos[] = { "Diretor", "Gerente", "Engenheiro", "Tecnico", "Operador" };        
    int cargo, n_faltas, horas_extras;
    double salarios_base[] = { 10000, 80000, 5000, 3000, 2000 };    
    scanf("%d", &cargo);
    cargo--;
    scanf("%d", &n_faltas);    
    scanf("%d", &horas_extras); 
    double salario_por_hora = salarios_base[cargo] / 20 / 8;
    double salario_hora_extra = salario_por_hora + 40;
    double descontos = salario_por_hora * n_faltas * 8;
    double acrescimos = salario_hora_extra * horas_extras;
    printf("%-16s: %-15s\n", "cargo", nome_cargos[cargo]);
    printf("%-16s: %-15d\n", "# de faltas", n_faltas);       
    printf("%-16s: %-15d\n", "# de horas-extra", horas_extras);        
    printf("%-16s: %-15.0f\n", "descontos", descontos);   
    printf("%-16s: %-15.0f\n", "acrescimos", acrescimos);   
    printf("%-16s: %-15.0f\n", "salario", salarios_base[cargo] - descontos + acrescimos);    
}