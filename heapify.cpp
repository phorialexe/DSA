#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    vector<int> nums;
    for(int i=0;i<10;i++){
        nums.push_back(i);
    }
    int cost=0;
    priority_queue<int, vector<int>, greater<int>> minHeap(nums.begin(), nums.end());
    while(minHeap.size()>1){
        int first = minHeap.top();
        minHeap.pop();
        int second = minHeap.top();
        minHeap.pop();
        int ans = first+second;
        cost += ans;
        minHeap.push(ans);
    }
    cout<<cost<<endl;

}