let arr = [
    "Natarajan",
    "Finstein",
    "GFG",
    "jkrhnrthnr",
];
 
function gfg_Run() {
    return arr.reduce(function (a, b) {
        return a.length > b.length ? a : b;
    });
}
 
console.log(gfg_Run());