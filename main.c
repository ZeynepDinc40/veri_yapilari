#include <stdio.h>

// zeynep feyza dinç
// 2420171038
//https://www.btkakademi.gov.tr/portal/certificate/validate?certificateId=mKEhkVx1n9

int main() {
    int dizi[10] = {12, 34, 40, 60, 87, 93, 55, 16, 74, 11};
    int n = 10;
    int i, j, temp;
    int aranan = 55;
    int sol = 0, sag = n - 1, orta;
    int bulundu = 0;

    // baloncuk Siralama
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (dizi[j] > dizi[j + 1]) {
                temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }

    // ikili Arama
    while (sol <= sag) {
        orta = (sol + sag) / 2;

        if (dizi[orta] == aranan) {
            bulundu = 1;
            break;
        } else if (dizi[orta] < aranan) {
            sol = orta + 1;
        } else {
            sag = orta - 1;
        }
    }

    if (bulundu == 1) {
        printf("Aranan sayi dizide bulundu.\n");
    } else {
        printf("Aranan sayi dizide bulunamadi.\n");
    }

    return 0;
}
