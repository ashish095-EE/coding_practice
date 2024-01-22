#include <iostream>
#include <algorithm>
using namespace std;

int tripletSum(int *arr, int n, int num)
{
	sort(arr,arr+n);
	int count =  0;
	for(int i =0; i<n;i++){
		for(int j = i+1;j<n;j++){
			for(int k = j+1;k<n;k++){
				if(num==arr[i]+arr[j]+arr[k]){
					count++;
				}
			}
		}
	}
	return count;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;
		cin >> size;
        

		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cin >> x;

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}