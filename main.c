/*
** main.c for main in /home/nicolas94200/PSU_2016_my_sokoban
** 
** Made by goedert nicolas
** Login   <nicolas94200@epitech.net>
** 
** Started on  Mon Dec 12 12:06:03 2016 goedert nicolas
** Last update Fri Jan 13 12:34:09 2017 goedert nicolas
*/

#include "my.h"
#include "my_struct.h"

int	read2(int ac, char **av)
{
  int	file;
  char	*buf;

  file = open(av[1], O_RDONLY);
  read(file, buf, 32000);
}

void	print_tab(char **tab)
{
  int	i;

  i = -1;
  while (tab[++i] != '\0')
    {
      printw(tab[i]);
      printw("\n");
    }
}

int	open2(char *str, char **tab)
{
  int		file;
  char		buf[32000];
  int		x;
  t_player	player;

  x = 0;
  if ((file = open(str, O_RDONLY)) == -1)
    exit(84);
  x = read(file, buf, 32000);
  buf[x] = '\0';
  tab = str_wordtab(buf);
  print_tab(tab);
  localised(tab, &player);
  move2(tab, &player);
}

int	move2(char **tab, t_player *player)
{
  int	ch;

  while (1)
    {
      ch = getch();
      if (ch == KEY_LEFT)
	{
	  move3(player, tab);
	}
      if (ch == KEY_RIGHT)
	{
	  move4(player, tab);
	}
      if (ch == KEY_UP)
	{
	  move5(player, tab);
	}
      if (ch == KEY_DOWN)
	{
	  move6(player, tab);
	}
      refresh();
    }
}

int     main(int ac, char **av)
{
  char  **tab;

  initscr();
  keypad(stdscr, TRUE);
  curs_set(0);
  noecho();
  open2(av[1], tab);
  refresh();
  getch();
  endwin();
  return 0;
}
