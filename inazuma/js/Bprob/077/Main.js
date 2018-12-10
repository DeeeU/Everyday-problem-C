function Main(input)
{
  input = input.split("\n");

  var a = parseInt(input[0], 10);
  // for(let i = 1; i <= a; i++)
  // {
  //   if (Math.pow(a, 0.5) % 1 != 0) {
  //     a -= 1;
  //   }else{
  //     console.log(a);
  //     break;
  //   }
  // }
  console.log(Math.pow(parseInt(Math.pow(a, 0.5), 10), 2));



  // console.log('%d', a);
}

Main(require("fs").readFileSync("/dev/stdin", "utf8"));
