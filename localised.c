/*
** localised.c for localised in /home/nicolas94200/PSU_2016_my_sokoban
** 
** Made by goedert nicolas
** Login   <nicolas94200@epitech.net>
** 
** Started on  Tue Dec 13 08:59:31 2016 goedert nicolas
** Last update Thu Dec 15 08:28:36 2016 goedert nicolas
*/

#include "my.h"
#include "my_struct.h"

int	localised(char **tab, t_player *player)
{
  int	i;
  int	j;
  int	x;
  int	y;

  y = 0;
  if (tab == NULL)
    return 0;
  while (tab[y] != '\0')
    {
      x = 0;
      while (tab[y][x] != '\0')
	{
	  if (tab[y][x] == 'P')
	    {
	      player->p_i = y;
	      player->p_j = x;
	    }
	  x = x + 1;
	}
      y = y + 1;
    }
}


