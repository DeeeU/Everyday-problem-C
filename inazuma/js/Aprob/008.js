function Main(input){
  input = input.split(" ");
  var a = parseInt(input[0], 10);
  var b = parseInt(input[1], 10);

  console.log("%d", b - a + 1);

}
Main(require("fs").readFileSync("/dev/stdin", "utf8"));
