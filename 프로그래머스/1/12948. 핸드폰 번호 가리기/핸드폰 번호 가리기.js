function solution(phone_number) {
    var answer = '';
    answer = '*'.repeat(phone_number.length-4) + phone_number.slice(-4);
    return answer;
}


// for (let i = 0; i < phone_number.length; i++) {
  //   if (i > phone_number.length - 5) {
  //     answer += phone_number[i];
  //   } else {
  //     answer += "*";
  //   }
  // }
  // return answer;