class Solution {
public:
    
    void fill(vector<vector<int>>&image ,int sr, int sc, int newColor,int oldColor)
    {
        int m=image.size();
        int n=image[0].size();
        if(sr<0 || sc<0 || sr>=m || sc>=n || image[sr][sc]!=oldColor)
        {
            return;
        }
        image[sr][sc]=newColor;
        fill(image,sr+1,sc,newColor,oldColor);
        fill(image,sr-1,sc,newColor,oldColor);
        fill(image,sr,sc+1,newColor,oldColor);
        fill(image,sr,sc-1,newColor,oldColor);
            
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int oldColor=image[sr][sc];
        if(oldColor==newColor)
        {
            return image;
        }
        fill(image,sr,sc,newColor,oldColor);
        return image;
        
    }
}; 