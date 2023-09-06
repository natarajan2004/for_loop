const a=
[
    {object:'pen',price:20},
    {object:'pencil',price:20},
    {object:'scale',price:45},
    {object:'box',price:50},
    {object:'sketch',price:100}
]
n= a.filter(low => low.price<= 20);

console.log(n);