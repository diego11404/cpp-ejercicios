#include <iostream>
using namespace std;
void bubbleSort(int*,int);
void swap(int*,int);
int main(){
	int arr[]={22, 9, 8, 7, 44, 99, 11, 3, 0, 4, 5, 6, 2501, 585, 968, 2};
	bubbleSort(arr,sizeof(arr)/4);
	for(int i=0;i<sizeof(arr)/4;++i){
		cout<<arr[i]<<" ";
	}
	return 0;
}
void bubbleSort(int *arr,int size){
	bool flag=true;
	while(flag){
		flag=false;
		for(int i=1;i<size;i++){ 
			if(arr[i-1]>arr[i]){
				flag=true;
				swap(arr,i);
			}
		}
	}
}
void swap(int *arr,int index){
	int temp= arr[index];
	arr[index]=arr[index-1];
	arr[index-1]=temp;
}
	
