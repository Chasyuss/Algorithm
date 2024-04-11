function solution(num_list) {
    var answer = [];
    let even = 0; 
    let odd = 0;
    
    for(i of num_list)
        {
            if(i % 2 ===0)
                even++;
            else 
                odd++;
        }
    answer.push(even);
    answer.push(odd);
    return answer;
}