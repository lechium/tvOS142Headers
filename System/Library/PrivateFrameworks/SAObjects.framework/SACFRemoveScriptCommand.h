/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SACFRemoveScriptCommand : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * scriptIdentifiers; 
+(id)removeScriptCommand;
+(id)removeScriptCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)scriptIdentifiers;
-(void)setScriptIdentifiers:(NSArray *)arg1 ;
@end
