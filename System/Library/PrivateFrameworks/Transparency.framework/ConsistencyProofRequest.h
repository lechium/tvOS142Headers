/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrivateFederatedLearning/GPBMessage.h>

@class NSMutableArray;

@interface ConsistencyProofRequest : GPBMessage

@property (assign,nonatomic) int version; 
@property (nonatomic,retain) NSMutableArray * requestsArray; 
@property (nonatomic,readonly) unsigned long long requestsArray_Count; 
+(id)descriptor;
@end
