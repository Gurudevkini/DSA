class Solution {
public:
    int subtractProductAndSum(int n) {
        float digit=0;
        float sum=0;
        float product=1; 
    while(n>0)
    {
        digit=n%10;
        sum=sum+digit;
        product=product*digit;
       n= n/10;
    }
     float answer = product-sum;
     return answer;
    }
};