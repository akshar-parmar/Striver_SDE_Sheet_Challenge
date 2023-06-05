#include<bits/stdc++.h>
using namespace std;

//write logic
void setZeroes(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();

        int col_0 = -1;

        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(arr[i][j]==0 && j==0){
                    col_0 = 0;
                }
                else if(arr[i][j]==0){
                    //mark row start = 0
                    arr[i][0] = 0;
                    //mark col start = 0 
                    arr[0][j] = 0; 
                }
            }
        }

        //traverse from (1,1) to (m-1,n-1), if there row start or col start is 0 make that cell 0
        for(int i = 1;i<m;i++){
            for(int j = 1;j<n;j++){
                if(arr[i][0]==0 || arr[0][j]==0){
                    arr[i][j]=0;
                }
            }
        }
        //now tarverse the first row using ref to arr[0][0]
        if(arr[0][0]==0){
            for(int j = 0;j<n;j++){
                arr[0][j]=0;
        }
        }

        //now traverse the first col with ref to col_0 variable
        if(col_0==0){
            for(int i = 0;i<m;i++){
                arr[i][0] =0;
            }
        }
    }

int main(){
	//take necessary input's
	vector<vector<int>>arr = {{1,1,1},{1,0,1},{1,1,1}};
	setZeroes(arr);

	cout<<"Output : "<<endl;
	 for (const auto& row : arr) {
        for (int value : row) {
            std::cout << value << " ";
        }
        cout <<endl;
    }
	return 0;
}