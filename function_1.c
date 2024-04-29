#include <stdio.h>
int sum(int x, int y)
{
    int sum = x + y;
    return sum;
}
// int sum(int x,int y);
int main()
{
    // int s = sum(10, 20);
    printf("%d\n", sum(40, 20));
    printf("%d\n", sum(80, 20));
    return 0;
}
// int sum(int x, int y)
// {
//     int sum = x + y;
//     return sum;
// }