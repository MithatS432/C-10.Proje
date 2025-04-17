#include <stdio.h>

// Prototipler
float ortalama(float vize, float final);   // parametreli + d�n�� de�erli
void mesajYaz(float ort);                  // void fonksiyon
int faktoriyel(int n);                     // recursion
void gosterGlobal();                       // global de�i�keni g�steren

int globalPuan = 85; // global de�i�ken

int main() {
    float vize = 60.0, final = 80.0;
    float ort;

    ort = ortalama(vize, final); // parametreli fonksiyon
    mesajYaz(ort);

    printf("5! = %d (ozyinelemeli hesaplama)\n", faktoriyel(5));

    gosterGlobal(); // global de�i�ken g�sterimi

    return 0;
}

float ortalama(float vize, float final) {
    float sonuc = (vize * 0.4f) + (final * 0.6f); // local de�i�ken
    return sonuc;
}

void mesajYaz(float ort) {
    if (ort >= 60)
        printf("Tebrikler, gectiniz! Ortalamaniz: %.2f\n", ort);
    else
        printf("Maalesef, kaldiniz. Ortalamaniz: %.2f\n", ort);
}

int faktoriyel(int n) {
    if (n <= 1) return 1;
    return n * faktoriyel(n - 1);
}

void gosterGlobal() {
    printf("Global puan degeri: %d\n", globalPuan);
}
