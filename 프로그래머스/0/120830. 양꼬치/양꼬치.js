function solution(n, k) {
    if(n>=10){
        k -= Math.floor(n/10);
    }
    var answer = (12000*n)+(2000*k);
    return answer;
}
