//
//  Solution.cpp
//  029_Divide_Two_Integers
//
//  Created by Chao Li on 6/12/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/11358/simple-o-log-n-2-c-solution

#include "Solution.h"

int Solution::divide(int dividend, int divisor)
{
	typedef long long ll;
	ll ans=0;
	ll n=abs((ll)dividend);
	ll d=abs((ll)divisor);
	while(n>=d){
		ll a=d;
		ll m=1;
		while((a<<1) < n){a<<=1;m<<=1;}
		ans+=m;
		n-=a;
	}
	if((dividend<0&&divisor>=0)||(dividend>=0&&divisor<0))
		return -ans;
	return ans > INT_MAX ? INT_MAX : ans;
	
}