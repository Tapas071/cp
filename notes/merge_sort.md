```cpp


#include <bits/stdc++.h>
using namespace std;
// powershell  terminal cmd to run the code:  g++ a.cpp -o a.exe ; .\a.exe

// in linux terminal: g++ a.cpp -o a && ./a

void merge(vector<int>& arr, int left, int mid, int right){
	// temp arr
	vector<int> l, r;
	for( int i =left; i<= mid; i++){
		l.push_back(arr[i]);
	}
	for( int i =mid+1; i<= right; i++){
		r.push_back(arr[i]);
	}
	int n1= l.size(), n2 = r.size();
	int i =0, j=0;
	int k = left;
	while(i<n1 && j<n2){
		if(l[i]<= r[j]){
			arr[k]=l[i];
			i++;
		}
		else{
			arr[k] = r[j];
			j++;
		}
		k++;
	}
	// if the right vector exhausts
	while(i<n1){
		arr[k] = l[i];
		i++;
		k++;
	}
	// if the right vector exhausts
	while(j<n2){
		arr[k] = r[j];
		j++;
		k++;
	}

}
	

void mergeSort(vector<int>& arr, int left, int right){
	if( left>= right) return;
	int mid = left + ( right - left)/2;
	mergeSort(arr, left, mid);
	mergeSort(arr, mid+1, right);
	merge(arr, left, mid, right);
	}

    void solve()
    {
        vector<int> arr = {9, 3, 2, 4, 5, 6, 1, 8, 7};
        int n = arr.size();
        mergeSort(arr, 0, n - 1);
        for (auto x : arr)
        {
            cout << x << " ";
        }
        return;
    }

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

```