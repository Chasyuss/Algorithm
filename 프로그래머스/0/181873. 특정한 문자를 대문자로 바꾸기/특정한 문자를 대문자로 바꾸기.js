function solution(my_string, alp) {
    let answer = my_string.replaceAll(alp, alp.toUpperCase());
        
    return answer;
}