#include <stdio.h>

float calcularMedia(float n1, float n2)
{
    return (n1 + n2) / 2;
}

void parOuImpar(int num)
{
    if(num % 2 == 0)
    {
        printf("Numero PAR\n");
    }
    else
    {
        printf("Numero IMPAR\n");
    }
}

void converterTempo(int totalSegundos)
{
    int horas, minutos, segundos;

    horas = totalSegundos / 3600;

    minutos = (totalSegundos % 3600) / 60;

    segundos = totalSegundos % 60;

    printf("%d horas, %d minutos e %d segundos\n",
           horas, minutos, segundos);
}

int maiorNumero(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int menorNumero(int a, int b)
{
    if(a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    float nota1, nota2, media;

    int numero;

    int tempo;

    int valor1, valor2;

    printf("Digite duas notas:\n");
    scanf("%f %f", &nota1, &nota2);

    media = calcularMedia(nota1, nota2);

    printf("Media: %.2f\n\n", media);



    printf("Digite um numero:\n");
    scanf("%d", &numero);

    parOuImpar(numero);

    printf("\n");



    printf("Digite o total de segundos:\n");
    scanf("%d", &tempo);

    converterTempo(tempo);

    printf("\n");



    printf("Digite dois numeros:\n");
    scanf("%d %d", &valor1, &valor2);

    printf("Maior numero: %d\n",
           maiorNumero(valor1, valor2));

    printf("Menor numero: %d\n",
           menorNumero(valor1, valor2));

    return 0;
    system("pause");
}
