/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAUISnippet.h>

@class NSString, NSURL, NSArray;

@interface SAGuidanceGuideDomainSnippet : SAUISnippet

@property (nonatomic,copy) NSString * domainAlternateDisplayName; 
@property (nonatomic,copy) NSString * domainDisplayName; 
@property (nonatomic,copy) NSURL * domainIconURI; 
@property (nonatomic,copy) NSString * domainName; 
@property (assign,nonatomic) BOOL enabledInOfflineMode; 
@property (assign,nonatomic) BOOL enabledInOnlineMode; 
@property (nonatomic,copy) NSArray * guideSections; 
@property (nonatomic,copy) NSString * iconDisplayIdentifier; 
@property (assign,nonatomic) BOOL iconNeedsProcessing; 
@property (nonatomic,copy) NSString * iconResourceName; 
@property (assign,nonatomic) BOOL isAppIcon; 
@property (assign,nonatomic) BOOL performIntentEnabledAppAuthorizationCheck; 
@property (nonatomic,copy) NSString * tagPhrase; 
+(id)guideDomainSnippet;
+(id)guideDomainSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)domainName;
-(void)setDomainName:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)domainAlternateDisplayName;
-(void)setDomainAlternateDisplayName:(NSString *)arg1 ;
-(NSString *)domainDisplayName;
-(void)setDomainDisplayName:(NSString *)arg1 ;
-(NSURL *)domainIconURI;
-(void)setDomainIconURI:(NSURL *)arg1 ;
-(BOOL)enabledInOfflineMode;
-(void)setEnabledInOfflineMode:(BOOL)arg1 ;
-(BOOL)enabledInOnlineMode;
-(void)setEnabledInOnlineMode:(BOOL)arg1 ;
-(NSArray *)guideSections;
-(void)setGuideSections:(NSArray *)arg1 ;
-(NSString *)iconDisplayIdentifier;
-(void)setIconDisplayIdentifier:(NSString *)arg1 ;
-(BOOL)iconNeedsProcessing;
-(void)setIconNeedsProcessing:(BOOL)arg1 ;
-(NSString *)iconResourceName;
-(void)setIconResourceName:(NSString *)arg1 ;
-(BOOL)isAppIcon;
-(void)setIsAppIcon:(BOOL)arg1 ;
-(BOOL)performIntentEnabledAppAuthorizationCheck;
-(void)setPerformIntentEnabledAppAuthorizationCheck:(BOOL)arg1 ;
-(NSString *)tagPhrase;
-(void)setTagPhrase:(NSString *)arg1 ;
@end

