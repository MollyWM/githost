#include<iostream>
using namespace std;

int Sort(int arr[],int low,int high){
	int standard = arr[low];
	while(low<high){

		// from high to low 
		while(high > low){
			if(standard>arr[high]){
				//swap
				arr[low] = arr[high];
				low++;
				break;
			}
			high--;
		}
		while(low < high){
			if(standard < arr[low]){
				arr[high] = arr[low];
				high--;
				break;
				}
				low++;
		}
	}
	arr[low] = standard;
	return low;
}


void QuickSort(int arr[],int low,int high){
	if(arr == NULL || low >= high)return;

	int standard = Sort(arr,low,high);
	//以standard分治
	QuickSort(arr,low,standard-1);
	QuickSort(arr,standard+1,high);

}

int main(){
	int arr[] = {89,59,1,54,66,97};
	QuickSort(arr,0,sizeof(arr)/sizeof(arr[0])-1);
	for(int i = 0;i<sizeof(arr)/sizeof(arr[0]);++i){
		cout<<arr[i]<<endl;
	}
	return 0;
}


