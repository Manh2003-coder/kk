#include<bits/stdc++.h>
using namespace std;
void nhap_n(int &n){
	cout<<"Nhap n: ";
	cin>>n;
}
void nhap_mang(int *a,int n){
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
void ghifile(int *a,int n){
	ofstream f("Text.txt",ios::out);
	f<<"So phan tu co trong mang la: "<<n;
	f<<"\nXuat mang vua nhap: ";
	for(int i=0;i<n;i++){
		f<<*(a+i)<<" ";
	} 
} 
void sapxep (int *a,int n){
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(*(a+i)>*(a+j)){
				int temp=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=temp; 
			} 
		} 
	} 
}
void day_chan(int *a,int n){
	int j=0;
	cout<<"\nsau khi day chan: "<<endl; 
	for(int i=0;i<n;i++){
		if(*(a+i)%2!=0){
			swap(*(a+i),*(a+j));
			j++; 
		} 
	}	 
} 

//void xoachan(int *a,int &n){
//	int count=0; 
//	for(int i=0;i<n;i++){
//		if(*(a+i)%2!=0){
//		*(a+count)=*(a+i);
//		   count++; 
//			}
//		}
//		cout<<"\nMang sau khi xoa so chan la: "; 
//		for(int i=0;i<count;i++){
//			cout<<*(a+i)<<" "; 
//		} 
//	}
	
	
	






int main(){
	int n;
	int *a;
	a=new int[n];
	nhap_n(n);
	nhap_mang(a,n);
	xuat_mang(a,n);
	ghifile(a,n);
	sapxep(a,n);
	cout<<"\nMang sau khi sap xep la: "<<endl; 
	xuat_mang(a,n); 
day_chan(a,n);
	cout<<"\nMang sau khi thay doi  la: "<<endl; 
xuat_mang(a,n); 
	
} 
