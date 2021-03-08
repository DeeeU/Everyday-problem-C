package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"sort"
	"strconv"
)

var sc = bufio.NewScanner(os.Stdin)

func main() {
	var (
		n int
		k int
	)
	n, k = nextInt(), nextInt()
	ans := n
	for i := 0; i < k; i++ {
		ans = gfin(ans)
	}
	fmt.Println(ans)
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

func gmin(a int) int {
	dl := make([]int, 0)
	for a > 0 {
		n1 := a % 10
		a /= 10
		dl = append(dl, n1)
	}
	sort.Ints(dl)

	ans := 0
	for i := 0; i < len(dl); i++ {
		ans += dl[i] * int(math.Pow10(len(dl)-i-1))
	}
	return ans
}
func gmax(a int) int {
	dl := make([]int, 0)
	for a > 0 {
		n1 := a % 10
		a /= 10
		dl = append(dl, n1)
	}
	sort.Sort(sort.Reverse(sort.IntSlice(dl)))

	ans := 0
	for i := 0; i < len(dl); i++ {
		ans += dl[i] * int(math.Pow10(len(dl)-i-1))
	}
	return ans
}

func gfin(a int) int {
	return gmax(a) - gmin(a)
}

// func max(a int, b int) int {
// 	if a > b {
// 		return a
// 	} else {
// 		return b
// 	}
// }
