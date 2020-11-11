/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAUISnippetInteraction.h>

@class SADomainObject;

@interface SAUISnippetObjectInteraction : SAUISnippetInteraction

@property (nonatomic,retain) SADomainObject * object; 
+(id)snippetObjectInteraction;
+(id)snippetObjectInteractionWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setObject:(SADomainObject *)arg1 ;
-(SADomainObject *)object;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

