/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class NSString, NSArray;

@interface AVMetadataGroup : NSObject

@property (nonatomic,readonly) NSString * classifyingLabel; 
@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,copy,readonly) NSArray * items; 
+(void)initialize;
-(NSString *)uniqueID;
-(NSArray *)items;
-(NSString *)classifyingLabel;
-(opaqueCMFormatDescriptionRef)copyFormatDescription;
@end

