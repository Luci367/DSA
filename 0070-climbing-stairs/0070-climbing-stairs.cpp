class Solution {
public:
    int climbStairs(int n) {
        int a=1,b=1;
        n=n-1;
        while(n){
            int temp=a;
            a=a+b;
            b=temp;
            n--;
        }
        return a;
    }
   
};