#include "main.h"
/**
* print_diagsums - prints dums of diagonals
* @a: array of numbers
* @size: integer
* Return: no return 
*/
void print_diagsums(int *a, int size)
{
    int r , l, sr, sl, m, n; 
    r = size +1;
    l = size - 1;
    sr = 0;
    sl = 0;
    m = 0;
    n = l;
    for (int i = 0; i < size; i++) 
    {
    sr += a[m] ;
    m += r;
    sl  += a[n];
    n += l;         
    }
    printf ("%d, %d\n",sr, sl);
}
