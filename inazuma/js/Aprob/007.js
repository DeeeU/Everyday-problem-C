function Main(input){
  input = parseInt(input.split("\n"),10);

  console.log("%d",input-1);

}
Main(require("fs").readFileSync("/dev/stdin", "utf8"));
