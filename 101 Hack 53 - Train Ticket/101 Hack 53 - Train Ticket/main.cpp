//
//  main.cpp
//  101 Hack 53 - Train Ticket
//
//  Created by S M HEMEL on 2/3/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n%8==0) return 0 * puts("SUB");
    else if(n%8==7) return 0 * puts("SLB");
    else if(n==3 || n==6 || n==11 || n==14 || n==19 || n==22 || n==27 || n==30 || n==35 || n==38 || n==43 || n==46 || n==51 || n==54 || n==59 ||n==62 || n==67 ||n==70) return 0 * puts("UB");
    else if(n==2 || n==5 || n==10 || n==13 || n==18 || n==21 || n==26 || n==29 || n==34 || n==37 || n==42 || n==45 || n==50 || n==53 || n==58 || n==61 ||n==66 || n==69 ){
        return 0 * puts("MB");
    }
    else puts("LB");
    return 0;
}
