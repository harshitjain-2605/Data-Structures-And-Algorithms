#include<bits/stdc++.h>
using namespace std;

bool checksorted(vector<int> &nums){
    for (int i = 0; i < nums.size()-1; i++)
    {
        if(nums[i]>nums[i+1]) return false;
    }
    return true;
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
    bool res = checksorted(nums);
    cout<<"Second Largest element in the array : "<<res;
} 