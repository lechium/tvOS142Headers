/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAMPSetQueueQueueOrder : AceObject <SAAceSerializable>

@property (assign,nonatomic) BOOL descending; 
@property (nonatomic,copy) NSString * mediaItemProperty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setQueueQueueOrder;
+(id)setQueueQueueOrderWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)mediaItemProperty;
-(void)setMediaItemProperty:(NSString *)arg1 ;
-(BOOL)descending;
-(void)setDescending:(BOOL)arg1 ;
@end

