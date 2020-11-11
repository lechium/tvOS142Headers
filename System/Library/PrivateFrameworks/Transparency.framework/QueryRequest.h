/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrivateFederatedLearning/GPBMessage.h>

@class NSData, NSString, NSMutableArray;

@interface QueryRequest : GPBMessage

@property (assign,nonatomic) int version; 
@property (assign,nonatomic) int application; 
@property (nonatomic,copy) NSData * uriVrfOutput; 
@property (nonatomic,copy) NSString * uri; 
@property (nonatomic,retain) NSMutableArray * devicesArray; 
@property (nonatomic,readonly) unsigned long long devicesArray_Count; 
@property (nonatomic,copy) NSData * accountId; 
+(id)descriptor;
@end
