function solution(players, callings) {
    const dict = players.reduce((acc,cur,index) => {
       acc[cur] = index 
        return acc
    },{})
    
    callings.forEach((player) => {
        const curPlayerIndex = dict[player]
        const nextPlayer = players[curPlayerIndex - 1]
        
    
        players[curPlayerIndex - 1] = player
        players[curPlayerIndex] = nextPlayer
        
        dict[player] -= 1
        dict[nextPlayer] += 1
    })
    
    return players
}