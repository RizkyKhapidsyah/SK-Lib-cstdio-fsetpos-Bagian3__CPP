#pragma warning(disable:4996)

#include <cstdio>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* fp;
    fpos_t pos;
    int c;

    fp = fopen("fileSaya.txt", "w+");

    fputs("Hari Yang Membosankan!\n", fp);
    fgetpos(fp, &pos);
    fputs("Cuacanya buruk", fp);

    fsetpos(fp, &pos);

    /*  Mengganti baris kedua dengan string baru  */
    fputs("Hujannya deras.", fp);
    rewind(fp);

    while (!feof(fp)) {
        c = getc(fp);
        putchar(c);
    }

    fclose(fp);

    _getch();
    return 0;
}