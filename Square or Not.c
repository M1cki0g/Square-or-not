#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{ int t,n,i,j;


scanf("%d",&t);

while(t--){
    scanf("%d",&n);

    char tab[n+1];

    scanf("%s",&tab);

    j=0;
    while(j<=n && tab[j]=='1'){
        j++;
    }

    if(j==n){

        if(n==4)
            printf("Yes\n");
        else
            printf("No\n");
    }
    else{

    if((j-1)*(j-1) == n){
        printf("Yes\n");
    }
    else
        printf("No\n");
    }

}

    return 0;
}
