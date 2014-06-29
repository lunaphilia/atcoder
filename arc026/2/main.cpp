#include <iostream>
using namespace std;
int check(long int n);

int main(){
	long int n;
	cin >> n;

	int result = check(n);
	if(result < 0){
		cout << "Deficient" << endl;
	} else if(result > 0){
		cout << "Abundant" << endl;
	} else {
		cout << "Perfect" << endl;
	}
}

int check(long int n){
	long int i,c=0;
	for(i = 1;i <= n / 2;i++ ){
		if(n % i == 0){
			c += i;
		}
	}
	return c - n;
}

