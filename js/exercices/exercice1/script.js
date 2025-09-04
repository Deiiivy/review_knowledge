const btn = document.querySelector('.btn');


function generateRandomHexColor() {
    const hexChars = '0123456789ABCDEF';
    let color ='#';
    for(let i = 0; i < 6; i++){
        color += hexChars[Math.floor(Math.random() * 16)]
    }
    return color;
}

btn.addEventListener('click', () => {
    const randomColor = generateRandomHexColor();

    document.body.style.backgroundColor = randomColor;
})

document.addEventListener('DOMContentLoaded', () => {
    document.body.style.backgroundColor = generateRandomHexColor();
});