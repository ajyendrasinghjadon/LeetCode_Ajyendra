class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        int temp = num;
        while (temp > 0) {
            int rem = temp % 10;
            sum = sum + rem;
            temp = temp / 10; 
        }
        if (sum > 9) {
            return addDigits(sum);
        }
        else {
            return sum;
        }   
    }
};