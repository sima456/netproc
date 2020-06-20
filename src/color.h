#ifndef COLOR_H
#define COLOR_H

enum schemes
{
  DEFAULT,
  MONO,
  TOT_SCHEMES
};

enum elements_in_schemes
{
  RESET,
  HEADER,
  SELECTED_H,
  SELECTED_L,
  NAME_PROG,
  NAME_PROG_BOLD,
  CONECTIONS,
  TREE,
  TOT_ELEMENTS
};

int *
define_color_scheme ( void );

#endif  // COLOR_H