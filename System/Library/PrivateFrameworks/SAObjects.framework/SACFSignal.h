/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainCommand.h>

@class NSString, NSArray, SACFAbstractClientCommand;

@interface SACFSignal : SADomainCommand

@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,copy) NSString * flowScriptHint; 
@property (nonatomic,copy) NSArray * scriptIdentifiers; 
@property (nonatomic,retain) SACFAbstractClientCommand * signalPayload; 
+(id)signal;
+(id)signalWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)domain;
-(void)setDomain:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSArray *)scriptIdentifiers;
-(void)setScriptIdentifiers:(NSArray *)arg1 ;
-(NSString *)flowScriptHint;
-(void)setFlowScriptHint:(NSString *)arg1 ;
-(SACFAbstractClientCommand *)signalPayload;
-(void)setSignalPayload:(SACFAbstractClientCommand *)arg1 ;
@end

