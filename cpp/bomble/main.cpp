#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> bombel;
	int n;
	cout << "Podaj ilość liczb: ";
	cin >> n;
	int l;
	for(int x = 0; x<n; x++){
		int y = x + 1;
		cout << "Liczba " << y << ": ";
		cin >> l;
		bombel.push_back(l);
	}

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
