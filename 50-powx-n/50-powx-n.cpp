class Solution {
public:
    double myPow(double x, int n) {
    if(n==0){
        return 1;
    }
    if(n<0){
        x = 1/x;
        n= abs(n);
    }
    double res = myPow(x,n/2);
    double final;
    if(n%2==0)
    {
        final= res*res;
    }
    else
    {
        final= res*res*x;
    }
    return final;
}
};