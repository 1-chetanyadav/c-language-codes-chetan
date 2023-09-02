        printf("type a number a \n" );
        scanf("%d",&a);
        printf("type a number b \n" );
        scanf("%d",&b);
        printf("type a number c \n" );
        scanf("%d",&c);

    if(a<=b && b>=c){
        printf("highest number is b %d\n", b);
    }
    else if(b<=c && c>=a){
        printf("highest number is c %d\n", c);
    }
    else if(c<=a && a>=b){
        printf("highest number is a %d\n", a);
    }
