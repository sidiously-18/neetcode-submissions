class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set <int> num;

        for(int x : nums){
            if (num.count(x)>0){
                return true ;
            }

            else {
                num.insert(x);
               
                
            }

            


        };

         return false ;
       
    };
};