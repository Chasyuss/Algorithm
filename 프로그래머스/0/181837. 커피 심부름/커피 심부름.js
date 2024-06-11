function solution(order) {
  let pay = 0;

  for (let i = 0; i < order.length; i++) {
    order[i].includes('cafelatte') ?
    pay += 5000 : pay += 4500
  }

  return pay;
}