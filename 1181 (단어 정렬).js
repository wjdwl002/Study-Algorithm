const fs = require('fs');

const [num, ...arr] = fs.readFileSync("./data.txt").toString().trim().split("\n");

function sortByLength(a,b){
  if(a.length < b.length) return -1
  else if (a.length == b.length){
    for(let i = 0; i<a.length; i++){
      if(a[i]!=b[i]) return a[i].charCodeAt(0) - b[i].charCodeAt(0);
    }
  }
  return 1
}
arr.sort(sortByLength);


const uniqueArr = arr.filter((element, index) => {
  return arr.indexOf(element) === index;
  });

uniqueArr.forEach((i)=>{console.log(i);})
