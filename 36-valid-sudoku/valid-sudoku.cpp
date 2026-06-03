class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // for(int i = 0,j=0;i<9 && j<9;i++,j++){
        //     for(int k = 0;k<9;k++){
        //         for(int l = k+1;l<9;l++){
        //             if(board[i][k]=='.'){
        //                 continue;
        //             }
        //             if(board[i][k]==board[i][l]){
        //                 return false;
        //             }
        //         }
        //     }
        //     for(int k = 0;k<9;k++){
        //         for(int l = k+1;l<9;l++){
        //             if(board[k][j]=='.'){
        //                 continue;
        //             }
        //             if(board[k][j]==board[l][j]){
        //                 return false;
        //             }
        //         }
        //     }
        // }
        // for(int i = 0;i<7;i+=3){
        //     for(int j = 0;j<7;j+=3){
        //         vector<char> v;
        //         for(int k = i;k<i+3;k++){
        //             for(int l = j;l<j+3;l++){
        //                 if(board[k][l]=='.'){
        //                     continue;
        //                 }
        //                 v.push_back(board[k][l]);
        //             }
        //         }
        //         for(int a = 0;a<v.size();a++){
        //             for(int b = a+1;b<v.size();b++){
        //                 if(v[a]==v[b]){
        //                     return false;
        //                 }
        //             }
        //         }
        //     }
        // }
        // return true;

        for(int i = 0;i<9;i++){
            set<int> row;
            set<int> colunm;
            set<int> grid;
            for(int j = 0;j<9;j++){
                if(board[i][j]=='.'){
                    continue;
                }
                if(row.find(board[i][j])!=row.end()){
                    return false;
                }
                row.insert(board[i][j]);
            }
            for(int j = 0;j<9;j++){
                if(board[j][i]=='.'){
                    continue;
                }
                if(colunm.find(board[j][i])!=colunm.end()){
                    return false;
                }
                colunm.insert(board[j][i]);
            }
            
        }
        for(int i = 0;i<7;i+=3){           
            for(int j = 0;j<7;j+=3){
                set<int> box;
                for(int k = i;k<i+3;k++){
                    for(int l = j;l<j+3;l++){
                        if(board[k][l]=='.'){
                            continue;
                        }
                        if(box.find(board[k][l])!=box.end()){
                            return false;
                        }
                        box.insert(board[k][l]);
                    }
                }
            }
        }
        return true;

    }
};