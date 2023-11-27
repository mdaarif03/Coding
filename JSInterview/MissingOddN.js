let input = [7,9,11,17,19];

for(let i =0; i<input.length;i++)
{
    let current = input[i];
    let next = current+2;
    if(input[i+1]===next) continue;
    else{
        console.log(next);
        break;
    }
}