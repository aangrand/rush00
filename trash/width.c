/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 13:41:23 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/04 15:24:02 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	aff_larg(int pos, int size, int way);

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

