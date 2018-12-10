function Main(input){
  a = parseInt(input, 10);
  if (input % 2 == 0) {
    console.log("%d", a / 2);
  }else{
    console.log("%d", Math.floor(a / 2) + 1);
  }

}
Main(require("fs").readFileSync("/dev/stdin", "utf8"));
