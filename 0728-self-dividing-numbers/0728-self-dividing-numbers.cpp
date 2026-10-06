class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> arr;
        for (int i = left; i <= right; i ++) {
            if (i <= 9) {
                arr.push_back(i);
            } else {
                int temp = i;
                bool valid = true;
                while (temp > 0) {
                    int num = temp % 10;
                    if (num == 0 || i % num != 0) {
                        valid = false;
                        break;
                    }
                    temp = temp / 10;
                }
                if (valid) {
                    arr.push_back(i);
                }
            }
        }
        return arr;
    }
};