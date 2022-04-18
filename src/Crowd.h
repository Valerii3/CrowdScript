#ifndef CROWD_H
#define CROWD_H


function crowd_gcd(arg1: int, arg2: int) -> int{
    if (b == 0){
        return a;
    }
    return gcd(b, a % b);
}


function crowd_max(arg1: int, arg2: int) -> int{
    if (arg1 > arg2){
        return ag1;
    }
    return agr2;
}


function crowd_min(arg1: int, arg2: int) -> int{
    if (arg1 > arg2){
        return arg2;
    }
    return agr1;
}


function crowd_precision(ans: float) -> float{  // by @altg1fted
    let result: string[] = [];
    result.push(string(int(ans)));
    result.push(".");
    let rem = ans - float(int(ans));
    for (let prec = 0; prec < 10 ; prec += 1) {
        rem *= float(10);
        result.push(string(int(rem)));
        rem = rem - float(int(rem));
    }
    return result.join("");
}

#endif //CROWD_CROWD_H
