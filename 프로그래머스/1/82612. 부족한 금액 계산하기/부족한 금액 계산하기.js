function solution(price, money, count) {
  var answer = 0;
  var total = 0;

  for (let i = 1; i < count + 1; i++) {
    total += price * i;
  } //30

  if (money < total) {
    answer = total - money;
  } else {
    answer = 0;
  }

  return answer;
}