/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSArray, NSString;

@interface SAErrorIndicatorStatus : AceObject <SABackgroundContextObject>

@property (assign,nonatomic) BOOL deviceFixingProblems; 
@property (nonatomic,copy) NSArray * values; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)errorIndicatorStatus;
+(id)errorIndicatorStatusWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)values;
-(id)groupIdentifier;
-(void)setValues:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)deviceFixingProblems;
-(void)setDeviceFixingProblems:(BOOL)arg1 ;
@end

