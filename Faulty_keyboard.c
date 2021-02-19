#include<stdio.h>
#include<string.h>

int main() {
    char S[17];
    char T[10004];
    int c=0,i=0;

    scanf("%s",T);
    scanf("%s",S);
    while(i<=strlen(S))
    {
        int j=0,flag=0,co=0,ind=0,fnd=0;
        while(j<strlen(T) && i<strlen(S))
        {
            if (T[j]==S[i])
            {
                if (co==0)
                {
                    ind=j;
                }
                co++;
                fnd=j;
                i=i+1;
                flag=1;
            }
            else
            {
                if(flag==1) break;
            }
            j++;
            
        }
        if (co==strlen(T) && flag==1)
            c=c+1;
        else if(co<strlen(T) && ind!=0 && flag==1 && fnd!=(strlen(T)-1))
            c=c+4;
        else if(ind==0 && fnd<strlen(T) && flag==1)
            c=c+2;
        else if(ind>0 && flag==1 && fnd==(strlen(T)-1))
            c=c+4;
        
        i++;
    }

    return c;
}