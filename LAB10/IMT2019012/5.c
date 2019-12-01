#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int degree_poly1;
    scanf("%d ",&degree_poly1);
    
    if(degree_poly1 < 0 && degree_poly1 >= 10)
        exit(0);

    double poly1[degree_poly1+2];
    poly1[0]=degree_poly1;
    
    for(int i=1;i<degree_poly1+2;i++)
    {
        if(i!=degree_poly1+1)
            scanf("%lf ",&poly1[i]);
        else
            scanf("%lf",&poly1[i]);
    }
    
    int degree_poly2;
    scanf("%d ",&degree_poly2);
    
    if(degree_poly1 < 0 && degree_poly1 >= 10)
        exit(0);

    double poly2[degree_poly2+2];
    poly2[0]=degree_poly2;
    
    for(int i=1;i<degree_poly2+2;i++)
    {
        if(i!=degree_poly2+1)
            scanf("%lf ",&poly2[i]);
        else
            scanf("%lf",&poly2[i]);
    }
    
    int bigger_degree=(degree_poly1>degree_poly2)?degree_poly1:degree_poly2;
    int smaller_degree=(degree_poly1<=degree_poly2)?degree_poly1:degree_poly2;
    
    double add_poly[bigger_degree+2];
    add_poly[0]=bigger_degree;
    for(int i=0;i<=smaller_degree;i++)
    {
        add_poly[bigger_degree+1-i] = poly1[degree_poly1+1-i]+poly2[degree_poly2+1-i];
    }
    for(int i=smaller_degree+1;i<=bigger_degree;i++)
    {
        if(bigger_degree == degree_poly1)
            add_poly[bigger_degree+1-i] = poly1[degree_poly1+1-i];
        else
            add_poly[bigger_degree+1-i] = poly2[degree_poly2+1-i];
    }
    
    for(int i =0 ; i<bigger_degree+2 ; i++)
    {
        if(i==0)
            printf("Addition: %.0f ",add_poly[0]);
        else if(i==bigger_degree+1)
            printf("%.2f\n",add_poly[i]);
        else
            printf("%.2f ",add_poly[i]);
    }
    
    int multiplication_degree=smaller_degree+bigger_degree;
    double multiplication_poly[multiplication_degree+2];
    for(int i =0 ; i<multiplication_degree+2 ; i++)
    {
        multiplication_poly[i]=0;
    }
    
    multiplication_poly[0] = multiplication_degree;
    for(int i=1 ; i<=degree_poly1+1 ; i++)
    {
        for(int j=1 ;j<=degree_poly2+1 ; j++)
        {
            multiplication_poly[i+j-1] += poly1[i]*poly2[j];
            /*

                power of variable gets added while coefficients gets multiplied

                degree_on_index = max_degree + 1 - index
                (multiplication_degree+1)-((degree_poly1+1-i)+(degree_poly2+1-j)) is equal to i+j-1
                as multiplication_degree = degree_poly1 + degree_poly2
            
            */
        }
    }
    
    for(int i =0 ; i<multiplication_degree+2 ; i++)
    {
        if(i==0)
            printf("Multiplication: %.0f ",multiplication_poly[0]);
        else if(i==multiplication_degree+1)
            printf("%.2f\n",multiplication_poly[i]);
        else
            printf("%.2f ",multiplication_poly[i]);
    }
    
    return 0;
}