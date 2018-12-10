package main

import (
 "fmt"
//  "math"
)

func main() {
	var a, b int
  fmt.Scan(&a, &b)
  if a / 4 == b / 3 {
    fmt.Println("4:3")
  }else if a / 16 == b / 9 {
    fmt.Println("16:9")
  }
//  fmt.Print(math.Pi)
}
