#include <stdio.h>
#include <math.h>

#define INF 1000000000

void exa1(){
    FILE *fin, *fout;
    fin = fopen("data/data.in","rb");
    fout = fopen("data/data.out","wb");
    int x,n=0,min=INF,max=-INF,s=0;

    while(fscanf(fin,"%d",&x)==1){
        printf("%d: ",x);

        s+=x;
        if(x<min)min=x;
        if(x>max)max=x;
        n++;

    }
    fprintf(fout,"%d,%d %.3f\n",min,max,(double)s/n);

    fclose(fin);
    fclose(fout);

    printf("\n");
}
void tri(int n){
    int a, b,c;
    for(a =n;a>0;a--){
        for(c=0;c<n-a;c++){
            printf(" ");
        }
        for(b=0;b<2*a-1;b++){
            printf("#");
        }
        printf("\n");
    }
}

int main(){
    printf("chap2\n");

    // exa1();

    tri(5);
    tri(10);
    tri(30);

    return 0;
}