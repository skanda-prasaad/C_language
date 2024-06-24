#include <stdio.h>
int main()
{
    int a[50], low, high, mid, i, found = 0, key, n;
    printf("enter the array size :- ");
    scanf("%d", &n);
    printf("Enter the array elemnts:- \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the key elemnt :- ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == key)
        {
            found = 1;
            break;
        }
        else if (a[mid] > key)
        {

            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (found == 1)
    {
        printf("position of the elment is %d\n", mid + 1);
    }
    else
    {
        printf("key not found");
    }
}
