#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    sort(d.begin(), d.end());
    int su = 0;
    for (int i = 0; i < d.size(); i++)
    {
        su += d[i];
        if (su > budget)
            break;
        answer++;
    }

    return answer;
}