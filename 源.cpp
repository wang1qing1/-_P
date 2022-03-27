#include<stdio.h>
int missingNumber(int* nums, int numsSize)
{
    if (!nums || !numsSize)  return 0;
    int ans = nums[0];
    ans ^= 0;
    ans ^= numsSize;
    for (int i = 1; i < numsSize; i++) 
    {
        ans ^= nums[i];
        ans ^= i;
    }
    return ans;
}


int main()
{
    int arr[] = { 1,0,2,4,5 };
   int p= missingNumber(arr, 5);
   printf("%d", p);
   return 0;

}






