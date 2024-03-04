/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luribero <luribero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 11:45:58 by luribero          #+#    #+#             */
/*   Updated: 2024/02/26 05:03:54 by luribero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>
#include <limits.h>
#include "ft_printf.h" 

double pow(double x, double y);

int main() {
	long long de;
	int	t;

	de = -2147483;
	t = 1;
	printf("\n");
	while (t < 20)	{
		printf("Loop Number: %d\n\nTesting pointer as number: %lld\n", t, de);
		printf("HEXA standard is: %x.\n", de);
		ft_printf("HEXA equivalent is: %x.\n", de);
		printf("Standard:\t%p\n", de);
		ft_printf("Mine:\t\t%p\n", de);
		printf("\nTesting number: %lld\n", (de + 10));
		printf("HEXA standard is: %x.\n", (de + 10));
		ft_printf("HEXA equivalent is: %x.\n", (de + 10));
		printf("Standard:\t%p\n", (de + 10));
		ft_printf("Mine:\t\t%p\n\n\n", (de + 10));
		t++;
		de = de * 10;
	}
    return 0;
} 
