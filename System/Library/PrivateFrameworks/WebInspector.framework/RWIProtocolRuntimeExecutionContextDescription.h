/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolRuntimeExecutionContextDescription : RWIProtocolJSONObject

@property (assign,nonatomic) int identifier; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * frameId; 
-(NSString *)name;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setName:(NSString *)arg1 ;
-(int)identifier;
-(void)setIdentifier:(int)arg1 ;
-(void)setFrameId:(NSString *)arg1 ;
-(NSString *)frameId;
-(id)initWithIdentifier:(int)arg1 type:(long long)arg2 name:(id)arg3 frameId:(id)arg4 ;
@end

