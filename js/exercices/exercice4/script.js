const p = document.querySelector('.p')

document.addEventListener('keydown', (e) => {

    p.textContent = `La tecla presionada fue: ${e.key}`
})