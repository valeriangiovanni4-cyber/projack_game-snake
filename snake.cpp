#include <ncurses.h>
#include <cstdlib>
#include <ctime>

const int LEBAR = 40;
const int TINGGI = 20;

int ularX[LEBAR * TINGGI];
int ularY[LEBAR * TINGGI];
int panjang = 3;

int makananX;
int makananY;

int skor = 0;

int arahX = 1;
int arahY = 0;

bool selesai = false;

void buatMakanan() {
    makananX = rand() % LEBAR + 1;
    makananY = rand() % TINGGI + 1;
}

void gambar() {
    clear();

    for (int x = 0; x <= LEBAR + 1; x++) {
        mvaddch(0, x, '#');
        mvaddch(TINGGI + 1, x, '#');
    }

    for (int y = 0; y <= TINGGI + 1; y++) {
        mvaddch(y, 0, '#');
        mvaddch(y, LEBAR + 1, '#');
    }

    mvaddch(ularY[0], ularX[0], 'O');

    for (int i = 1; i < panjang; i++) {
        mvaddch(ularY[i], ularX[i], 'o');
    }

    mvaddch(makananY, makananX, '*');

    mvprintw(TINGGI + 3, 0, "SKOR: %d", skor);
    mvprintw(TINGGI + 4, 0, "W/A/S/D atau panah: gerak | Q: keluar");

    refresh();
}


    endwin();
    return 0;
}
