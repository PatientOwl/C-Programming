#include<stdio.h>

/* Forward declarations */
void say_hello();
int add_ten(int);
void add_twenty(int *x);
int add_array(int a[], int len);

int main() {
  int a = 5;
  int b = 0;
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

  say_hello();
  printf("a=%d, b=%d\n", a, b);
  printf("add_ten(a)=%d, add_ten(b)=%d\n", add_ten(a), add_ten(b));
  printf("a=%d, b=%d\n", a, b);
  printf("add_twenty(&b)\n");
  add_twenty(&b);
  printf("a=%d, b=%d\n", a, b);
  printf("add_ten(a)=%d, add_ten(b)=%d\n", add_ten(a), add_ten(b));
  printf("a=%d, b=%d\n", a, b);

  printf("\n\nadd_array(arr, 8) = %d\n", add_array(arr, 8));
  return 0;
}

void say_hello() {
  printf("Hello!\n");
}

int add_ten(int x) {
  return x + 10;
}

void add_twenty(int *x) {
  *x = *x + 20;
}

int add_array(int a[], int len) {
  int ii;
  int sum = 0;
  for(ii=0;ii<len;ii++) {
    sum += a[ii];
  }
  return sum;
}

/*
Output:

Hello!
a=5, b=0
add_ten(a)=15, add_ten(b)=10
a=5, b=0
add_twenty(&b)
a=5, b=20
add_ten(a)=15, add_ten(b)=30
a=5, b=20


add_array(arr, 8) = 36

*/