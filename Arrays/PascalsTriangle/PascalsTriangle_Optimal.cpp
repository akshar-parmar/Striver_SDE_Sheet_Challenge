#include<bits/stdc++.h>
using namespace std;

//write logic
vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        //corner case
        if(numRows==1){
            return {{1}};
        }
        if(numRows==2){
            return {{1},{1,1}};
        }
        for(int i = 0;i<2;i++){
            int size = i+1;
            if(i==0 || i==1){
                vector<int>cell(size,1);
                ans.push_back(cell);
                continue;
            }
        }
        for(int i = 2;i<numRows;i++){
            vector<int>cell;
            cell.push_back(1);
            vector<int>prev = ans.back();
            for(int j = 1;j<prev.size();j++){
                int val = prev[j]+prev[j-1];
                cell.push_back(val);
            }
            cell.push_back(1);
            ans.push_back(cell);

        }
        return ans;
        
    }

int main(){
	//take necessary input's
	int numRows = 5;
	vector<vector<int>>result = generate(numRows);
	cout<<"Output : "<<endl;
	for (const auto& row : result) {
        for (int value : row) {
            cout << value << " ";
        }
        cout <<endl;
    }
	return 0;
}