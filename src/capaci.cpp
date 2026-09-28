#include <iostream>
#include <format>
#include <capaci.h>
using namespace std;

string formatcolor(char c, Color co) {
    if (co == null) return string (1,c);
    else return std::format("\033[3{}m{}\033[0m", co - 1, c);
}

class Piece {
    char piece;
    Color color;
    public:
        Piece () {
            piece = ' ';
            color = null;
        }
        Piece (const char c) {
            piece = c;
            color = null;
        }
        Piece (const char c, const Color co) {
            piece = c;
            color = co;
        }
        void printpiece () {
            cout << formatcolor(piece, color);
        }
};

class Grid {
    Piece* grid;
    unsigned short rows;
    unsigned short columns;
    public:
        Grid (const int r, const int c) {
            grid = new Piece[r * c];
            rows = r;
            columns = c;

        }
        ~Grid () {
            delete grid;
        }
        void printgrid () {
            for (unsigned short r = 0; r < rows; r++) {
                for (unsigned short c = 0; c < columns; c++) {
                    grid[r * columns + c].printpiece();
                    cout << (c == columns - 1 ? '\n' : ' ');
                }
            }
        }
        Piece getpiece (const int r, const int c) {
            return grid[r * columns + c];
        }
        void setpiece (const int r, const int c, const Piece piece) {
            grid[r * columns + c] = piece;
        }

};

int main() {

}