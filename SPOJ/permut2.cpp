#include <cstdio>

int a[100000];

int main()
{
    int n, ans;
    while(1)
    {
        scanf("%d", &n);
        if(n == 0)
            break;
        for (int i=0; i<n; i++)
            scanf("%d",&a[i]);

        bool ambiguous = true;

        for(int i = 0; i < n; i++) {

        if (a[a[i] - 1] != i + 1) {
            ambiguous = false;
            break;
        }
    }
    if(ambiguous)
        printf("ambiguous\n");
    else
        printf("not ambiguous\n");
    }
    return 0;
}
