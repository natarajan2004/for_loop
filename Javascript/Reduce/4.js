const a=
[
    {object:'pen',quantity:2,price:20},
    {object:'pencil',quantity:1,price:20},
    {object:'scale',quantity:4,price:45},
    {object:'box',quantity:3,price:50},
    {object:'sketch',quantity:1,price:100}
]
n= a.reduce((accumulator, e) => {
    return accumulator + (e.price*e.quantity);
  }, 0);
  

console.log(n);