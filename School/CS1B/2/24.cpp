#include<iostream>
#include<vector>
#include <unordered_set>
using namespace std;


int findRepeatingNumbers(const int* arr,int size)
{
    int maxNum=*arr;

    for(int i=0;i<size;i++)
    {
        if(*(arr+i)>maxNum)
        {
            maxNum=*(arr+i);
        }
    }

    int* v=new int[maxNum+1];

    for(int i=0;i<size;i++)
    {
        if(*(v+*(arr+i))==1)
            return *(arr+i);

        *(v+*(arr+i))=1;
    }

    delete[] v;

    return -1;
}

int findRepeatingNumbers(const vector<int>&arr)
{
    vector<int>v;
    int maxNum=arr[0];

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>maxNum)
        {
            maxNum=arr[i];
        }
    }

    v.reserve(maxNum+1);

    for(int i=0;i<arr.size();i++)
    {
        if(v[arr[i]]==1)
            return arr[i];

        v[arr[i]]=1;
    }

    return -1;
}

int findRepeatingNumbers_1(const vector<int>& arr) {
    unordered_set<int> seen;

    for (int num : arr) {
        if (seen.count(num)) return num;  // 发现重复值
        seen.insert(num);
    }

    return -1;  // 没有找到重复值
}


int main()
{
    //vector<int>arr={3,0,1,5,9,3,8};
    int arr1[7]={3,0,1,5,9,3,8};

    //cout<<findRepeatingNumbers(arr)<<endl;
    cout<<findRepeatingNumbers(arr1,sizeof(arr1)/4);

    return 0;
}
