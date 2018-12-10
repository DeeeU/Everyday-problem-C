function Main(input){
  input = input.split(' ');

  var a = parseInt(input[0], 10);
  var b = parseInt(input[1], 10);

  if (a > b) {
    console.log("%d", a);
  }else{
    console.log("%d", b);
  }


}
Main(require("fs").readFileSync("/dev/stdin", "utf8"));
