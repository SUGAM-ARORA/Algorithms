#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;

class Job
{
    public :
    int startTime;
    int endTime;
};

//custom comparator
bool cmp(Job j1,Job j2)
{
    return j1.endTime < j2.endTime;
}

int JobsDone(vector<Job> &Jobs)
{
    sort(Jobs.begin(),Jobs.end(),cmp);
    int count = 1;
    Job temp = Jobs[0];
    for(int i=1;i<Jobs.size();i++)
    {
        if(temp.endTime< Jobs[i].startTime)
        {
            count++;
        }
    }
    return count;
}
 
int main()
{
    int n;
    cin >> n;

    vector<Job> Jobs(n);
    for(int i=0;i<n;i++)
    {
        cin >> Jobs[i].startTime >> Jobs[i].endTime;
    }

    cout << JobsDone(Jobs);
}
