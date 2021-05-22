#include <bits/stdc++.h>
using namespace std;
//funksioni i kerkimit sekuencial
//Ajo e kthen indeksin e x-it ne vargun e dhene nese eshte prezent ne varg nese jo e kthen -1.
int kerkimi_sekuencial(int arr[], int _vlera_kerkuar, int n)
{
    // Supozojme se indeksi ka vleren -1
    int indeksi = -1;
    //Shikojme nese vlera e kerkuar ndodhet ne varg
    for (int i = 0; i < n; i++)
        if (arr[i] == _vlera_kerkuar) {
            //Nese vlera e kerkuar ndodhet ne varg indeksi merr vleren e indeksit tw asaj vlere.
            indeksi = i;
            break;
        }
    //Ne rast se vlera nuk ndodhet ne varg
    return indeksi;
}
int main(void)
{
    int gr[] = { 2, 3, 4, 10, 40 };
    int x = 11;
    int n = sizeof(gr);
    int rez = kerkimi_sekuencial(gr, x, n);
    (rez == -1) ? cout << "Elementi nuk ndodhet ne varg"
        : cout << "Elementi ndodhet ne indeksin " << gr;
    return 0;
}