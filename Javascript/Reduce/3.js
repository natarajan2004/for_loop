const a=[10,10,10,10,10,10,10,10,10,10]
const sumWithInitial = a.reduce((accumulator, currentValue )=> accumulator + currentValue, 0) /a.length;
console.log(sumWithInitial);