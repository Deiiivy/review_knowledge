const inputRed = document.getElementById('inputRed')
const inputGreen = document.getElementById('inputGreen')
const inputBlue = document.getElementById('inputBlue')

const parrafoRed = document.getElementById('parrafoRed')
const parrafoGreen = document.getElementById('parrafoGreen')
const parrafoBlue = document.getElementById('parrafoBlue')


let red = inputRed.value
let green = inputGreen.value
let blue = inputBlue.value

parrafoRed.innerText = red
parrafoGreen.innerText = green
parrafoBlue.innerText = blue

function ActualizarColor( red , green , blue){
    color = `rgb(${red} ${green} ${blue})`
    document.body.style.backgroundColor = color
}


inputRed.addEventListener('input',(e)=>{
    red = e.target.value
    parrafoRed.innerText = red;
    ActualizarColor(red,green,blue)
})
inputGreen.addEventListener('input',(e)=>{
    verde= e.target.value
    parrafoGreen.innerText = verde;
    ActualizarColor(red,verde,blue)
})
inputBlue.addEventListener('input',(e)=>{
    blue= e.target.value
    parrafoBlue.innerText = blue;
    ActualizarColor(red,green,blue)
})