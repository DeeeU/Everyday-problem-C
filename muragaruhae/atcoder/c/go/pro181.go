package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

var sc = bufio.NewScanner(os.Stdin)

func main() {
	var n, count int
	n = nextInt()
	x := make([]int, n)
	y := make([]int, n)
	for i := 0; i < n; i++ {
		x[i], y[i] = nextInt(), nextInt()
	}
	for i := 0; i < n; i++ {
		for j := i + 1; j < n; j++ {
			for p := j + 1; p < n; p++ {
				if (x[j]-x[i])*(y[p]-y[i])-(x[p]-x[i])*(y[j]-y[i]) == 0 {
					count = 1
				}
				fmt.Println(i, j, p)
			}
		}
	}
	if count > 0 {
		fmt.Print("Yes")
	} else {
		fmt.Print("No")
	}
}

func init() {
	const max = 1024
	var buf = make([]byte, max)
	sc.Buffer(buf, max)
	sc.Split(bufio.ScanWords)
	return
}

func sq(a int) int {
	count := 1
	for i := 1; i < a+1; i++ {
		count += i
	}
	return count
}

func nextInt() int {
	sc.Scan()
	i, e := strconv.Atoi(sc.Text())
	if e != nil {
		panic(e)
	}
	return i
}
func nextStr() string {
	sc.Scan()
	return sc.Text()
}

// func max(a int, b int) int {
// 	if a > b {
// 		return a
// 	} else {
// 		return b
// 	}
// }
