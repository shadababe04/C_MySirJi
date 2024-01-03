#include<stdio.h>
/**
 * TODO: 1.To calculate the area of a circle(TSRS)
 * TODO: 2.To calculate simple interest(TSRS)
 * TODO: 3.To check whether a given number is even or odd.Return 1 if the number is even, otherwise return 0(TSRS)
 * TODO: 4.To print first N natural numbers(TSRN)
 * TODO: 5.To print first N odd natural numbers(TSRN)
 * 
*/
float Area_circle(float r)
{
    float area;
    return area=3.14*r*r;
}

float SI(int R)
{   
    float simpleInterest;
    int P=1000;
    int T=3;
    simpleInterest=(P*R*T)/100;
    return simpleInterest;
}
int Odd_Even(int N)
{
    if(N%2==0)
        return 1; //Even
    else
        return 0; //ODD
}
void PrintNatural(int N)
{
    for(int i=1;i<=N;i++)
    {
        printf("%d ",i);
    }
}
void PrintODDNatural(int N)
{
    for(int i=1;i<=N;i++)
    {
        if(!Odd_Even(i))
        printf("%d ",i);
    }
}
int main()
{ 
    int x;
    // printf("Area of circle  = %.2f\n",Area_circle(10));
    // printf("Simple Interest = %.2f\n",SI(4));
    // x=Odd_Even(2);
    // if(x)
    //     printf("Even");
    // else
    //     printf("odd");
    // PrintNatural(10);
    PrintODDNatural(10);

    
    return 0;
}