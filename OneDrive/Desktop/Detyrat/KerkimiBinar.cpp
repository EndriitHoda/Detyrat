#include <bits/stdc++.h>
using namespace std;

// funksioni rekursiv i kerkimit binare. 
//Ajo e kthen indeksin e x-it ne vargun e dhene nese eshte prezent ne varg nese jo e kthen -1.
int KerkimiBinar(int arr[], int m, int d, int x)
{
    if (d >= m) {
        int mes = m + (d - m) / 2;

        // nese elementi qe kerkohet ndodhet vet ne mes
        if (arr[mes] == x)
            return mes;

        // Nese elemti qe e kerkojme ka vlere me te vogel se elementi ne mes, 
        // athere ajo munde te jete presente vetem me pjesen e majt te elementeve ne varg
        if (arr[mes] > x)
            return KerkimiBinar(arr, m, mes - 1, x);

        // Perndryshe elementi munde te jete present vetem ne pjesen e djathte te vargut te dhene
        return KerkimiBinar(arr, mes + 1, d, x);
    }

    // Nese elementi qe kerkohet nuk ndodhet ne varg
    return -1;
}

int main(void)
{
    int gr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(gr) / sizeof(gr[0]);
    int rez = KerkimiBinar(gr, 0, n - 1, x);
    (rez == -1) ? cout << "Elementi nuk ndodhet ne varg"
        : cout << "Elementi ndodhet ne indeksin " << gr;
    return 0;
}