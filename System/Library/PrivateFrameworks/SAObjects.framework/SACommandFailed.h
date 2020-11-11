/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SAClientBoundCommand.h>

@class NSString, NSArray;

@interface SACommandFailed : SABaseClientBoundCommand <SAServerBoundCommand, SAClientBoundCommand>

@property (assign,nonatomic) long long errorCode; 
@property (nonatomic,copy) NSString * reason; 
@property (nonatomic,copy) NSString * turnId; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
+(id)commandFailed;
+(id)commandFailedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)commandFailedWithErrorCode:(long long)arg1 ;
+(id)commandFailedWithReason:(id)arg1 ;
-(NSString *)reason;
-(id)groupIdentifier;
-(id)initWithReason:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(long long)errorCode;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)turnId;
-(void)setTurnId:(NSString *)arg1 ;
-(id)initWithErrorCode:(long long)arg1 ;
@end

