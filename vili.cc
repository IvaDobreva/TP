#include <iostream>
using namespace std;

int main() {
	int N, M, i;
	int sum = 0;
	int br = 0;
	float result;

	do {
		cout << "Vavedete M: "<< endl;
		cin  >> M;
		cout << "Vavedete N: " << endl;
		cin >> N;
	} while (M>=N); 

	for(i=M; i<=N; i++) {
		if(i%2!=0) { 
			sum+=i;
			br++;	
		}
	}

	result = (1.0*sum)/br;
	cout << "sr. ar. result = " << result << endl;

	return 0;
}
