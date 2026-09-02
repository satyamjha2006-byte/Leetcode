class Solution {
public:
    int mySqrt(int x) {
        int res=0;
        for(int i=0;i<=x;i++){
            long long sqr=long(i)*long(i);
            if(sqr==x){
                return i;
            }
            if(sqr<x){
                res=i;
            }
            else if(sqr>x)break;
        }
        return res;
        
    }
};