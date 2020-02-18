#include <stdio.h>
#include <math.h>

void compute1()
{
    const double pi = acos(-1.0);
    printf("pi is: %lf\n", pi);

    double r, h, s1, s2, s;
    scanf("%lf %lf", &r, &h);
    s1 = pi * r * r;
    s2 = 2 * pi * r * h;
    s = s1 * 2.0 + s2;
    printf("Area=%.4f\n", s);
}
void compute1_2()
{
    int n;
    scanf("%d", &n);
    printf("%d%d%d\n", n % 10, n / 10 % 10, n / 100);
}
void compute1_3()
{
    int a, b, t;
    scanf("%d%d", &a, &b);
    t = a;
    a = b;
    b = t;
    printf("%d %d\n", a, b);
}
void compute1_3_1(){
    int a, b;
    scanf("%d%d", &a, &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d\n", a, b);
}
/**
鸡兔同笼问题
*/
void chicken_rabbit(){
    int a,b,n,m;
    /*
        n 是头数，m是腿数
    */
    scanf("%d%d",&n,&m);
    a=(4*n-m)/2; // 🐔的数量
    b=n-a;  //🐰的数量
    if(m%2==1||a<0||b<0)
    printf("No answer\n");
    else
    {
        printf("%d %d\n",a,b);
    }
    
}
void sorting_3(){
    int a,b,c,t;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b){t=a;a=b;b=t;}
    if(a>c){t=a;a=c;c=t;}
    if(b>c){t=b;b=c;c=t;}
    printf("%d%d%d\n",a,b,c);
    {
        /* code */
    }
    
}
void exp_1(){
    long i  = 111111111;
    long j = i;
    printf("%ld\n", i*j);

    float m=111111111;
    float n=m;
    printf("%f\n",m*n);

    printf("%f\n",sqrt(-10));

    printf("%f\n", 1.0/0.0);
    printf("%f\n", 0.0/0.0);
    // printf("%d\n", 1/0);
    int a , b;
    scanf("%d%d", &a, &b);
    printf("%d %d\n", a, b);
    
}
void average(){
    int a,b,c;
    float d;
    scanf("%d %d %d",&a,&b,&c);
    d= (float)(a+b+c)/3;
    printf("%f\n",d);
}

void temperature(){
    float c,f;
    scanf("%f",&f);
    c=5*(f-32)/9;
    printf("%f\n",c);
}

int main()
{

    // compute1();
    // compute1_2();
    // compute1_3();
    // compute1_3_1();
    // chicken_rabbit();
    // sorting_3();
    // average();
    temperature();
    return 0;
}