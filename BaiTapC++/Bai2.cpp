#include<bits/stdc++.h>
using namespace std;
void nhap_n(int &n){
	cout<<"Nhap n: ";
	cin>>n;
}
void nhap_mang(int *a,int n){

	cout<<"\nNhap mang: ";
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= ";
		cin>>*(a+i);
	}
}

void xuat_mang(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<*(a+i)<<" ";
	}
}
bool kiemtra(int &x){
	if(x<=2) return false;
	else{
		for(int i=2;i*i<x;i++){
			if(x%2==0) return false;
		}
		return true;
	}
}
int tinhtong(int *a,int n){
	for(int i=0;i<n;i++){
		if(!kiemtra(*(a+i))){
			return 0;
		}
		}
		return 1;
	}

void daonguocmang(int *a,int n){
	for(int i=0,j=n-1;i<j;i++,j--){
		int temp=*(a+i);
		*(a+i)=*(a+j);
		*(a+j)=temp;
	}
}
int main(){
	int n;
	int *a;
	a=new int[n];
	nhap_n(n);
	nhap_mang(a,n);
	cout<<"\nXuat mang: ";
	xuat_mang(a,n);
	daonguocmang(a,n);
	cout<<"\nDao nguoc mang: ";
	xuat_mang(a,n);

}
