package main

import (
    "fmt"
)

func main() {
    //arr := []int {1, 2, 3, 4, 5}
    var arr []int 
    var count int
    fmt.Scanln(&count)
    for i := 0; i < count; i++ {
        var num int 
        fmt.Scanf("%d", &num)
        arr = append(arr, num)
    }
    total := getTrangleNum(arr)
    fmt.Println(total)
}

func getTrangleNum(arr []int) (int) {
    var a int
    var b int
    var c int
    var total int = 0
    for i:=0; i < len(arr)-2; i++ {
        a = arr[i]
        for j := i+1; j < len(arr)-1; j++ {
            b = arr[j]
            for k := j+1; k < len(arr); k++ {
                c = arr[k]
                if isTrangle(a, b, c) {
                    total++
                }
            }
        }
    }
    return total
}

func isTrangle(a int, b int, c int) (bool) {
    if (a + b > c && a + c > b && b + c > a) {
        return true
    }
    return false
}
