#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int *a;
	int n;
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> *(a + i);
	// Xoa phan tu duong
	for (int i = 0; i < n; i++){
		while (a[i] > 0){
			for (int j = i; j < n - 1; j++)
				*(a + j) = *(a + j + 1);
			n--;
			a = (int*) realloc (a, n * sizeof(int));
			if (i == n)
				break;
		}	
	}
	// Sap xep tang dan cac phan tu khong qua -5 
	int *b = NULL;  // hoac nullptr
	int cnt = 0;
	for (int i = 0; i < n; i++){
		if (*(a + i) <= -5){
			cnt++;
			b = (int*) realloc (b,cnt*sizeof(int));
			*(b + cnt - 1) = i;
		}
	}
	for (int i = 0; i < cnt - 1; i++){
		for (int j = i + 1; j < cnt; j++){
			if (*(a + *(b + i)) > *(a + *(b + j))){
				int tmp = *(a + *(b + i));
				*(a + *(b + i)) = *(a + *(b + j));
				*(a + *(b + j)) = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++)
		cout << *(a + i) << " ";
	return 0;
}