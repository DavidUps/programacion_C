#include <stdio.h>
#include <stdlib.h>

#include "general.h"
#include "io.h"
#include "algorithms.h"

struct Color {
    const char *white;
    const char *black;
};

struct Piece {
    enum TPiece class_number;
    char symbol;
    struct Color bs;   /* Board Symbol */
    const char *name;
};

struct Piece set[] = {
   {pawn, 'P', {"♙", "♟"}, "Peón"},
   {rook, 'T', {"♖", "♜"}, "Torre"},
   {knight, 'C', {"♘", "♞"}, "Caballo"},
   {bishop, 'A', {"♗", "♝"}, "Alfil"},
   {queen, 'Q',{"♕", "♛"}, "Reina"},
   {king, 'R', {"♔","♚"}, "Rey"}
};
int
main (int argc, char *argv[])
{
  char chess_board[SIZE][SIZE];
  int row, col;
  int piece;
  do
    {
      load (BOARD_FN, chess_board);
      title ("chess");
      dump (chess_board);
      printf("Que quieres [0-Peón ♟ | 1-Torre ♜ | 2-Caballo ♞ | 3-Alfil ♝ | 4-Reina ♛ | 5-Rey ♚]: ");
      scanf(" %i", &piece);

      do
	{
	  ask_coordinates (&row, &col, set[piece].name);
	}
      while (!good_coordinates (row, col) ||
	     !is_empty (row, col, chess_board));
      print_piece (set[piece].symbol, row, col);
      check (row, col, chess_board, set[piece].class_number);
    }
  while (repeat ());

  MOVE(EXIT_LIN, 1);

  return EXIT_SUCCESS;
}

