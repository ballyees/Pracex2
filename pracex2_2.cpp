#include <fstream>
#include <string>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] > x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			}
		}
	}
}

int main(){
	ifstream inputF;
	ofstream outputF;
	inputF.open("score3.txt");
	outputF.open("rank.txt");
	float arr[20];
	int i=0;
	string ar;
	while(getline(inputF, ar)){
        arr[i] = stof(ar);
        i++;
    }
    sort(arr,20);
    int be = 0;
	for(int i=0;i<20;i++){

        if(arr[i]==arr[be]){ outputF << arr[i] <<"="<<be+1<<endl;
        }else{ outputF << arr[i] <<"="<<i+1<<endl;be=i;}
	}

	inputF.close();
	outputF.close();




	//Write your code here

	return 0;
}

