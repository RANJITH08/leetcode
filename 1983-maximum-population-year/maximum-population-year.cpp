class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs)    
    {
        int population[101]={0};

        for(auto&l : logs)
        {
           int birth=l[0];
           int death=l[1];
           population[ birth - 1950]+=1;
           population[ death - 1950]-=1;
        }
        int cpop=0,maxpop=0,maxy=1950;
        for(int i=0; i<101;++i)
        {   
            cpop+=population[i];     
            if(cpop>maxpop)
        {
            maxpop=cpop;
            maxy=1950+i;
        }
        }
        return maxy;

    }
};