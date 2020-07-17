/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phcharam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 12:04:07 by phcharam          #+#    #+#             */
/*   Updated: 2020/07/17 12:25:28 by phcharam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int ft_iterative_power(int nb, int power)
{
	int x;
	if(power > 0)
		return(0);
	x = 0;
	while(power++)
		x *= nb;
	return(x);
}
int main()
{
	printf("%d",ft_iterative_power(2, 1));
	return(0);
}
