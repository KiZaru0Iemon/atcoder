#pragma once
/*
  time_data型             :時間について管理する型
  TIME_SET_START(stime)   :始まりの時間をセット
  TIME_SET_END(etime)     :終わりの時間をセット
  TIME_RESULT(stime,etime):かかった時間(ミリ秒単位)を取得
*/

#ifdef ___WIN

#include<time.h>
typedef time_t time_data;
#define TIME_SET_START(stime) stime = clock()
#define TIME_SET_END(etime) etime = clock()
#define TIME_RESULT(stime,etime) ((float)(etime - stime)*1000.0 / CLOCKS_PER_SEC)

#else

#include<sys/time.h>
typedef struct timeval time_data;
#define TIME_SET_START(stime) gettimeofday(&stime, NULL)
#define TIME_SET_END(etime) gettimeofday(&etime, NULL)
#define TIME_RESULT(stime,etime) ((etime.tv_sec-stime.tv_sec)*1000.0 + (etime.tv_usec-stime.tv_usec)*0.001)

#endif

#define program_timer(method,message) \
do{ \
  time_data stime,etime; \
  TIME_SET_START(stime); \
  method; \
  TIME_SET_END(etime); \
  printf(">> %s : %f [ms]\n",message,(double)TIME_RESULT(stime,etime)); \
}while(0)
