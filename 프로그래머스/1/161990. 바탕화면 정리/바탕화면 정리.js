function solution(wallpaper) {
    let top = null
    let bottom
    let left = wallpaper[0].length
    let right = 0
    
    for(let i = 0; i<wallpaper.length; i++) {
        const firstFileIndexAtLeft = wallpaper[i].indexOf("#")
        if(firstFileIndexAtLeft !== -1) {
            if(top === null) top = i
            bottom = i + 1
            left = Math.min(left, firstFileIndexAtLeft)
        }
        
        let firstFileIndexAtRight = wallpaper[i].lastIndexOf("#")
        if(firstFileIndexAtRight !== -1) {
            right = Math.max(right, firstFileIndexAtRight + 1)
        }
    }
    return [top, left, bottom, right]
}