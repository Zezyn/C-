#include "board.h"
#include "Doodlebugs.h"
#include "Ants.h"

int main() {

    Board board;
    while(true) {
    board.play();
    board.print_board();
    sleep(1000);
}
    return 0;
}
