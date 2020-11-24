#include<iostream>
#include<algorithm>
using namespace std;

int n,c,T;
int a[100010];

int judge(int x){
	int now=1;
	int cnt=1;
	for(int i=2;i<=n;i++){
		if(a[i]-a[now]>=x){
			now=i;
			cnt++;
		}
	}
	if(cnt>=c){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	cin >> T;
	int count=0;
	while(count<T){
		cin >> n >> c;
		int L,R,ans;
		for(int i=1;i<=n;i++){
			cin >> a[i];
		}
		sort(a+1,a+1+n);
		L=0; R=a[n]/c+1;
		while(L<=R){
			int mid=(L+R)/2;
			if(judge(mid)){
				ans=mid;
				L=mid+1;
			}else{
				R=mid-1;
			}
		}
		cout<< ans<<endl;
		count++;
	}
	return 0;
}


