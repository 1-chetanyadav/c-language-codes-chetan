#include <stdio.h>
int main()
{
    char ch ;
    printf("\n\nwrite a character\n");
    scanf("%c",&ch);
    
    if (ch>='a' && ch<='z')
    {
        printf("lower case %c",ch);
    }
   else if (ch>='A' && ch<='Z')
    {
        printf("upper case %c",ch);
    }
    else 
    {printf("not alphabate");
    }
    return 0;
    }




// #include <stdio.h>
// int main()
// {
//     char p = "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,x,y,z";
//     //  a=b=c=d=e=f=g=h=i=j=k=l=m=n=o=p=q=r=s=t=u=v=x=y=z=0;
//     //  int Q,W,E,R,T,Y,U,I,O,P,L,K,J,H,G,F,D,S,A,Z,X,C,V,B,N,M;
//     //  Q=W=E=R=T=Y=U=I=O=P=L=K=J=H=G=F=D=S=A=Z=X=C=V=B=N=M=20;
//     printf("write a alphabate\n\n");
//     scanf("%c", &p);
//     if (p == "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,x,y,z")
//     {
//         printf("small");
//     }
//     else
//     {
//         printf("big");
//     }
//     return 0;
// }