/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SASetSingleClientState.h>

@class SAWristDetectionStatusClientState, NSString;

@interface SASetWristDetectionStatusClientState : SABaseCommand <SAServerBoundCommand, SASetSingleClientState>

@property (nonatomic,retain) SAWristDetectionStatusClientState * clientState; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setWristDetectionStatusClientState;
+(id)setWristDetectionStatusClientStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAWristDetectionStatusClientState *)clientState;
-(void)setClientState:(SAWristDetectionStatusClientState *)arg1 ;
@end

