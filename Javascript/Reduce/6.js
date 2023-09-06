const a=
[
    {Name:'Natraj',Age:20},
    {Name:'Thanisha',Age:16},
    {Name:'Vasanth',Age:24},
    {Name:'jknfuew',Age:29},
    {Name:'Dhana',Age:37},
]
n= a.reduce((accumulator, e) => {
    return accumulator + (e.price/a.length);
  }, 0);
  

console.log(n);