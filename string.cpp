#include <iostream>
#include <string>

// Bai toan tim so 
using namespace std;

int main(){
	int n;  
	cin >> n;
	int x;
	cin >> x;
	if (x > n)
		cout << "Khong co so nao !";
	else if (x == n)
		cout << x << endl;
	else{	
		string s_x = to_string (x);
		string result = "";
		do{
			result += s_x;
		}
		while (stoi(result + s_x) < n);
		cout << result;
	}
	return 0;
}
