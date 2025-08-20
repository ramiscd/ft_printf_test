/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youvisa <youvisa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 19:48:18 by youvisa           #+#    #+#             */
/*   Updated: 2025/08/19 20:35:52 by youvisa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

void ft_printf_fake(char *string, int n)
{
  int i = 0;
  while (string[i])
  {
    write(1, &string[i], 1);
    i++;
  }
  write(1, &n, 4);
}

int soma(int qtd, ...)
{
  va_list args;
  va_start(args, qtd);

  int total = 0;
  int i = 0;
  while(i < qtd)
  {
    printf("i: %d\n", i);
    int num = va_arg(args, int);
    printf("total: %d\n", total);
    total += num;

    i++;
  }

  va_end(args);
  return total;
}

int main()
{
  printf("%d\n", soma(3, 5, 8));
  // printf("Ola mundo");
  // int n = 5;
  // ft_printf_fake("olá, imprima na tela o número: ", n);
  return (0);
}