#include <iostream>

using namespace std;

void isAnagram (string a, string b){
	if (a.length() != b.length()){
		cout << "Day khong phai 2 chuoi anagram !";
		return;
	}
	int n = a.length();
	int c[n];
	for (int i = 0; i < n; i++)
		c[i] = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (c[j] == 0 && a[i] == b[j]){
				c[j] = 1;
				break;
			}
		}
	}
	for (int i = 0; i < n; i++){
		if (c[i] == 0){
			cout << "Day khong phai 2 chuoi anagram !";
			return;
		}
	}
	cout << "Day la 2 chuoi anagram !";
}

int main(){
	string a, b;
	cout << "Nhap chuoi a: ";
	getline(cin,a);
	cout << "Nhap chuoi b: ";
	getline(cin,b);
	isAnagram(a,b);
	return 0;
}