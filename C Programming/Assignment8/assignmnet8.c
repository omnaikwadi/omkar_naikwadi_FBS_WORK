#include <stdio.h>

void allTasks(int a[], int n);

void input(int a[], int n);
void display(int a[], int n);
void findMaxMin(int a[], int n);
void findSumAvg(int a[], int n);
void search(int a[], int n);
void reverse(int a[], int n);
void sort(int a[], int n);
void copy(int a[], int b[], int n);

void main()
 {
    int a[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    allTasks(a, n); 
}


void allTasks(int a[], int n) 
{
    int b[100];
    input(a, n);

    printf("\nArray: ");
    display(a, n);

    findMaxMin(a, n);
    findSumAvg(a, n);
    search(a, n);

    printf("\nReversed Array: ");
    reverse(a, n);

    sort(a, n);
    printf("Sorted Array: ");
    display(a, n);

    copy(a, b, n);
    printf("Copied Array: ");
    display(b, n);
}

void input(int a[], int n)
 {
    for (int i = 0; i < n; i++)
	 {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void display(int a[], int n)
 {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void findMaxMin(int a[], int n)
 {
    int max = a[0], min = a[0];
    for (int i = 1; i < n; i++)
	 {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    printf("Max = %d, Min = %d\n", max, min);
}

void findSumAvg(int a[], int n) 
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    printf("Sum = %d, Avg = %.2f\n", sum, (float)sum / n);
}

void search(int a[], int n) 
{
    int key;
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++)
	 {
        if (a[i] == key)
		 {
            printf("Found at index %d\n", i);
            return;
        }
    }
    printf("Not found\n");
}

void reverse(int a[], int n) 
{
    for (int i = n - 1; i >= 0; i--)
        printf("%d ", a[i]);
    printf("\n");
}

void sort(int a[], int n)
 {
    int temp;
    for (int i = 0; i < n - 1; i++)
	 {
        for (int j = i + 1; j < n; j++) 
		{
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void copy(int a[], int b[], int n) {
    for (int i = 0; i < n; i++)
        b[i] = a[i];
}