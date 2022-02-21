#include<stdio.h>
int main()
{
    int Testcases; //number of Testcases
    scanf("%d\n",&Testcases);
    
    while(Testcases--)
    {
        
    float Hrdness,Carbcontent,Tensstrength; //declaration of variables
    scanf("%f %f %f",&Hrdness,&Carbcontent,&Tensstrength);
    fflush(stdin);
    
    if( Hrdness>50 && Carbcontent<0.7 && Tensstrength>5600 )
    {
        printf("10\n");
    }
    else if( Hrdness>50 && Carbcontent<0.7 )
    {
        printf("9\n");
    }
    else if( Carbcontent<0.7 && Tensstrength>5600 )
    {
        printf("8\n");
    }
    else if( Hrdness>50 && Tensstrength>5600 )
    {
        printf("7\n");
    }
    else if( Hrdness>50 || Carbcontent<0.7 || Tensstrength>5600 )
    {
        printf("6\n");
    }
    else
    {
        printf("5\n");
    }
    
    }
    return 0;
}
//code by bhumika nayak
