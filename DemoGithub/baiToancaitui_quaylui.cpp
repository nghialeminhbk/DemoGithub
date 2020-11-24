#include<iostream>

using namespace std;

struct bag{
	int a;
	int c;
};

int rs[100], n, b, f=-9999,w=0, sum=0, M1, M2;
bag bg[100];

void Print(){
	for(int i=1;i<=n;i++){
		cout<< rs[i] << " ";
	}
	cout << "\n";
}

void Try(int k){
	int i;
	M1=0;
	M2=(b-w)/bg[k].a;
	for(i=M2;i>=M1;i--){
		rs[k]=i;
		sum=sum+i*bg[k].c;
		w=w+i*bg[k].a;
		if(k==n){
			if(sum>f){
				f=sum;
				Print();
			}
		}else if( (sum+bg[k+1].c*(b-w)/(float)bg[k+1].a)  > f){
				Try(k+1);
			}
		sum=sum-rs[k]*bg[k].c;
		w=w-rs[k]*bg[k].a;
		}
		
	}
	


int main(){
	cout << "Nhap n: \n";
	cin >> n;
	cout << "Nhap b: \n";
	cin >> b;
	cout << "Nhap chi tiet cho cac loai tui: \n";
	for(int i=1;i<=n;i++){
		cin >> bg[i].a >> bg[i].c;
	}
	Try(1);
	cout << "\nGia tri toi uu:" << f << "\n"; 
	return 0;
	
}
