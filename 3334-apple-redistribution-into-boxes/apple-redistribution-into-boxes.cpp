class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
    int apples=0;
    for(auto a:apple)
    {
        apples+=a;
    }
    
    sort(capacity.rbegin(),capacity.rend());

    int curr=0,box=0;

    for(auto c:capacity)
    {
        curr+=c;
        box++;
        if(curr >= apples)
        return box;
    }
return -1;
    }
};