function solution(numbers) {
    const answer = []

    for (let i = 0; i < numbers.length; i++) {
        for (let j = i + 1; j < numbers.length; j++) {
            answer.push(numbers[i] + numbers[j])
        }
    }
    const answer2 = [...new Set(answer)]
    return answer2.sort((a, b) => a - b)
}