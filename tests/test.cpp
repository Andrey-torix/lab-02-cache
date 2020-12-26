// Copyright 2020 Andreytorix
#include "../include/cache.hpp"
#include <gtest/gtest.h>
TEST(Test, straightBackExperiment) {
    int sizeBuffert[5] = { (cache_Size[0] * 1024 * 1024), (cache_Size[1] * 1024 * 1024),
                               (cache_Size[2] * 1024 * 1024),
                               (cache_Size[3] * 1024 * 1024), (cache_Size[4] * 1024 * 1024)};
    for (int i = 0; i < 5; i++) {
    std::cout << sizeBuffert[i] <<std::endl;
    }     
    std::cout << "investigaion:" << std::endl;
    std::cout << "  travel_order: \"straight\"" << std::endl;
    std::cout << "  experiments:" << std::endl;
    std::cout << "  - experiment:" << std::endl;
    std::cout << "      number: 1" << std::endl;
    std::cout << "      input_data:" << std::endl;
    std::cout << "        buffer_size: \"0.150mb\"" << std::endl;
    std::cout << "      results:" << std::endl;
    std::cout << "        duration: \"" <<
       straightExperiment(sizeBuffert[0], tCount) << "\"" << std::endl;
    std::cout << "  - experiment:" << std::endl;
    std::cout << "      number: 2" << std::endl;
    std::cout << "      input_data:" << std::endl;
    std::cout << "        buffer_size: \"0.640mb\"" << std::endl;
    std::cout << "      results:" << std::endl;
    std::cout << "        duration: \"" <<
        straightExperiment(sizeBuffert[1], tCount) << "\"" << std::endl;
    std::cout << "  - experiment:" << std::endl;
    std::cout << "      number: 3" << std::endl;
    std::cout << "      input_data:" << std::endl;
    std::cout << "        buffer_size: \"0.640mb\"" << std::endl;
    std::cout << "      results:" << std::endl;
    std::cout << "        duration: \"" <<
        straightExperiment(sizeBuffert[2], tCount) << "\"" << std::endl;
    std::cout << "  - experiment:" << std::endl;
    std::cout << "      number: 4" << std::endl;
    std::cout << "      input_data:" << std::endl;
    std::cout << "        buffer_size: \"0.640mb\"" << std::endl;
    std::cout << "      results:" << std::endl;
    std::cout << "        duration: \"" <<
        straightExperiment(sizeBuffert[3], tCount) << "\"" << std::endl;
    std::cout << "  - experiment:" << std::endl;
    std::cout << "      number: 5" << std::endl;
    std::cout << "      input_data:" << std::endl;
    std::cout << "        buffer_size: \"0.640mb\"" << std::endl;
    std::cout << "      results:" << std::endl;
    std::cout << "        duration: \"" <<
        straightExperiment(sizeBuffert[4], tCount) << "\"" << std::endl;
    /*
    std::cout << "investigaion:" << std::endl;
    std::cout << "  travel_order: \"back\"" << std::endl;
    std::cout << "  experiments:" << std::endl;
    std::cout << "  - experiment:" << std::endl;
    std::cout << "      number: 1" << std::endl;
    std::cout << "      input_data:" << std::endl; 
    std::cout << "        buffer_size: \"0.150mb\"" << std::endl;
    
    rarr = 0.150 * 1024 * 1024; //размер массива
    std::cout << "      results:" << std::endl;
    std::cout << "        duration: \"" <<
        backExperiment(rarr, tCount) << "\"" << std::endl;
    std::cout << "  - experiment:" << std::endl;
    std::cout << "      number: 2" << std::endl;
    std::cout << "      input_data:" << std::endl;
    std::cout << "        buffer_size: \"0.640mb\"" << std::endl;
    rarr = 0.640 * 1024 * 1024; //размер массива
    std::cout << "      results:" << std::endl;
    std::cout << "        duration: \"" <<
        backExperiment(rarr, tCount) << "\"" << std::endl;
    std::cout << "  - experiment:" << std::endl;
    std::cout << "      number: 3" << std::endl;
    std::cout << "      input_data:" << std::endl;
    std::cout << "        buffer_size: \"0.640mb\"" << std::endl;
    rarr = 5 * 1024 * 1024; //размер массива
    std::cout << "      results:" << std::endl;
    std::cout << "        duration: \"" <<
        backExperiment(rarr, tCount) << "\"" << std::endl;
    std::cout << "  - experiment:" << std::endl;
    std::cout << "      number: 4" << std::endl;
    std::cout << "      input_data:" << std::endl;
    std::cout << "        buffer_size: \"0.640mb\"" << std::endl;
    rarr = 7 * 1024 * 1024; //размер массива
    std::cout << "      results:" << std::endl;
    std::cout << "        duration: \"" <<
        backExperiment(rarr, tCount) << "\"" << std::endl;
    std::cout << "  - experiment:" << std::endl;
    std::cout << "      number: 5" << std::endl;
    std::cout << "      input_data:" << std::endl;
    std::cout << "        buffer_size: \"0.640mb\"" << std::endl;
    rarr = 9 * 1024 * 1024; //размер массива
    std::cout << "      results:" << std::endl;
    std::cout << "        duration: \"" <<
        backExperiment(rarr, tCount) << "\"" << std::endl;
    std::cout << "investigaion:" << std::endl;
    std::cout << "  travel_order: \"random\"" << std::endl;
    std::cout << "  experiments:" << std::endl;
    std::cout << "  - experiment:" << std::endl;
    std::cout << "      number: 1" << std::endl;
    std::cout << "      input_data:" << std::endl;
    std::cout << "        buffer_size: \"0.150mb\"" << std::endl;
    rarr = 0.150 * 1024 * 1024; //размер массива
    std::cout << "      results:" << std::endl;
    std::cout << "        duration: \"" <<
        randomExperiment(rarr, tCount) << "\"" << std::endl;
    std::cout << "  - experiment:" << std::endl;
    std::cout << "      number: 2" << std::endl;
    std::cout << "      input_data:" << std::endl;
    std::cout << "        buffer_size: \"0.640mb\"" << std::endl;
    rarr = 0.640 * 1024 * 1024; //размер массива
    std::cout << "      results:" << std::endl;
    std::cout << "        duration: \"" <<
        randomExperiment(rarr, tCount) << "\"" << std::endl;
    std::cout << "  - experiment:" << std::endl;
    std::cout << "      number: 3" << std::endl;
    std::cout << "      input_data:" << std::endl;
    std::cout << "        buffer_size: \"0.640mb\"" << std::endl;
    rarr = 5 * 1024 * 1024; //размер массива
    std::cout << "      results:" << std::endl;
    std::cout << "        duration: \"" <<
        randomExperiment(rarr, tCount) << "\"" << std::endl;
    std::cout << "  - experiment:" << std::endl;
    std::cout << "      number: 4" << std::endl;
    std::cout << "      input_data:" << std::endl;
    std::cout << "        buffer_size: \"0.640mb\"" << std::endl;
    rarr = 7 * 1024 * 1024; //размер массива
    std::cout << "      results:" << std::endl;
    std::cout << "        duration: \"" <<
        randomExperiment(rarr, tCount) << "\"" << std::endl;
    std::cout << "  - experiment:" << std::endl;
    std::cout << "      number: 5" << std::endl;
    std::cout << "      input_data:" << std::endl;
    std::cout << "        buffer_size: \"0.640mb\"" << std::endl;
    rarr = 9 * 1024 * 1024; //размер массива
    std::cout << "      results:" << std::endl;
    std::cout << "        duration: \"" <<
        randomExperiment(rarr, tCount) << "\"" << std::endl;*/
    bool t1 = false;
    rarr = 0.150 * 1024 * 1024; //размер массива
    t1 = (straightExperiment(rarr, tCount)
            < randomExperiment(sizeBuffert[0], tCount))
            && (backExperiment(sizeBuffert[0], tCount) < randomExperiment(rarr, tCount));
        EXPECT_EQ(t1, true);
}
