/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 10:42:31 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/05 14:56:09 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	aff_larg(int pos, int size, int way)
{
	char x;
	char y;
	char z;

	y = 'B';
	if (way == 1)
	{
		x = 'A';
		z = 'C';
	}
	else
	{
		x = 'C';
		z = 'A';
	}
	if (pos == 1)
		ft_putchar(x);
	else if (pos == size)
		ft_putchar(z);
	else
		ft_putchar(y);
}

void	width(int size, int way)
{
	int n;

	n = 1;
	if (size == 1)
	{
		aff_larg(n, size, way);
	}
	else
	{
		while (n <= size)
		{
			aff_larg(n, size, way);
			n++;
		}
	}
}

void	heigh(int size)
{
	int n;

	n = 1;
	if (size == 1)
	{
		ft_putchar('B');
	}
	else
	{
		while (n <= size)
		{
			if (n == 1 || n == size)
				ft_putchar('B');
			else
				ft_putchar(' ');
			n++;
		}
	}
}

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
