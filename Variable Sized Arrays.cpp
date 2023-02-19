// Problem Link :- https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true


// Code :- 

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n=0;
    int q=0;
    // first line input
    cin >> n >> q ;
    
    vector<vector<int>> arr;
    int x;
    int y;
    vector<int> temp;
    int size_of_temp=0;
    for(int i=0;i<n;i++)
    {
        cin >> size_of_temp;
        for(int j=0;j<size_of_temp;j++)
        {
            cin >> x;
            temp.push_back(x);
        }
        arr.push_back(temp);
        temp.clear();
    }
    
    for(int i=0;i<q;i++)
    {
        cin >> x >> y;
        cout << arr[x][y] << endl;
    }
    return 0;
}
