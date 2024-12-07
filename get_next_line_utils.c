/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddou <mhaddou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:56:59 by mhaddou           #+#    #+#             */
/*   Updated: 2024/12/06 20:55:32 by mhaddou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t ft_strlen(char *str)
{
    if(*str)
        return(ft_strlen(++str)+1);
    return(0);
}

char *ft_strdup(const char *str)
{
    char *ptr;
    size_t i;
    
    ptr = malloc((i = -1,ft_strlen(str)+1));
    if(!ptr)
        return(NULL);
    while (str[++i])
        ptr[i] = str[i];
    return(ptr[i] = 0,ptr);
}

char *ft_substr(const char *str , unsigned int  start , ssize_t max)
{
    
   char *s;
    ssize_t i ;
   
    if(max > ft_strlen(str)-start)
        max = ft_strlen(str)-start;
   s = malloc(( i = -1,max+1));
   if(!s)
        return(NULL);
    while (++i < max)
        s[i] = str[i+start];
    return(s[i] = 0,s);
}

char *ft_strjoin(const char *s1 , const char *s2)
{
    char *str;
    size_t i;

    str = malloc((i = 0,ft_strlen(s1) + ft_strlen(s2)+1));
    if(!str)
        return(NULL);
    while (*s1)
            str[i++] = *s1++;
    while (*s2)
            str[i++] = *s2++;
     
   return(str[i] = 0,str);
}

ssize_t ft_strnl(const char *s)
{
    char *ptr;

    ptr = (char*)s;
    while (*ptr && *ptr != '\n')
        ptr++;
    if(*ptr == '\n')
        return(ptr-s);
    return(-1);
}