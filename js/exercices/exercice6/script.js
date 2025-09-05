const cuadrado = document.querySelector('#cuadrado')


document.addEventListener('keydown', (e) => {
    if(e.key === 'r'){
        cuadrado.style.backgroundColor = 'red'
    }else if(e.key === 'g'){
        cuadrado.style.backgroundColor = 'green'
    }else if(e.key === 'b'){
        cuadrado.style.backgroundColor = 'blue'
    }
})