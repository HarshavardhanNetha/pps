    #include <stdio.h>
    void main()
    {
        float a, b, c;
        printf("Enter three numbers: ");
        scanf("%f %f %f", &a, &b, &c);
        if (a>=b)
        {
            if(a>=c)
                printf("%2f is the largest number.\n", a);
            else
                printf("%2f is the largest number.\n", c);
        }
        else
        {
            if(b>=c)
                printf("%2f is the largest number.\n", b);
            else
                printf("%2f is the largest number.\n",c);
        }
        
    }
