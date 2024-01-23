#include <iostream>
using namespace std;

void rotate(int *input, int d, int n)
{
    int temp[n];
    int start_index = 0;

    for(int i = d;i<n;i++){
        temp[start_index]=input[i];
        start_index++;
    }
    for(int i = 0;i<d;i++){
        temp[start_index]=input[i];
        start_index++;
    }
    for(int i =0; i<n;i++){
        input[i]=temp[i];
    }
    
    
    
}

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}