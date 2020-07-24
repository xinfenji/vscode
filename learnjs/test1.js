var abs=function(x){
        if (typeof x != 'string'){
                throw 'not a number';

        }
        if (x>=0){
                return x;
        }else{
                return -x;
        }
};

abs(-12);