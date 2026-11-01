class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n=students.size();
        stack<int> st;
        queue<int> q;
        for(int i=n-1;i>=0;i--){
            st.push(sandwiches[i]);
           
        }
        for(int i=0;i<n;i++){
q.push(students[i]);
        }
        int rotation=0;
    
     
      while(!st.empty() && rotation<q.size()){
         if(q.front()==st.top()){
          
            q.pop();
            st.pop();
            rotation=0;
         }
         else{
            q.push(q.front());
            q.pop();
            rotation++;
         }
      }
return q.size();
    }
};