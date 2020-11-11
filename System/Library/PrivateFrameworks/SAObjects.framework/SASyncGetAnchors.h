/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSDictionary, NSString;

@interface SASyncGetAnchors : SABaseClientBoundCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * appMetaDataList; 
@property (nonatomic,copy) NSDictionary * customVocabSources; 
@property (assign,nonatomic) BOOL includeAllKnownAnchors; 
@property (nonatomic,copy) NSArray * sources; 
@property (nonatomic,copy) NSString * syncReason; 
@property (nonatomic,copy) NSArray * watchAppMetaDataList; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getAnchors;
+(id)getAnchorsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)sources;
-(void)setSources:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSArray *)appMetaDataList;
-(void)setAppMetaDataList:(NSArray *)arg1 ;
-(NSDictionary *)customVocabSources;
-(void)setCustomVocabSources:(NSDictionary *)arg1 ;
-(BOOL)includeAllKnownAnchors;
-(void)setIncludeAllKnownAnchors:(BOOL)arg1 ;
-(NSString *)syncReason;
-(void)setSyncReason:(NSString *)arg1 ;
-(NSArray *)watchAppMetaDataList;
-(void)setWatchAppMetaDataList:(NSArray *)arg1 ;
@end

