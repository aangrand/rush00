/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heigh.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 13:56:18 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/04 15:21:31 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
