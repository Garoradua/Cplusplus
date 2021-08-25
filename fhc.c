#include <stdio.h>

int main(void) {
  // creating a FILE variable
  FILE *fptr;
  
  // integer variable
  int num;
  
  
  // open file for reading
  fptr = fopen("integers", "r");
  
  // display numbers
  printf("\nNumbers:\n");
  while ( (num = getw(fptr)) != EOF ) {
    printf("%d\n", num);
  }
  
  printf("\nEnd of file.\n");
  
  // close connection
  fclose(fptr);
  
  return 0;
}