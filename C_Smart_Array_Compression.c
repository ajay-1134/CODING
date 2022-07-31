#include <stdio.h>
#include<stdbool.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[2 * n];
        int odd = 0, even = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        int arr1[2 * n] ;
        if (odd % 2 == 0)
        {
            int cnt = 0;
            for (int i = 0; i < 2 * n; i++)
            {
                if (arr[i] % 2 != 0)
                {
                    if (cnt < 2)
                    {
                        cnt++;
                        continue;
                    }
                    else
                    {
                        if(arr1[i] == 1) continue;

                        printf("%d ", i + 1);
                        arr1[i] = 1;
                        int ind = i + 1;
                        while (ind < 2 * n)
                        {
                            if (arr1[ind] == 0 && arr[ind]%2 == 1)
                            {
                                printf("%d\n", ind + 1);
                                arr1[ind] = 1;
                                break;
                            }
                            ind++;
                        }
                    }
                }
                else{
                    if(arr1[i] == 1) continue;
                    printf("%d ",i+1);
                    arr1[i] = 1;
                    int ind = i + 1;
                        while (ind < 2 * n)
                        {
                            if (arr1[ind] == 0 && arr[ind]%2 == 0)
                            {
                                printf("%d\n", ind + 1);
                                arr1[ind] = 1;
                                break;
                            }
                            ind++;
                        }
                }
            }
        }
        else{
            int cnt1 = 0, cnt2=0;
            for (int i = 0; i < 2 * n; i++)
            {
                if (arr[i] % 2 != 0)
                {
                    if (cnt1 < 1)
                    {
                        cnt1++;
                        continue;
                    }
                    else
                    {
                        if(arr1[i] == 1) continue;

                        printf("%d ", i + 1);
                        arr1[i] = 1;
                        int ind = i + 1;
                        while (ind < 2 * n)
                        {
                            if (arr1[ind] == 0 && arr[ind]%2 == 1)
                            {
                                printf("%d\n", ind + 1);
                                arr1[ind] = 1;
                                break;
                            }
                            ind++;
                        }
                    }
                }
                else{
                    if (cnt2 < 1)
                    {
                        cnt2++;
                        continue;
                    }
                    if(arr1[i] == 1) continue;
                    printf("%d ",i+1);
                    arr1[i] = 1;
                    int ind = i + 1;
                        while (ind < 2 * n)
                        {
                            if (arr1[ind] == 0 && arr[ind]%2 == 0)
                            {
                                printf("%d\n", ind + 1);
                                arr1[ind] = 1;
                                break;
                            }
                            ind++;
                        }
                }
            }
        }
    }
}