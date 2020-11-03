//binary search
int main(){
	int a[]={6,1,3,2,4,5};
	int low=0, high=5, mid, flag=0;
	mid=(low+high)/2;
	int key=5;
	while(low<high){
		if(key==a[mid]){
			printf("found");
			flag=1;
			break;
		}
		else if(key<mid)
			high=mid-1;
		else
			low=mid+1;
	}

	if(flag==0)
		printf("key is not found");
}

