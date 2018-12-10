function Main(input){
  input = input.split("\n");

  var a = parseInt(input[0], 10);
  var b = parseInt(input[1], 10);

  console.log("%d", a-b);
}
Main(require("fs").readFileSync("/dev/stdin", "utf8"));
