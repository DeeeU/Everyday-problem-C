function Main(input)
{
  input = input.split("\n");

  // var a = parseInt(input[0], 10);
  if (input[0][0] == input[1][2] && input[0][2] == input[1][0] && input[0][1] == input[1][1]) {
    console.log("YES");
  }else {
    console.log("NO");
  }

  // console.log('%d', a);
}

Main(require("fs").readFileSync("/dev/stdin", "utf8"));
