/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MLCDataHelper : NSObject
+(void)fillData:(id)arg1 withFloatValue:(float)arg2 ;
+(BOOL)convertFp32toFp16:(unsigned long long)arg1 fp32Values:(float*)arg2 fp16Values:( *)arg3 ;
+(id)createDataWithFloatValue:(float)arg1 count:(unsigned long long)arg2 ;
+(BOOL)convertFp16toFp32:(unsigned long long)arg1 fp16Values:( *)arg2 fp32Values:(float*)arg3 ;
@end

