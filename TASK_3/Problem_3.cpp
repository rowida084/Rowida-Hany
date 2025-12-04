class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
         if(k <= 0 || k > q.size()) 
         return q;
         
      stack <int> st;
      for(int i=0;i<k && !q.empty();i++){
          st.push(q.front());
          q.pop();
      }
      
      queue <int>ans;
      while(!st.empty()){
          ans.push(st.top());
          st.pop();
      }
      
      while(!q.empty()){
          ans.push(q.front ());
          q.pop();
      }
      
      return ans;
        
    }
};
