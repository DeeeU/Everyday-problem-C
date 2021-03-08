package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

var sc = bufio.NewScanner(os.Stdin)

func main() {
	var (
		h, w int
	)
	h, w = nextInt(), nextInt()
	s := make([]string, h)
	for i := 0; i < h; i++ {
		s[i] = nextStr()
	}
	// for i := 0;i <h; i++ {
	// 	for j := 0;j < w; j++ {
	// 		if s[i][j]
	// 	}
	// }
	fmt.Println(string(s[1][1]), w)
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
