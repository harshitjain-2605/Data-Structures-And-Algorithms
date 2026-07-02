#include<bits/stdc++.h>
using namespace std;

int secondlargest(vector<int> &nums){
    int n = nums.size();
    int max = nums[0];
    int smax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(nums[i]>max){
            smax=max;
            max=nums[i];
        }
        if(nums[i]<max && nums[i]>smax){
            smax=nums[i];
        }
    }
    return smax;
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the Element in the array : ";
        cin>>nums[i]; 
    }
    int smax = secondlargest(nums);
    cout<<"Second Largest element in the array : "<<smax;
} 