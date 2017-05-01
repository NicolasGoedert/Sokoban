/*
** move3.c for move in /home/nicolas94200/PSU_2016_my_sokoban
** 
** Made by goedert nicolas
** Login   <nicolas94200@epitech.net>
** 
** Started on  Thu Dec 15 08:32:42 2016 goedert nicolas
** Last update Thu Dec 15 10:14:38 2016 goedert nicolas
*/

#include "my.h"
#include "my_struct.h"
#include <ncurses.h>

int	move3(t_player *player, char **tab)
{
  if (tab[player->p_i][player->p_j -1] == ' ')
    {
      mvprintw(player->p_i, player->p_j - 1, "P");
      mvprintw(player->p_i, player->p_j, " ");
    }
}

int     move4(t_player *player, char **tab)
{
  if (tab[player->p_i][player->p_j + 1] == ' ')
    {
      mvprintw(player->p_i, player->p_j + 1, "P");
      mvprintw(player->p_i, player->p_j, " ");
    }
}

int     move5(t_player *player, char **tab)
{
  if (tab[player->p_i - 1][player->p_j] == ' ')
    {
      mvprintw(player->p_i - 1, player->p_j, "P");
      mvprintw(player->p_i, player->p_j, " ");
    }
}

int     move6(t_player *player, char **tab)
{
  if (tab[player->p_i + 1][player->p_j] == ' ')
    {
      mvprintw(player->p_i + 1, player->p_j, "P");
      mvprintw(player->p_i, player->p_j, " ");
    }
}
