/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_larg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 13:26:19 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/05 14:30:59 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
