#include <stdio.h>
void odd_even()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int oddNumber=0;
    int evenNumber = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2==0){
            evenNumber++;
        }else{
            oddNumber++;
        }
    }
    printf("%d %d",evenNumber,oddNumber);
}
int main()
{
    odd_even();
    return 0;
}