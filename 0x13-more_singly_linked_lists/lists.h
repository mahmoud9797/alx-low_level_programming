#ifndef _LIST_H_
#define _LIST_H_
#include <stdio.h>
#include <stdlib>
typedef struct listint_s
{
	    int n;
	        struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
