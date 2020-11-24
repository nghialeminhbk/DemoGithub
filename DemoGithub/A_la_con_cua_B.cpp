#include<iostream>

using namespace std;

int m,n, a[100], b[100];

int check(int tem, int val){
	
	for(int i=tem; i<n; i++){
		if(val==b[i]){
			return i;
		}
	}
	return -1;
}
int main(){
	cin >> m >> n;
	
	for(int i=0; i<m; i++){
		cin >> a[i];
	}
	for(int j=0; j<n; j++){
		cin >> b[j];
	}
	int tem=0, count=0;
	for(int i=0; i<m; i++){
		if(check(tem,a[i])!=-1){
			count++;
			tem=check(tem,a[i]);
		}else{
			cout << "A khong la con B";
			break;
		}
	}
	if(count==m){
		cout << "A la con cua B";
	}
	return 0;
}
