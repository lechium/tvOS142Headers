/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDictionary;


@protocol BWDataBufferBackedFormat <NSObject>
@property (nonatomic,readonly) unsigned long long dataBufferSize; 
@property (nonatomic,readonly) unsigned dataFormat; 
@property (nonatomic,readonly) NSDictionary * dataBufferAttributes; 
@required
-(unsigned)dataFormat;
-(NSDictionary *)dataBufferAttributes;
-(unsigned long long)dataBufferSize;

@end

