#include <iostream>
using namespace std;
void arreglo1();
int arr[5];
int main(){
	arreglo1();
	
	return 0;
}
void arreglo1(){
int arr[5]={1,2,3,4,5};

for(int i=0; i<5;i++){
	cout<<arr[i];
}
cout<<endl;
int i=0;
do{
	cout<<arr[i];
	i++;
	
	}while(i<5);
	cout<<endl;
int a=0;
while(a<5){
	cout<<arr[a];
	a++;

	

}

}

