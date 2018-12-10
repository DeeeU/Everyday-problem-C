function Main(input){
  input = input.split(" ");
  var x = input[0] + input[1];
  var a = parseInt(x,10);
  console.log("%d",a * 2);
}
Main(require("fs").readFileSync("/dev/stdin", "utf8"));
