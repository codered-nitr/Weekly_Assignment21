#include <bits/stdc++.h>
#define T 15
using namespace std;
struct Job
{
    int id;
    int dead;
    int profit;
};

vector<int> JobScheduling(vector<Job> jobs){       
    int profit = 0;
    int count = 0;
    vector<int> slot(T, -1);
    vector<int> result(2);

    sort(jobs.begin(), jobs.end(),
        [](Job &a, Job &b) {
            return a.profit > b.profit;    
        });
 
    for (Job &job: jobs)
    {
        for (int j = job.dead - 1; j >= 0; j--)
        {
            if (j < T && slot[j] == -1)
            {
                slot[j] = job.id;
                profit += job.profit;
                count++;
                break;
            }
        }
    }
    result.push_back(count);
    result.push_back(profit);
    return result;
}

int main()
{
    vector<Job> jobs = {{1, 4, 20}, {2, 1, 10}, {3, 1, 40}, {4, 1, 30}};


    
    vector<int> ans= JobScheduling(jobs); 
    for(auto i: ans ){
        if(i!= 0){
            cout << i;
        }
    }
    return 0;
}
