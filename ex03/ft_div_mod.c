/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakodi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:10:21 by bakodi            #+#    #+#             */
/*   Updated: 2020/07/15 15:25:37 by bakodi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stadio.h>
#include<unistad.h>

void	ft_div_mod(int a, int b , int *div, int *mod)
{

		 int		div_result;
		 int		mod_result;
		  
		 div_result = a/b;
		 div = &div_result;
		 mod_result = a%b;
		 mod =&mod_result;
		}
 
		


