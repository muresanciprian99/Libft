/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubblesort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 20:21:05 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/06 21:13:56 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sortasc(int *v, int n)
{
	int	i;
	int	j;
	int ok;

	i = 0;
	ok = 1;
	while (i < n - 1 && ok)
	{
		j = 0;
		ok = 0;
		while (j < n - i - 1)
		{
			if (v[j] > v[j + 1])
			{
				ft_swap(&v[j], &v[j + 1]);
				ok = 1;
			}
			++j;
		}
		++i;
	}
}
