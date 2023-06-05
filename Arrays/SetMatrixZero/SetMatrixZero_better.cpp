#include<bits/stdc++.h>
using namespace std;

//write logic
void setZeroes(vector<vector<int>>& arr) {
        //using O(m+n) space
        int m = arr.size();
        int n = arr[0].size();
        vector<int>row(m,0);
        vector<int>col(n,0);

        for(int i = 0;i<m;i++){
            for(int j = 0;j< n;j++){
                if(arr[i][j]==0){
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        for(int i = 0;i < m; i++){
            for(int j = 0;j<n;j++){
                if(arr[i][j]==0)continue;
                if(row[i]==1||col[j]==1){
                    arr[i][j]=0;
                }
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