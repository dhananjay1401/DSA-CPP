
     for(int i= endingRow; count<total && i>=startingRow; i--){
                ans.push_back(matrix[i]);
            count++;

            }
 startingCol++;


        }
        return ans;

    }
};
