/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 10:42:31 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/05 14:00:47 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int g_way;

void	ft_putchar(char c);
void	width(int size, int way);
void	heigh(int size);

void	rush(int x, int y)
{
	int n;

	n = 1;
	if (y == 1)
		width(x, n);
	else
	{
		while (n <= y)
		{
			if (n == 1 || n == y)
			{
				width(x, n);
				ft_putchar('\n');
			}
			else
			{
				heigh(x);
				ft_putchar('\n');
			}
			n++;
		}
	}
}

int		main(void)
{
	rush(5, 10);
	return (0);
}
