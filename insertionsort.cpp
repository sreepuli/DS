#include<stdio.h>

void insertionsort(int a[], int n);

int main() {
    int a[20], i, n;
    printf("Enter the size n: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    insertionsort(a, n);
    printf("The sorted list is: ");
    for(i = 0; i < n; i++) {
        printf("%4d", a[i]);
    }
    return 0;
}

void insertionsort(int a[], int n) {
    int i, j, item;
    for(i = 1; i < n; i++) { 
        item = a[i];
        for(j = i - 1; j >= 0 && a[j] > item; j--) {
            a[j + 1] = a[j];
    }
    a[j+1]=item;
}
}
