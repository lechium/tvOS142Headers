/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSArray;


@protocol MTLCommandBufferEncoderInfo <NSObject>
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) NSArray * debugSignposts; 
@property (nonatomic,readonly) long long errorState; 
@required
-(NSString *)label;
-(long long)errorState;
-(NSArray *)debugSignposts;

@end

