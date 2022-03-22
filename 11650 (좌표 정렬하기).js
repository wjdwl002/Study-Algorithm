// ps.main(async () => {
//   /* main logic goes here */

//   let x, y;
//   let [num] = await ps.readArrayLine()
//   let arr = [];
//   let minusArr =[]

//   for (let i =0; i<num; i++){
//       arr.push( [x,y] = await ps.readArrayLine()
//       );
//   }
  
//   arr.sort();
//   console.log(arr);
//   for(let i=0; i<arr.length; i++){
//     if(arr[i][0]>=0) {
//         minusArr = arr.slice(0,i);
//         break;
//     }
//   }
//   minusArr.reverse();
//   console.log(minusArr);

// });

const fs = require('fs');
let [n, ...arr] = fs.readFileSync("data.txt",'utf8').toString().trim().split("\n");
let newArr =[];
arr.forEach(e=>{
  // const a = [e.slice(0,1), e.slice(2,1)];
  // console.log(e.slice(0,1));
  // newArr.push(a)
})
console.log(newArr);