/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddou <mhaddou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:27:04 by mhaddou           #+#    #+#             */
/*   Updated: 2024/12/07 07:14:29 by mhaddou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
#define GET_NEXT_LINE

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 42
#endif
//for test porpose
#include<fcntl.h>
#include <stdio.h>
//for gnl
#include <unistd.h>
#include <stdlib.h>
char *get_next_line(int fd);
char *ft_strdup(char *str);
size_t ft_strlen(char *str);
ssize_t ft_strnl(const char *s);
char *ft_strjoin(const char *s1 , const char *s2);
char *ft_substr(const char *str , unsigned int  start , ssize_t max);
#endif