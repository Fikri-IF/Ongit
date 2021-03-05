#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int a,b,pilih;
float n;

float jumlah(int a,int b)
{
    return (a+b);
}
float kurang(int a,int b)
{
    return (a-b);
}
float kali(int a,int b)
{
    return (a*b);
}
float bagi(int a,int b)
{
    return (a/b);
}
float pangkat(int a,int b)
{
    int temp=a;
    for (int i=0;i<b-1;i++)
    {
        temp=temp*a;
    }
    return temp;
}
float f(float x) /* asumsi persamaan f(x) = 5x - x^2 */
{
    return (5*x- x*x);
}
float riemann (int a,int b,float n)
{
    float tinggi,alas,atap,x_alas,x_atap,total=0;
    tinggi=(a-b)/n;
    x_atap=b;
    x_alas=b+tinggi;
    atap=f(x_atap);
    alas=f(x_alas);
    for (int i=0;i<n;i++)
    {
        total=total+(atap+alas)*tinggi/2;
        x_atap=x_atap+tinggi;
        x_alas=x_alas+tinggi;
        atap=f(x_atap);
        alas=f(x_alas);
    }
    return total;
}


int main()
{
    cout << "KALKULATOR\n" << endl;
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. pembagian\n";
    cout << "5. perpangkatan\n";
    cout << "6. integral riemann\n";
    cout << "Pilih menu = "; cin >> pilih;
    switch(pilih)
    {
    case 1:
        {
            cout << "Masukkan bilangan pertama = "; cin >> a;
            cout << "Masukkan bilangan kedua = "; cin >> b;
            cout << "Hasil = " << jumlah(a,b);
            break;
        }
    case 2:
        {
            cout << "Masukkan bilangan pertama = "; cin >> a;
            cout << "Masukkan bilangan kedua = "; cin >> b;
            cout << "Hasil = " << kurang(a,b);
            break;
        }
    case 3:
        {
            cout << "Masukkan bilangan pertama = "; cin >> a;
            cout << "Masukkan bilangan kedua = "; cin >> b;
            cout << "Hasil = " << kali(a,b);
            break;
        }
    case 4:
        {
            cout << "Masukkan pembilang = "; cin >> a;
            cout << "Masukkan penyebut = "; cin >> b;
            cout << "Hasil = " << bagi(a,b);
            break;
        }
    case 5:
        {
            cout << "Masukkan bilangan pokok = "; cin >> a;
            cout << "Masukkan pangkat = "; cin >> b;
            cout << "Hasil = " << pangkat(a,b);
            break;
        }
    case 6: /* asumsi persamaan f(x) = 5x - x^2 */
        {
            cout << "Masukkan batas atas = "; cin >> a;
            cout << "Masukkan batas bawah = "; cin >> b;
            cout << "Masukkan banyak Interval = "; cin >> n;
            if (a<b)
            {
                cout << "batas atas harus lebih besar dari batas bawah, silahkan ulangi masukan\n" << endl;
                main();
            }
            else
            {
                cout << "Hasil = " << riemann(a,b,n);
            }
            break;
        }
    default:
        {
            cout << "pemilihan menu salah\n\n";
            main();
        }
    }
}
