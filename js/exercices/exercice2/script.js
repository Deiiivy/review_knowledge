let input = document.getElementById('input')
let p = document.querySelector('.parrafo')



input.addEventListener('input', () => {
    p.textContent = input.value;
})

