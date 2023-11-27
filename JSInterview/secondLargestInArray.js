const input = [1,2,-2,11,7,1]
const output = 7;
const input1 = [1,4,7,2,4,7]

// function secondLargest(input){
//     let arr = [... new Set(input)].sort((a,b) =>a-b);
//     return arr[arr.length-2];
// }

function secondLargest(input) {
  let arr = input.sort((a, b) => a - b);
//   console.log(arr);
  let res = arr[arr.length-1];
  for(let i= arr.length-2;i>=0; i--){
    if (res!=input[i]) {
        res = input[i];
        break;
    }
  }
  return res;
}
console.log(secondLargest(input));
console.log(secondLargest(input1));