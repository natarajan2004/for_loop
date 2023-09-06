const strings = ["pink", "red", "pink", "yellow", "yellow", "yellow"];

const frequencyOfStrings = (arrayOfStrings) => {
  return arrayOfStrings.reduce((acc, curr) => {
    if (acc[curr]) {
      acc[curr]++;
    } else {
      acc[curr] = 1;
    }
    return acc;
  }, []);
};

console.log(frequencyOfStrings(strings));