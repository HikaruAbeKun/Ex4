#include<stdio.h>
#include<stdlib.h>

int main(){
  int D1,D2;
  srand(time(NULL));
  
  D1 = rand() % 6 + 1;
  D2 = rand() % 6 + 1;

  printf("Rolling the dice...\n");
  printf("Dice1: %d\n",D1);
  printf("Dice2: %d\n",D2);

  printf("Total value: %d\n",D1+D2);

  return 0;
}