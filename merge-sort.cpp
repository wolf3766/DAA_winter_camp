//merge sort 

#include<bits/stdc++.h>
#define ll long long
using namespace std;


vector<string>temp(100);


void merge(vector<string>&v,int low,int mid,int high){
	int i=low,j=mid+1,k=0;
	
	while(i<=mid && j<=high){
		if(v[i] <= v[j]){
			temp[k]=v[i];
			k++;
			i++;
		}else{
			temp[k]=v[j];
			k++;
			j++;
		}
	}

	while(i<=mid){
		temp[k++]=v[i++];
	}
	while(j<=high){
		temp[k++]=v[j++];
	}

	for(int i=low;i<=high;i++){
		v[i]=temp[i-low];
	}
}

void Sort(vector<string>&v,int low,int high){
	if(low>=high)return;
	int mid=(low+high)/2;
	Sort(v,low,mid);
	Sort(v,mid+1,high);
	merge(v,low,mid,high);
}


int main(){
   
	vector<string>v(8);
	for(int i=0;i<8;i++){
		cin>>v[i];
	}
   Sort(v,0,7);
   for(int i=0;i<8;i++){
   	cout<<v[i]<<" ";
   }cout<<endl;

    return 0;
}
