/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakodi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:18:15 by bakodi            #+#    #+#             */
/*   Updated: 2020/07/15 15:22:32 by bakodi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <uniio.h>

void	ft_ultimate_div_mod ( int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c/ *a;
}
