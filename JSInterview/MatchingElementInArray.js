const input1 = {a:1, b:2, c:3, d:10, e:12}
const input2 = {a:2, e:12, f:6, d:10}

const output = {d:10, e:12}

function func(input1,input2){
    let obj = {}
    for(let i in input1){
        if (input1[i]===input2[i]) {
            obj[i] = input1[i];
        }
    }return obj;
}
console.log(func(input1,input2));