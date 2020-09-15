package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strconv"
)

var sc = bufio.NewScanner(os.Stdin)

func main() {
	var n, k int
	n, k = nextInt(), nextInt()
	h := make([]int, n)
	for i := 0; i < n; i++ {
		h[i] = nextInt()
	}
	sort.Ints(h)
	count := 0
	for i := 0; i < len(h)-k; i++ {
		count += h[i]
	}
	fmt.Print(count)
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
