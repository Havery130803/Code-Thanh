#include <iostream>

using namespace std;

int main(){
    int a;
    cout << "Nhap so nguyen duong a: ";
    cin >> a;
    int x,y;
    cout << "Nhap 2 chu so tu nhien x va y: ";
    cin >> x >> y;
    if (x > y){
    	if (0 <= a && a < y){
    		cout << y;
		}
		else if (y <= a && a < x){
			cout << x;
		}
		else{
			string s_x = to_string(x);
			string s_y = to_string(y);	
			string result = "";
			int cnt = 1;
			result += s_x;
			while (stoi(result) <= a){
				if (cnt % 2 == 0){
					result += s_x;
					cnt++;
				}
				else{
					result += s_y;
					cnt++;
				}
			}
		cout << result;		
		}
	}
	else if (x < y){
		if (0 <= a && a < x){
    		cout << x;
		}
		else if (x <= a && a < y){
			cout << y;
		}
		else{
			string s_x = to_string (x);
			string s_y = to_string (y);	
			string result = "";
			int cnt = 1;
			result += s_x;
			while (stoi(result) <= a){
				if (cnt % 2 == 0){
					result += s_x;
					cnt++;
				}
				else{
					result += s_y;
					cnt++;
				}
			}
			cout << result;		
		}
	}
	else{
		if (0 <= a && a < x)
			cout << x;
		else{
			string s_x = to_string (x);
			string result = "";
			do{
				result += s_x;
			}
			while (stoi(result) <= a);
			cout << result;
		}
	}
	return 0;
}