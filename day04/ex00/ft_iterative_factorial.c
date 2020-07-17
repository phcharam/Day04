/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phcharam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 11:26:57 by phcharam          #+#    #+#             */
/*   Updated: 2020/07/17 11:35:08 by phcharam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int ft_iterative_factorial(int nb)
{
	int count;

	if(nb > 10)
		return(0);
	if(nb < 0)
		return(0);
	count = 1;
	while(nb >= 1)
	{
		count = count * nb;
		nb++;
	}
	return(count);
}
