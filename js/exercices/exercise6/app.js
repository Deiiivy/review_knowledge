colorText = document.getElementById('color-text')
let button = document.getElementById('button-color')

function GenerarColor(){
   let  color = '#'
    const digitos = '0123456789ABCDEF'

    for(i= 0; i<6; i++){
         indice = Math.floor(Math.random() * 16)
        color += digitos[indice]
    }
    return color
}

button.addEventListener('click', ()=>{
color = GenerarColor();
colorText.textContent = color;
document.body.style.backgroundColor = color
})