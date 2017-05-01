/*
** my.h for my.h in /home/nicolas94200/PSU_2016_my_sokoban/include
** 
** Made by goedert nicolas
** Login   <nicolas94200@epitech.net>
** 
** Started on  Wed Dec 14 11:30:52 2016 goedert nicolas
** Last update Thu Dec 15 10:06:19 2016 goedert nicolas
*/

#ifndef MY_H
# define MY_H
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <ncurses.h>
#include "my_struct.h"

char	**str_wordtab(char *str);
char	**wordtab(char *str, int hor);
int	word(int c, int *a, char *str, char **tab);
int	read2(int ac, char **av);
int	open2(char *str, char **tab);
int	localised(char **tab, t_player *player);
int	nbr_word(char *str);
int	nbr_char(char *str, int count);
int	move2(char **tab, t_player *player );
int	move3(t_player *player, char **tab);
int	move4(t_player * player, char **tab);
int	move5(t_player *player, char **tab);
int	move6(t_player *player, char **tab);

#endif
