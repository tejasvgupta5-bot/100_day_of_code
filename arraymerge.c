#include <stdio.h>
void main() {
    int a,b;
    printf("Enter the size of the first array: ");
    scanf("%d ",&a);
    int arr1[a],arr2[b];
    for (int i=0;i<a;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d ",&b);
    for (int i=0;i<b;i++){
        scanf("%d",&arr2[i]);
    }
    int arr3[a+b];
    for (int i=0;i<a;i++){
        arr3[i]=arr1[i];
    }
    for (int i=0;i<b;i++){
        arr3[i+a]=arr2[i];
    }
    printf("Merged array is: ");
    for (int i=0;i<a+b;i++){
        printf("%d ",arr3[i]);
    }
    printf("\n");
}