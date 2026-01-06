#include <stdio.h>

// Zeynep Feyza Dinç
// 2420171038

// Baloncuk Sıralama 
void bubbleSort(int dizi[], int n) {
    int i, j, temp;
    for (i=0; i<n-1; i++) {
        for (j=0; j<n-i-1; j++) {
            if (dizi[j] > dizi[j + 1]) {
                temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }
}

// İkili Arama 
int binarySearch(int dizi[], int n, int aranan) {
    int sol = 0, sag = n - 1, orta;

    while (sol <= sag) {
        orta = (sol + sag) / 2;

        if (dizi[orta] == aranan)
            return orta;
        else if (dizi[orta] < aranan)
            sol = orta + 1;
        else
            sag = orta - 1;
    }
    return -1;
}

int main() {
    int dizi[100], n, i, aranan, sonuc;

    printf("Dizi eleman sayisini giriniz: ");
    scanf("%d", &n);

    printf("Dizi elemanlarini giriniz:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &dizi[i]);
    }

    // Baloncuk Sıralama
    bubbleSort(dizi, n);

    printf("\nSiralanmis dizi:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }

    printf("\n\nAranacak sayiyi giriniz: ");
    scanf("%d", &aranan);

    // İkili Arama
    sonuc = binarySearch(dizi, n, aranan);

    if (sonuc != -1)
        printf("Sayi dizide bulundu. Indeks: %d\n", sonuc);
    else
        printf("Sayi dizide bulunamadi.\n");

    return 0;
}
