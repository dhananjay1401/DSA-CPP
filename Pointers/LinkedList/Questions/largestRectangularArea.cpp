
int largestRectangleArea(vector<int>& heights) {
int n = heights.size();

vector<int> next(n);
next = nextSmallerElement(heights, n);

vector<int> prev(n);
prev = prevSmallerElement(heights, n);
int area
