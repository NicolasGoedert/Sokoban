/*
** my_str_to_wordtab.c for str in /home/nicolas94200/PSU_2016_my_sokoban
** 
** Made by goedert nicolas
** Login   <nicolas94200@epitech.net>
** 
** Started on  Wed Dec 14 08:46:10 2016 goedert nicolas
** Last update Wed Dec 14 11:52:03 2016 goedert nicolas
*/

#include <stdlib.h>


int     nbr_word(char *str)
{
  int   a;
  int   n;
  n = 0;
  a = 0;
  while (str[a] != '\0')
    {
      if (str[a] != '\n')
	a = a + 1;
      else
	{
	  a = a + 1;
	  n = n + 1;
	}
    }
  return (n);
}

int     nbr_char(char *str, int count)
{
  int   a;
  int   n;  n = 0;
  a = count;
  while (str[a] != '\0' && ((str[a] == 'P' || str[a] == 'O' ||
			     str[a] == '#' || str[a] == 'X' ||
			     str[a] == ' ')))
    {
      a = a + 1;
      n = n + 1;
    }
  return (n);
}

  void	word(int c, int *a, char *str, char **tab)
{
  int	b;
  int	ver;
  ver = nbr_char(str, *a);
  if ((tab[c] = malloc(ver + 1)) == NULL)
    return ;
  
  b = 0;
  
  while (b < ver)
    {
      tab[c][b] = str[*a];
      b = b + 1;
      (*a) = (*a) + 1;
    }
  tab[c][b] = '\0';
  while (str[*a] != '\0' && (!(str[*a] == 'P' || str[*a] == 'O' ||
			       str[*a] == '#' || str[*a] == 'X' ||
			       str[*a] == ' ')))
    (*a)++;
}

char    **wordtab(char *str, int hor)
{
  char  **tab;
  int   b;
  int   a;
  
  if ((tab = malloc(sizeof(char **) * (hor + 1))) == NULL)
    return (NULL);
  a = 0;
  b = 0;
  while (b < hor)
    {
      word(b, &a, str, tab);
      b = b + 1;
    }
  tab[b] = '\0';
  return (tab);
}

char    **str_wordtab(char *str)
{
  char  **tab;
  int   hor;
  int   i;
  
  hor = nbr_word(str);
  tab = wordtab(str, hor);
  return (tab);
}
