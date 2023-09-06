const a=
[
    {Name:'Natraj',salary:42000},
    {Name:'Thanisha',salary:24316},
    {Name:'Vasanth',salary:73424},
    {Name:'jknfuew',salary:23429},
    {Name:'Dhana',salary:33337},
]
n=a.reduce((accumulator, e)=>{
return accumulator+e.salary
},0);

console.log(n);