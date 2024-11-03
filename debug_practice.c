#include <stdio.h>

int calculate_sum(int n) {
  int sum = 0;
  int i;
  for(i =0; i <=n; i++) {
    sum += i;
  }
  return sum;
}

int factorial(int n) {
  if(n < 0) return 0;
  if(n == 0) return 1;
  return n * factorial(n-1);
}


void print_array(int arr[], int size) {
  int i;
  for(i = 0; i <= size; i++) {
    printf("Element %d: %d\n", i, arr[i]);
  }
}

int main() {

  int sum = calculate_sum(3);
  printf("Sum from 0 to 3: %d\n", sum);


  int fact = factorial(4);
  printf("Facorial of 4: %d\n",fact);

  int numbers[] = {1,2,3,4,5};
  print_array(numbers, 5);

  return 0;
}
