/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAStartRequest.h>

@class NSString, NSDictionary;

@interface SAStartDirectActionRequest : SAStartRequest

@property (nonatomic,copy) NSString * directAction; 
@property (nonatomic,copy) NSDictionary * requestExecutionParameters; 
@property (nonatomic,copy) NSString * utteranceFromRequestParameters; 
+(id)startDirectActionRequest;
+(id)startDirectActionRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)directAction;
-(void)setDirectAction:(NSString *)arg1 ;
-(NSDictionary *)requestExecutionParameters;
-(void)setRequestExecutionParameters:(NSDictionary *)arg1 ;
-(NSString *)utteranceFromRequestParameters;
-(void)setUtteranceFromRequestParameters:(NSString *)arg1 ;
@end

