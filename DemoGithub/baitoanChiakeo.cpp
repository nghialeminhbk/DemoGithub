#include<iostream>

using namespace std;

int f=0, M, n, a[100], M1, M2, couter=0;

void Print(){
	for(int i=1;i<=n;i++){
		cout << a[i] << " ";
	}
	cout << "\n";
}

void Try(int k){
	if(k==n){
		M1=M-f;
		M2=M-f;
	}else{
		M1=1;
		M2=M-f-(n-k);
	}
	int i;
	for(i=M1;i<=M2;i++){
		a[k]=i;
		f=f+i;
		if(k==n){
			Print();
			couter++;
		}else{
			Try(k+1);
		}
		f=f-i;
	}
}

int main(){
	cout << "Nhap n: \n";
	cin >> n;
	cout << "Nhap M: \n";
	cin >> M;
	cout << "Loi giai cua bai toan la: \n";
	Try(1);
	cout << "So cach chia keo cho cac em la: \n";
	cout << couter;
	return 0;
}
