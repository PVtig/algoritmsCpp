#pragma once
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int partition(vector<int>& arr, int i, int j);

void quick_sort(vector<int>& arr, int i, int j);

void quick_sort(vector<int>& arr);

// 5 10 15 20 25 30
// 5 | | 10 | | 15 20 25 30
// O(n ^ 2)
// O(n * log(n))
// O(1)

int Quick_sort();