#include <string>
#include <vector>
#include <iostream>
using namespace std;

int countBits(int num){
    int bitCounts=0;
    
    while(num){
    	num = num & (num-1);
    	bitCounts++;
	}
    return bitCounts;
}

int getNextBigger(int num){
    int originalBitCount=countBits(num);
    int candidate=num+1;

    while(true){
        int currentBitCount = countBits(candidate);
        
        if(originalBitCount == currentBitCount){
            return candidate;
        }
        candidate++;
    }
}


int solution(int n) {
    int answer = 0;
    
    answer = getNextBigger(n);
    
    return answer;
}
