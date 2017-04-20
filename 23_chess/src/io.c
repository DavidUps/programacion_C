#include "io.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include <error.h>
#include <errno.h>

const char *good_chars = "TCAKQP-";

void
print_usage (FILE * output)
{
  fprintf (output, USAGE, program_invocation_short_name);
}

void
error_ocurred ()
{
  print_usage (stderr);
  error (-errno, errno, "%s\n", strerror (errno));
}

int
repeat (void)
{
  char valor;
  int num;

  printf("¿Quieres repetir, s o n?");
  scanf(" %s", &valor);
  if(valor== 's')
      num = 1;
  else
      num = 0;
  return num;
}

char
transform (char c)
{
   c = toupper (c);
   if (!strchr(good_chars, c))
       c = '\0';
   if (c == '-')
       c = ' ';
   return c;
}

void

load (const char *filename, char storage[SIZE][SIZE])
{
  FILE *pf;
  char c;
  int row = 0, col = 0;

  memset(storage, ' ', SIZE*SIZE);

  pf = fopen (filename, "r");
  if (!pf)
    error_ocurred ();

  while (!feof (pf) )
  {
      c = fgetc (pf);
      if (c == '\n'){
          col = 0;
          row++;
      }
      c = transform (c);

      if (c)
          storage[row][col] = c;
      col++;

  }

  fclose (pf);
}

void
dump (char board[SIZE][SIZE])
{
    for(int f=0; f<SIZE; f++)
        for(int col=0; col<SIZE;col++)
            printf("%c", board[f][col]);
    printf("\n");
}

void
ask_coordinates (int *y, int *x, const char *name)
{
    printf("\nDame la fila: ");
    scanf(" %i", y);
    printf("Dame la columna: ");
    scanf(" %i", x);
}
