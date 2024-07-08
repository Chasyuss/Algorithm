function solution(myString, pat) {
    let answer = '';
    const ChangeString = [];
    
    //문자열 바꾸기 
    for(let i =0; i<myString.length; i++){
        if(myString[i] === "A"){
            ChangeString.push('B');
        }else{
            ChangeString.push('A');
        }
    }
    //pat 문자열 확인 
    answer = ChangeString.join('');
    if(answer.includes(pat) === true){
        return 1;
    }else{
        return 0; 
    }
}