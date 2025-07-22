// write a program to delete a element from an array at a specific position.

#include <stdio.h>
void main()
{
    int arr [100], n, i, pos;
    clrscr();
    printf("enter the number of elements in the array:");
    scanf("%d", &n);
    printf("enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("enter the position to delete (1 to %d):", n);
    scanf("%d", %pos);
    if(pos < 1 || pos > n) {
        printf("invalid position!\n");
        return 1;
    }
    for(i = pos-1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("array after deletion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("array after deletion:\n");
    for(i = 0; i< n; i++)
    {
        printf("%d", arr[1]);
    }
    printf("\n");
    getch();
}