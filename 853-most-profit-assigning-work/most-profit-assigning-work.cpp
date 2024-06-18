#define sort(a) sort(begin(a), end(a))
#define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Solution {
public:
    /*
    struct Ratio{
        int diff;
        int prof; 
    };
    

    static bool cmp(Ratio a, Ratio b){
        return(a.diff<b.diff);
    }
    */

    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
    
    /*
        const int n = profit.size();
        
        Ratio arr[n];
        for(int i=0;i<profit.size();i++){
            arr[i].diff = difficulty[i];
            arr[i].prof = profit[i];
        }
        */
        /*
        vector<pair<int, int>> arr;
        for(int i = 0; i < worker.size(); ++i) {
            arr.push_back({difficulty[i], profit[i]});
        }

        sort(arr.begin(), arr.end());
        sort(worker.begin(), worker.end());

        int sum=0;
        for(int i=0;i<worker.size();i++){
            int w = worker[i];
            int max = 0;
            int j=0;
            while(arr[j].first<=w && j<=worker.size()){
                if(arr[j].second>=max){
                    max = arr[j].second;
                }
                j++;
            }
            sum+=max;
            cout<<max<<endl;
        }

        return sum;
    }
    */
        opt();
        int res = 0, j = 0, best = 0;
        vector<pair<int, int>> temp;
        for(int i = 0; i < worker.size(); ++i) {
            temp.push_back({difficulty[i], profit[i]});
        }

        sort(temp); sort(worker);
        for(int work : worker) {
            while(work >= temp[j].first && j < worker.size()) {
                best = max(best, temp[j++].second);
            }
            
            res += best;
        }

        return res;
    }
};