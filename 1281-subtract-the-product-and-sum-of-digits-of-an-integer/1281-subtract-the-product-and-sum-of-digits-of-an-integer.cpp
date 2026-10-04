class Solution {
public:
    int subtractProductAndSum(int n) {
        int temp1 = n;
        int temp2 = n;
        int sum = 0;
        int mul = 1;
        while (temp1 > 0) {
            int numb = temp1 % 10;
            sum = sum + numb;
            temp1 = temp1 / 10; 
        }
        while (temp2 > 0) {
            int numb = temp2 % 10;
            mul = mul * numb;
            temp2 = temp2 / 10; 
        }
        return mul - sum;
    }
};