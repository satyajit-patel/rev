class Solution {
public:
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F) {
        vector<int> ans;
        vector<pair<pair<int, int>, int>> A(N);
        for(int i=0; i<N; i++) {
            A[i] = {{F[i], S[i]}, i+1};
        }
        sort(A.begin(), A.end());
        ans.push_back(A[0].second);
        int lastMeetingTime = A[0].first.first;
        for(int i=1; i<N; i++) {
            int nextMeetingTime = A[i].first.second;
            if(nextMeetingTime > lastMeetingTime) {
                ans.push_back(A[i].second);
                lastMeetingTime = A[i].first.first;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};