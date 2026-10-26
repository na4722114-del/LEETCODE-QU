int climbStairs(int n) {
    if(n<=2)
    return n;
    int Num1 =1, Num2 =2;
    
    for (int i = 3; i <= n; i++) {
         int curr = Num1+Num2;
         Num1 =Num2;
         Num2 = curr;
          }

    return Num2;
}