  #include <stdlib.h>
  #include <stdio.h>

  int num[10];

  int comp(const void *, const void *);

  int main(void)
  {
    int i;

    printf("Enter the value of array:\n");
    for(i=0; i<10; i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Original array: ");
    for(i=0; i<10; i++)
        printf("%d ", num[i]);

    qsort(num, 10, sizeof(int), comp);

    printf("Sorted array: ");
    for(i=0; i<10; i++) printf("%d ", num[i]);

    return 0;
  }

  /* compare the integers */
  int comp(const void *i, const void *j)
  {
    return *(int *)i - *(int *)j;
  }
