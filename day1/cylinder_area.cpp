#include <stdio.h>
#include <math.h>
#include <time.h>

#define INF 1000000000

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
void compute1_3_1()
{
    int a, b;
    scanf("%d%d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d\n", a, b);
}
/**
鸡兔同笼问题
*/
void chicken_rabbit()
{
    int a, b, n, m;
    /*
        n 是头数，m是腿数
    */
    scanf("%d%d", &n, &m);
    a = (4 * n - m) / 2; // 🐔的数量
    b = n - a;           //🐰的数量
    if (m % 2 == 1 || a < 0 || b < 0)
        printf("No answer\n");
    else
    {
        printf("%d %d\n", a, b);
    }
}
void sorting_3()
{
    int a, b, c, t;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }
    if (a > c)
    {
        t = a;
        a = c;
        c = t;
    }
    if (b > c)
    {
        t = b;
        b = c;
        c = t;
    }
    printf("%d%d%d\n", a, b, c);

    /* code */
}

void exp_1()
{
    long i = 111111111;
    long j = i;
    printf("%ld\n", i * j);

    float m = 111111111;
    float n = m;
    printf("%f\n", m * n);

    printf("%f\n", sqrt(-10));

    printf("%f\n", 1.0 / 0.0);
    printf("%f\n", 0.0 / 0.0);
    // printf("%d\n", 1/0);
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d %d\n", a, b);
}
void average()
{
    int a, b, c;
    float d;
    scanf("%d %d %d", &a, &b, &c);
    d = (float)(a + b + c) / 3;
    printf("%f\n", d);
}

void temperature()
{
    float c, f;
    scanf("%f", &f);
    c = 5 * (f - 32) / 9;
    printf("%f\n", c);
}
void sum()
{
    int n, m;
    scanf("%d", &n);
    m = (1 + n) * n / 2;
    printf("%d\n", m);
}
void sinlucy()
{
    float n, m, p;
    scanf("%f", &n);
    m = sin(n);
    p = cos(n);
    printf("%f %f\n", m, p);
}
void year()
{
    int n;
    scanf("%d", &n);
    if ((n % 4) != 0)
        printf("no\n");
    else if (n % 4 == 0 && n % 100 == 0 && n % 400 != 0)
        printf("no\n");
    else if (n % 4 == 0 && n % 400 == 0)
        printf("yes\n");
    else
    {
        printf("yes\n");
    }
}

void discount()
{
    int n;
    float m;
    scanf("%d", &n);
    if (95 * n >= 300)
    {
        m = 95 * n * 0.85;
        printf("%.2f\n", m);
    }

    if (95 * n < 300)
    {
        m = 95 * n;
        printf("%.2f\n", m);
    }
}
void loop()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        printf("%d\n", i);
}

void sevenfour()
{
    // printf("%f\n", round(1.1));
    // printf("%f\n", round(1.5));
    // printf("%f\n", floor(1.6));
    // printf("%f\n", floor(1.4));
    // printf("%f\n", floor(1.9));

    for (int a = 1; a <= 9; a++)
    {
        for (int b = 0; b <= 9; b++)
        {
            int n = a * 1100 + b * 11;

            int m = floor(sqrt(n) + 0.5);
            if (m * m == n)
            {
                printf("%d\n", n);
                printf("%d\n", m);
            }
        }
    }
}
void sevenfour_2()
{
    for (int x = 1;; x++)
    {
        int n = x * x;

        if (n < 1000)
            continue;
        if (n > 9999)
            break;

        int hi = n / 100;
        int lo = n % 100;
        if (hi / 10 == hi % 10 && lo / 10 == lo % 10)
            printf("%d\n", n);
    }
}
void math()
{
    int a, b, c;
    int counter;
    // scanf("%d%d%d",&a,&b,&c);
    for (a = 1; a <= 9; a++)
    {
        for (b = 1; b <= 9; b++)
        {
            for (c = 1; c <= 9; c++)
            {
                if ((10 * a + b) > (10 * b + c) && (10 * b + c) > (10 * c + a))
                {
                    counter++;
                    printf("%d\n", 100 * a + 10 * b + c);
                }
            }
        }
    }
    printf("%d\n", counter);
}
void threen()
{
    int n2, count = 0;
    scanf("%d", &n2);
    long long n = n2;
    while (n > 1)
    {
        /* code */
        if (n % 2 == 1)
            n = n * 3 + 1;
        else
            n /= 2;
        count++;
        //printf("%lld\n",n);
    }
    printf("%d\n", count);
}
void near_1()
{
    double sum = 0;
    for (int i = 0;; i++)
    {
        double term = 1.0 / (i * 2 + 1);
        if (i % 2 == 0)
            sum += term;
        else
        {
            sum -= term;
        }
        if (term < 1e-10)
            break;
    }
    printf("%.10f\n", sum);
    printf("%.10f\n", sum * 4.0);
}
void fac()
{
    const int MOD = 1000000;
    int n, S = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int factorial = 1;
        for (int j = 1; j <= i; j++)
        {
            factorial = (factorial * j % MOD);
        }
        printf("%d : %d\n", i, factorial);
        S = (S + factorial) % MOD;
    }
    printf("%d\n", S % 1000000);
    printf("Time used = %.2f\n",
           (double)clock() / CLOCKS_PER_SEC);
}
void file()
{
    FILE *fin, *fout;
    fin = fopen("data.in", "rb");
    fout = fopen("data.out", "wb");
    int x, n = 0, min = INF, max = -INF, s = 0;
    while (fscanf(fin, "%d", &x) == 1)

    {
        /* code */ s += x;
        if (x < min)
            min = x;
        if (x > max)
            max = x;
        n++;
    }
    fprintf(fout, "%d %d %.3f\n", min, max, (double)s / n);
    fclose(fin);
    fclose(fout);
}
void daffodil()
{
    for (int a = 1; a <= 9; a++)

    {
        for (int b = 0; b <= 9; b++)
        {
            for (int c = 0; c <= 9; c++)
            {
                if ((100 * a + 10 * b + c) == a * a * a + b * b * b + c * c * c)
                {
                    printf("%d  %d %d %d\n", 100 * a + 10 * b + c,a,b,c);
                }
            }
        }
    }
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
    // temperature();
    //sum();
    //sinlucy();
    //year();
    //discount();
    // loop();
    //sevenfour_2();
    //math();
    //threen();
    // near_1();
    // fac();
    //file();
    daffodil();
    return 0;
}