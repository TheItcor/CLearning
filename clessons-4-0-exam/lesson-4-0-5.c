#include <stdio.h>

int main() {
    double mol = 3e-23;
    double weigh_water = 0.05; // gram
    double cup = 249.5;       // gram
    double water_drops, quantity_mols;
    
    int quantity_cups;

    
    scanf("%d", &quantity_cups);
    water_drops = (quantity_cups * cup)/weigh_water;
    quantity_mols = (quantity_cups * cup)/mol;
    
    
    
    printf("%.lf %.3e", water_drops, quantity_mols);

    return 0;
}

// Масса одной молекулы воды приблизительно равна 3×10−233×10−23 грамм.  Масса одной капли воды приблизительно 0.050.05 гр. В одном гранёном стакане ≈249.5≈249.5 гр.  Напишите программу, которая вычисляет количество капель и молекул воды в NN гранёных стаканах воды.

//Входные данные:
//Натуральное число NN −− количество стаканов воды.

//Выходные данные:
//Два числа.  Первое число −− целое число количества капель в NN стаканах воды. Второе число −− количество молекул воды в NN стаканах воды. Точность −− 3 знака после запятой.