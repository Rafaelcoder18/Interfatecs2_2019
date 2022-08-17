#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b, soma = 0;
	for(int i = 0; i < 3; i++){
		cin >> a >> b;
		soma+= a/b;
	}
	cout << soma << endl;
}
