#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> bombel;
	bombel.push_back(6);
	bombel.push_back(9);
	bombel.push_back(1);
	bombel.push_back(2);

	for(int i = 0; i<bombel.size() - 1; i++){
		for(int j = 0; j<bombel.size() - 1; j++){
			if(bombel[j] > bombel[j+1]){
				int zmienna = bombel[j];
				bombel[j] = bombel[j+1];
				bombel[j+1] = zmienna;
			}
		}
	}
	for (int i = 0; i < bombel.size(); i++){
	cout << bombel[i] << " ";
	}
	return 0;
}
