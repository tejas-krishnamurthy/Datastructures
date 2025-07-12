#include <stdio.h>

// Callback function to compare two numbers
int comp(int a, int b)
{
   if (a > b)
      printf("a is greater than b\r\n");
   else
      printf("b is greater than a\r\n");
}

// Function that accepts a callback for comparison
void Max(int (*callback)(int, int), int x, int y)
{

   // Calls the callback function
   int res = callback(x, y);
   // printf("Given Numbers: %d, %d\n" ,x, y);
   // printf("%d is greater", res);
}

int main()
{
   int x = 700, y = 10;
   // Pass the compareNumbers function as callback
   Max(comp, x, y);

   return 0;
}
