#include<stdio.h>

int sequence_of_six_odd_numbers(int x )
{
    int count = 0 ;
    while(count < 6)
    {
        if(x %2 != 0){
            printf("%d\n", x );
            count++;
        }
        x++;
    }
}
int main()
{
    int n ;
    scanf("%d", &n);
    sequence_of_six_odd_numbers(n);
}
