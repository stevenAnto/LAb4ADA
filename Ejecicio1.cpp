#include<iostream>

using namespace std;
void mostrar(int [][2],int);
void multiMatrix(int [][2],int [][2],int);
int main(){
	int m1[][2]= {1,3,5,7};
	int m2[][2]= {8,4,6,2};
	multiMatrix(m1,m2,2);
	

}
void multiMatrix(int a [][2],int b [][2], int length){
	int mr[length][2];
	int m1=( a[0][0]+a[1][1])*(b[0][0]+b[1][1]);
	int m2=( a[1][0]+a[1][1])*(b[0][0]);
	int m3=( a[0][0])*(b[0][1]-b[1][1]);
	int m4=( a[1][1])*(b[1][0]-b[0][0]);
	int m5=( a[0][0]+a[0][1])*(b[1][1]);
	int m6=( a[1][0]-a[0][0])*(b[0][0]+b[0][1]);
	int m7=( a[0][1]-a[1][1])*(b[1][0]+b[1][1]);
	mr[0][0]=m1+m4-m5+m7;
	cout<< mr[0][0]<<endl;
	mr[0][1]=m3+m5;
	mr[1][0]=m2+m4;
	mr[1][1]=m1+m3-m2+m6;
	mostrar(mr,length);
}
void mostrar(int a [][2], int length){
	for (int i=0;i<length;i++){
		for (int j =0; j<length;j++){
			cout << a[i][j];
		}
		cout << "salido"<<endl;
		cout << endl;
	}
}
