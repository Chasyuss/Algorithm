function solution(d, budget) {
    d.sort((a,b) => a-b);
    let count = 0;
    
    for(let i = 0; i<d.length; i++){
        if(d[i]>budget){
            break;
        }else{
            budget-=d[i];
            count+=1;
        }
    }
    return count;
}