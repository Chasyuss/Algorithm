// function solution(seoul) {
//     for (let i = 0; i < seoul.length; i++) {
//         if (seoul[i] === 'Kim') 
//             return `김서방은 ${i}에 있다`
//     }
// }

function solution(seoul) {
    let location = seoul.indexOf('Kim')
    return `김서방은 ${location}에 있다`;
}