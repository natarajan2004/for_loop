const a=
[
    {object:'pen',price:20},
    {object:'pencil',price:20},
    {object:'scale',price:45},
    {object:'box',price:50},
    {object:'sketch',price:100}
]
n= a.reduce((accumulator, e) => {
    return accumulator + e.price;
  }, 0);
  

console.log(n);