// this is a simple c++
#include <iostream>
using namespace std;
int partition(int nums[], int l, int r);
void sort(int nums[], int l, int r);
const int N = 10;
int main()
{
    cout << "this is sort!" << endl;
    int nums[N];
    for (int i = 0; i < N; i++)
    {
        cin>>nums[i];
    }
    sort(nums, 0 , N-1);
    for (int i = 0; i < N; i++)
    {
       cout<<nums[i]<<endl;
    }
    return 0;
}

void sort(int nums[], int l, int r)
{
    if (l >= r)
    {
        return ;
    }
    int index = partition(nums, l, r);
    sort(nums, l, index - 1);
    sort(nums, index + 1, r);
}

int partition(int nums[], int l, int r)
{
    int key = nums[l];
    while (l < r)
    {
        while (l < r && nums[r] >= key)r--;
            nums[l] = nums[r];

        while (l < r && nums[l] <= key)l++;
            nums[r] = nums[l];
    }
    nums[l] = key;
    return l;
}