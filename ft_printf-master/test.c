/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <lovanden@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 11:55:12 by lovanden          #+#    #+#             */
/*   Updated: 2023/01/25 13:52:22 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char z = 'z';
	char	*str;
	int		a;
	int		b;
	int		c;
	int		d = 41;

	str = "Bonjour, ceci est un test.";
	ft_printf("%d\n", d);
	printf("%d\n", d);
	ft_printf("%s\n", str);
	printf("%s\n", str);
	a = 21;
	b = 42;
	ft_printf("a = %d et b = %d\n", a, b);
	printf("a = %d et b = %d\n", a, b);
	c = a + b;
	ft_printf("%d + %d = %d\n", a, b, c);
	printf("%d + %d = %d\n", a, b, c);
	ft_printf("%%\n");
	printf("%%\n");
	ft_printf("\n");
	printf("\n");
	ft_printf("x de str = %x\n", str);
	printf("x de str = %x\n", str);
	ft_printf("X de str = %X\n", str);
	printf("X de str = %X\n", str);
	c = a - b;
	ft_printf("%d - %d = %d\n", a, b, c);
	printf("%d - %d = %d\n", a, b, c);
	ft_printf("p de str = %p\n", str);
	printf("p de str = %p\n", str);
	ft_printf("%c\n", z);
	printf("%c\n", z);
}
