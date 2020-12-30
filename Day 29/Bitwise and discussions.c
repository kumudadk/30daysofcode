int main()
{
    int T, n, k, max, r;
    scanf("%d", &T);
    while(T != 0)
    {
        max = 0;
        scanf("%d%d",&n,&k);
        for(int i = 1; i < n; i++)
        {
            for(int j = i + 1; j <= n; j++)
            {
                r = i & j;
                if(r < k && r > max)
                    max = r;
            }            
        }
        printf("%d\n", max);
        T--;
    }
    return 0;
}
