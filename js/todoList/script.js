document.addEventListener("DOMContentLoaded", () => {
  let input = document.getElementById("input");
  let list = document.querySelector(".list");
  let btnSend = document.querySelector(".btnSend");
  let btnDelete = document.querySelector(".btnDelete");
  let btnEdit = document.querySelector(".btnEdit");
  let counterElement = document.querySelector(".counter");

  let selectedLi = null; 
  let counter = 0;


  let tasks = JSON.parse(localStorage.getItem("tasks")) || [];


  function renderTask(task) {
    let newLi = document.createElement("li");
    newLi.textContent = task;
    list.appendChild(newLi);
    counter++;
    counterElement.textContent = counter;
  }


  tasks.forEach(task => renderTask(task));


  btnSend.addEventListener("click", () => {
    const valueInput = input.value;
    if (valueInput.trim() === "") return;

    renderTask(valueInput);
    tasks.push(valueInput);
    localStorage.setItem("tasks", JSON.stringify(tasks));

    input.value = "";
  });


  list.addEventListener("click", (e) => {
    if (e.target.tagName === "LI") {
      list.querySelectorAll("li").forEach(li => li.classList.remove("selected"));
      e.target.classList.add("selected");
      selectedLi = e.target; 
      input.value = selectedLi.textContent;
    }
  });

  btnDelete.addEventListener("click", () => {
    if (selectedLi) {
      tasks = tasks.filter(task => task !== selectedLi.textContent);
      localStorage.setItem("tasks", JSON.stringify(tasks));

      selectedLi.remove();
      selectedLi = null; 
      counter--;
      counterElement.textContent = counter;
    }
  });

  btnEdit.addEventListener('click', () => {
    if (selectedLi) {
      let newText = input.value.trim();
      if (newText === "") return;

      selectedLi.textContent = newText;

      let index = tasks.indexOf(selectedLi.textContent);
      if (index !== -1) {
        tasks[index] = newText;
        localStorage.setItem("tasks", JSON.stringify(tasks));
      }

      selectedLi.classList.remove("selected");
      selectedLi = null;
      input.value = "";
    }
  });
});
