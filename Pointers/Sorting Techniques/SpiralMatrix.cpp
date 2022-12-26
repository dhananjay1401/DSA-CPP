class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

     vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = row*col;

        //Index Initalize
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;

        while(count<total){
            for(int index = startingCol; count<total &&  index<=endingCol; index++) {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;


             for(int index = startingRow; count<total && index<=endingRow; index++) {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
            for(int i= endingCol; count<total && i>=startingCol; i--){
                ans.push_back(matrix[endingRow][i]);
            count++;

            }
            endingRow--;

};
