function solution(answers) {
    var answer = [];
    var one = [1, 2, 3, 4, 5];
    var two = [2, 1, 2, 3, 2, 4, 2, 5];
    var three = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5];
    
    var onescore = answers.filter((a,i) => a === one[i%one.length]).length;
    var twoscore = answers.filter((a,i) => a === two[i%two.length]).length;
    var threescore = answers.filter((a,i) => a === three[i%three.length]).length;
    
    var maxscore = Math.max(onescore,twoscore,threescore); 
    
    if(onescore === maxscore){
        answer.push(1)
    } 
    if(twoscore === maxscore){
        answer.push(2)
    }
    if(threescore === maxscore){
        answer.push(3)
    }
    
    return answer;

}