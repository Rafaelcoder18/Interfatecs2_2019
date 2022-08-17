#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, valorA = 0, valorV = 0;
	char V;
	cin >> V >> n;
	for(int i = 0; i < n; i++){
		int soma;
		cin >> soma;
		if (V =='V'){
			if(i %2 == 0){
				valorV += soma;
			}else{
				valorA += soma;
			}
		}else{
			if(i %2 == 0){
				valorA += soma;
			}else{
				valorV += soma;
			}
		}
	}
	
	cout << "VOCE: " << valorV << " AMIGO: " << valorA << endl;

} 
