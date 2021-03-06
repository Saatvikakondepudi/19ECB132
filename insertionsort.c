# include <stdio.h>
int main(void) {
  int input[10] = {20,3,45,1,5,4,2,19,9,7};

  for (int i=1; i<10; i++) {
    int element = input[i];
    int j = i-1;
    while ( j >= 0 && input[j] > element) {
      input[j+1] = input[j];
      j--;
    }
    input[j+1] = element;
  }

  printf("\nElements after sorting are ...\n");
  for(int i=0; i<10; i++)
    printf("%d\t", input[i]);
  return 0; 
  }
/*
Elements after sorting are ...
1   2   3   4   5   7   9   19  20  45 
*/