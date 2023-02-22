/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroyet <aroyet@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:00:54 by aroyet            #+#    #+#             */
/*   Updated: 2023/02/22 12:28:45 by aroyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include "ft_printf.h"
//#include "libft.h"
#define NEWLINE() printf("\n")
int main ()
{
	int i = 42;
	int *p;
	p = &i;
	
	//BASIC CONVERSION  AND FLAGS
	printf("\n----BASIC CONVERSION  AND FLAGS----\n");
	printf("Hello world\n"); // Basic string
	printf("%d\n", 42); // Basic integer
	printf("%c\n", 'A'); // Basic character
	printf("%s\n", "hello"); // Basic string
	printf("%p\n", p); // Pointer address

	//PRECISION AND WIDTH
	printf("\n----PRECISION ANS WIDTH----\n");
	printf("%5d\n", 42); // Integer with minimum width
	printf("%05d\n", 42); // Integer with zero padding
	printf("%-5d\n", 42); // Left-aligned integer
	NEWLINE();
	//FLAGS
	printf("\n----FLAGS----\n");
	printf("%+d\n", 42); // Positive integer with sign
	printf("% d\n", 42); // Integer with space instead of sign
	printf("%#o\n", 42); // Octal integer with prefix
	printf("%#x\n", 42); // Hexadecimal integer with prefix
	printf("%#X\n", 42); // Uppercase hexadecimal integer with prefix
	printf("%*d\n", 5, 42); // Integer with variable width

	//OTHERS

printf("%p\n", NULL); // NULL POINTER
}
