const arr=
[
    {holiday:'Vinayagar chadurthi',date:3},
    {holiday:'Independence day',date:15},
    {holiday:'krishna jayanthi',date:18},
    {holiday:'Holy',date:27},
    {holiday:'Birthday', date:11}
]
newarr=arr.filter(e=>(e.date<20 && e.date>12));
console.log(newarr);