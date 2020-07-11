#include<iostream>
#include<vector>

using namespace std;

int main(){
	int num[10],min,max;
	cin>>num[0];
	min=num[0];
	max=num[0];
	for(int i=1;i<10;i++){
		cin>>num[i];
		if(num[i]<min){
			min=num[i];
		}
		if(num[i]>max){
			max=num[i];
		}
	}
	vector <int> sortnum[(max-min)+1];
	for(int i=0;i<10;i++){
		sortnum[num[i]-min].push_back(num[i]);
	}
	for(int i=0;i<(max-min)+1;i++){
		for(int j=0;j<sortnum[i].size();j++){
			cout<<sortnum[i][j]<<" ";
		}
	}
	return 0;
}
