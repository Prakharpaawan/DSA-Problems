class Solution {
public:
int findMax(vector<int> &piles) {
    int maxi=INT_MIN;
    int n=piles.size();
    for(int i=0;i<n;i++) {
        maxi=max(maxi,piles[i]);
    }
    return maxi;
}

long long calculateTotalHours(vector<int>&piles, int hourly) {
    long long totalHour=0;
    int n = piles.size();
    for (int i=0;i<n;i++) {
        totalHour += (piles[i] + hourly - 1) / hourly;
    }
    return totalHour;
}

int minEatingSpeed(vector<int>& piles, int h) {
        int low=1, high=findMax(piles);
        while (low<=high) {
            long long mid= low + (high - low) / 2;
            long long totalHour=calculateTotalHours(piles,mid);
            if(totalHour<=h) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};