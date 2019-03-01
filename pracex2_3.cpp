#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
char alphabet[8][8];

void showAlphabet();
void randomAlphabet();
int liner(char a[][8], int col, int row, char key);

int main(){
	srand(time(0));
	randomAlphabet();
	showAlphabet();
}

void showAlphabet(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << alphabet[i][j] << " ";
		}
		cout << "\n";
	}
}

//Write definition of function randomAlphabet() here.
void randomAlphabet(){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            char random = char(rand()%26+'a');
            while(liner(alphabet, j, i, random)){
                random = char(rand()%26+'a');
            }
            alphabet[i][j]=random;
        }
    }
}

int liner(char a[][8], int col, int row, char key){
    for(int i=0;i<col;i++){
        if(a[row][i]==key){
            return 1;
        }
    }
    return 0;
}

