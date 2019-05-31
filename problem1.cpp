#include <iostream>

using namespace std;

int main(){
	int N, x, i = 0;

	do{
		cout << "Input: ";
		cin >> N;
		if(N > 1000){
			cout << "The number can't be greater than 1000. Try again\n";
		}
	  }
	  while(N > 1000);

	while(N != 1){
		for(x = N - 1; x > 0; x--){
			if(N % x == 0){
				break;
			}
		}
		N = N - x;
		i++;
	}

	if(i % 2 == 1){
		cout << "true\n";
	} else{
		cout << "false\n";
	}
}