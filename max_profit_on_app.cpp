#include<algorithm>
#include<climits>
int maximumProfit(int budget[], int n) {
     sort(budget,budget+n);
    int temp[n];
    for(int i = 0; i<n;i++){
        temp[i] = budget[i]*(n-i);
    }
    sort(temp,temp+n);

    return temp[n-1];
    

}
