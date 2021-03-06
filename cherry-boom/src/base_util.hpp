//
//  base_util.hpp
//  cherry-bomb
//
//  Created by huteng on 17/2/17.
//  Copyright © 2017年 huteng. All rights reserved.
//

#ifndef base_util_hpp
#define base_util_hpp

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "json-forwards.h"
#include "json.h"
#include <regex>



class BaseUtil {
    
public:
    
    /* package regex libray regex_replace function , as word replace method , for convenient*/
    
    static std::string WordReplace(std::string origin_string, std::string is_replaced_word, std::string replacing_word);
    
};

#endif /* base_util_hpp */


