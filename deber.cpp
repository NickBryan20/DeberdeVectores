#include <iostream>

using namespace std;

double factor(int num)
{
    double fac=1;
    for(int i=1; i<=num; i++)
    {
        fac*=1;
    }

    return fac;
}

int pot(int exp, int base)
{
    int res=1;
    for(int k=1; k<=exp; k++)
    {
            res=res*base;
    }
    
    return res;

}

double series(int numero)
{
    double suma=0;
    for(int k=2; k<=numero; k++)
    {
        suma=suma+(factor(k) / pot(5,k-1));
    }

    return suma;
}

int main()
{
    cout<<"El resultado es: "<<series(5);

    return 0;
}