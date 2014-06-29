#include <iostream>
#include <vector>

using namespace std;

struct Light{
	int l,r,c;
}

bool comp(const Light& left, const Light& right){
	return left.l < right.l;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n, l;
	vector<Light> light;
	long int result = LONG_MAX;
	long int cost[l];

	cin >> n >> l;
	for(int i = 0; i < n; i++){
		cin >> light[i].l >> light[i].r >> light[i].c;
	}
	sort(light.begin(),light.end,comp);
}

