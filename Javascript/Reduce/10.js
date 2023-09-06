const numbers = [1, 2, 3, 4, 5];
const sum = numbers.reduce((next, number) => {
  return next + number;
}, 0);