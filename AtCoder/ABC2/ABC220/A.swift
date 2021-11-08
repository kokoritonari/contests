print({let n=$0[1]/$0[2]*$0[2];return n>=$0[0] ?n:-1}(readLine()!.split(separator:" ").map{Int($0)!}))
