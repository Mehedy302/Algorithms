#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

struct queue {
  int items[SIZE];
  int front;
  int rear;
};