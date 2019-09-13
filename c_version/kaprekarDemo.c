#include<stdlib.h>
#include<stdio.h>

// this library doesn't exist in the csce server 

int main(int argc, char **argv) {
  
  int n = 0; // variable needs to be stated and assigned before use 
  
  if(argc != 2) {
    printf(stderr, "Usage: %s n\n", argv[0]); //an addition f infront of printf could have created a problem
    exit(1);
  }

  int n = atoi(argv[1]);

  if(isKaprekar(n)) {
    printf("%d is a Kaprekar Number!\n", n);
  } else if { //else if needs to be used if it is not the last statement which technically this is not
    printf("%d is not a Kaprekar Number!\n", n);
  }

  return 0;
}
