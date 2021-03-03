#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <iostream>


double plus(double a, double b)
{
    double plus = a + b;
    return plus;
}

double minus(double a, double b)
{
    double minus = a - b;
    return minus;
}

double multiply(double a, double b)
{
    double mlp = a * b;
    return mlp;
}

double divide(double a, double b)
{
    double div = a / b;
    return div;    
}

double calc(double a, char ch, double b)
{
    double result = 0;
    switch (ch)
    {
    case '+': 
        result = plus(a, b);
        break;
    case '-': 
        result = minus(a, b);
        break;
    case '*':
        result = multiply(a, b);
        break;
    case '/':
        if (b != 0)
        {
        result = divide(a, b);
        }
        else
        {
        printf("Error!");
        result = NULL;
        }
        break;
    }
    return result;
}

int main()
{
    double a;
    int ch;
    double b;
    printf("Input: ");
    scanf("%lf", &a);
    ch = getchar();
    scanf("%lf", &b);
    double result = calc(a, ch, b);
    if (result != NULL)
    {
        printf("Result: %lf\n", result);
    }
    return 0;
}