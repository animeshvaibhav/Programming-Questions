// CPP program to count number of visible boxes.
#include <bits/stdc++.h>
using namespace std;

// return the minimum number of visible boxes
int minimumBox(int arr[], int n)
{
	queue<int> q;

	// sorting the array
	sort(arr, arr + n);

	q.push(arr[0]);

	// traversing the array
	for (int i = 1; i < n; i++) {

		int now = q.front();

		// checking if current element
		// is greater than or equal to
		// twice of front element
		if (arr[i] >= 2 * now)
			q.pop();

		// Pushing each element of array
		q.push(arr[i]);
	}

	return q.size();
}

// driver Program
int main()
{
	int arr[] = { 1,3,4,5 };//we can take the values of the array from the user as well..
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << minimumBox(arr, n) << endl;
	return 0;
}

