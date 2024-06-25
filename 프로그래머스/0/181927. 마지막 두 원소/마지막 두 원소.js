function solution(num_list) {
    let a = num_list[num_list.length-1]; // last
    let b = num_list[num_list.length-2]; // 그 전 원소
    
    if(a > b ){
        num_list.push(a - b)
    }
    else{
        num_list.push(2*a)
    }
    return num_list;
}