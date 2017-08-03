#include <stdio.h>
#include <stdlib.h>

typedef struct person {
    char name[];
    char number[];
} person;

typedef struct node {
  struct person;
  struct node * next;
}
