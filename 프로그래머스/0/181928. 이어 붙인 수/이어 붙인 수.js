function solution(num_list) {
    var answer = 0;
    const add = Number(num_list.filter((a) => (a) % 2 === 1).join(""));
    const even = Number(num_list.filter((a) => (a) % 2 === 0).join(""));
    answer = add + even; 
    return answer;
}