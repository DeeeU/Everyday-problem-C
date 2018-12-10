function Main(input){
  input = input.split("\n");
  while (true) {
    if (input[2] % input[1] == 0 && input[2] % input[0] == 0) {
      console.log(input[2]);
      break;
    }
    input[2]++;
  }

}
Main(require("fs").readFileSync("/dev/stdin", "utf8"));
