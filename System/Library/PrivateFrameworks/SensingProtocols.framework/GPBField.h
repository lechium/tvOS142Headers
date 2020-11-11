/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SensingProtocols.framework/SensingProtocols
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrivateFederatedLearning/GPBMessage.h>

@class NSString, NSMutableArray;

@interface GPBField : GPBMessage

@property (assign,nonatomic) int kind; 
@property (assign,nonatomic) int cardinality; 
@property (assign,nonatomic) int number; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * typeURL; 
@property (assign,nonatomic) int oneofIndex; 
@property (assign,nonatomic) BOOL packed; 
@property (nonatomic,retain) NSMutableArray * optionsArray; 
@property (nonatomic,readonly) unsigned long long optionsArray_Count; 
@property (nonatomic,copy) NSString * jsonName; 
@property (nonatomic,copy) NSString * defaultValue; 
+(id)descriptor;
@end

