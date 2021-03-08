package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

var sc = bufio.NewScanner(os.Stdin)

func main() {
	var n int
	n = nextInt()
	dl := make([]int, n)
	for i := 0; i < n; i++ {
		a := nextInt()
		dl[i] = a
	}
	// respect for amberlamp
	var total, sum1, sum2 int
	for i, j := range dl {
		total += i*square(j) - 2*j*sum1 + sum2
		sum1 += j
		sum2 += square(j)
	}

	// for i := 2; i <= n; i++ {
	// 	for j := 1; j <= i-1; j++ {
	// 		ans += math.Pow(float64(dl[i-1])-float64(dl[j-1]), 2.0)
	// 	}
	// }
	fmt.Print(total)
}

func init() {
	const max = 1024
	var buf = make([]byte, max)
	sc.Buffer(buf, max)
	sc.Split(bufio.ScanWords)
	return
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

func nextFloat64() float64 {
	f, err := strconv.ParseFloat(nextStr(), 64)
	if err != nil {
		panic(err.Error())
	}
	return f
}

func square(x int) int {
	return x * x
}

// func max(a int, b int) int {
// 	if a > b {
// 		return a
// 	} else {
// 		return b
// 	}
// }
