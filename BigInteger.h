#ifndef BigInteger_H_INCLUDED
#define BigInteger_H_INCLUDED


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
    int data;
    struct node*next;
}node;
typedef struct BigInteger {
    node*head;
    char sign;
    long int size;
}BIG_INT;
BIG_INT* initialize();
void display(BIG_INT* );
BIG_INT* add(BIG_INT*  , BIG_INT* );
BIG_INT* sub(BIG_INT*,BIG_INT*) ;
BIG_INT* div1(BIG_INT* , BIG_INT*);
BIG_INT* mod(BIG_INT* , BIG_INT*);
BIG_INT* mul(BIG_INT* ,BIG_INT*);

#endif