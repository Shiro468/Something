#include <math.h>
void DecinalToBinary(int num)
{
    long long int liczbaBinarna = 0;
    int power =0;
    while(num > 0)
    {
        int rem = num % 2;
        long long int temp = pow(10,power);
        liczbaBinarna += rem * temp;
        power ++;
        num /= 2;
    }
    printf("%lld" , liczbaBinarna);
}
