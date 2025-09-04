const square = document.getElementById('box');

let positionX = 200; 
let positionY = 200;

document.addEventListener('keydown', (e) => {
    if (e.key === 'ArrowUp') {
        positionY -= 10;
    } else if (e.key === 'ArrowDown') {
        positionY += 10; 
    } else if (e.key === 'ArrowLeft') {
        positionX -= 10; 
    } else if (e.key === 'ArrowRight') {
        positionX += 10; 
    }

    square.style.top = positionY + "px";
    square.style.left = positionX + "px";
});
