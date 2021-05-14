int reverse(int x){
    int ret = 0,tmp = 0;
    while(x != 0) {
        tmp = x % 10;
        if (ret > 214748364 || (ret == 214748364 && tmp >7)) return 0;
        if (ret < -214748364 || (ret == -214748364 && tmp < -8)) return 0;
        ret = ret*10 + tmp;
        x /= 10;
    }
    return ret;  
}
