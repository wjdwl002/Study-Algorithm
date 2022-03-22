const fs = require('fs');

const [n, ...arr] = fs.readFileSync("./data.txt").toString().trim().split("\n");

let newArr = [];
arr.forEach(e=>{
    newArr.push(e.trim().split(" "));
})

function sortByAge(a,b){
    return a[0]-b[0];
}

newArr.sort(sortByAge);
newArr.forEach(e=>{
    console.log(e[0], e[1]);
})