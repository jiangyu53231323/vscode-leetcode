/*
 * @lc app=leetcode.cn id=13 lang=c
 *
 * [13] 罗马数字转整数
 */

// @lc code=start

char luoma[7] = "MDCLXVI";
int number[7] = {1000, 500, 100, 50, 10, 5, 1};

int design_map(char s){
    for (int i = 0; i < 7; i++)
    {
        if (luoma[i]==s)
        {
            return number[i];
        }        
    }
    return 0;
}

int romanToInt(char * s){
    int sum = 0;
    int a, b;
    for (int i = 0; i < strlen(s); i++)
    {
        a = design_map(s[i]);
        if (i < strlen(s)-1)
        {
            b = design_map(s[i + 1]);
        }else
        {
            b = 0;
        }
        if (a<b)
        {
            sum = sum + b - a;
            i++;
        }else
        {
            sum = sum + a;
        }
        
    }
    return sum;
}


// @lc code=end

