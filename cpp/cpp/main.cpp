#include <iostream>

using namespace std;

int main(){
	int sr, sc, x, y;
	int pl[3][3]={0};
	cout<<"ile razy chcesz zagrac"<<endl;
	for(int i=0; i<=1; i++){
		cout<<"gracz podaje statek"<<i+1<<"(x,y)"<<endl;
		cin>>sr;
		cin>>sc;
		pl[sr][sc]=1;
	cout<<"STRZELAJ!!(x,y)";
	cin>>x;
	cin>>y;
	if(pl[x][y]==1){
		cout<<"trafiles!!!"<<endl;}
	else{
		cout<<"Pudlo!!!"<<endl;
	}
}
return 0;
}
