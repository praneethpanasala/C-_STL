
#include <bits/stdc++.h>

using namespace std;
void swap (int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
void sortfunction(vector <int> & number)
{
    int low = 0;
    int i = 0;
    int high = number.size() -1;
    while (i <= high)
    {
        if (number[i] == 0)
        {
            swap(&number[i], &number[low]);
            low++;
            i++;
        }
        else if(number[i] == 2)
        {
            swap(&number[i],&number[high]);
            high--;
        }
        else
        {
            i++;
        }
    }
    
}
void reverse(vector<int> &numbers)
{
    int start = 0;
    int end = numbers.size() -1;
    while(start < end)
    {
        swap(&numbers[start], &numbers[end]);
        start++;
        end--;
    }
}


bool compare_fun(int i,int j)
{
    
      return i>j;
}

int main()
{
   vector<int> nums = {2, 0, 2, 1, 1, 0};
   for(auto it : nums)
       cout << it << " ";
   
   cout << endl;
#if 0
   // Sort API will sol the implementation in 2 lines of code.
   sort(nums.begin(), nums.end());//001122
   sort(nums.begin(),nums.end(),compare_fun);//221100
#endif 
   sortfunction(nums); //001122
   for (auto it : nums)
   cout << it << " ";
   cout << endl;
   reverse(nums);//221100
   for (auto it : nums)
   cout << it << " ";
   cout << endl;
   
   return 0;
}
